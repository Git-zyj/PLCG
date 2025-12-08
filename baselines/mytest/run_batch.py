#!/usr/bin/env python3
# run_batch.py

import os
import subprocess
import time
import argparse
import logging
import shutil
import sys
import gc

from pathlib import Path
from datetime import datetime
from concurrent.futures import ProcessPoolExecutor, as_completed

from yarpgen_simplify import process_file

yarpgen_script_path = os.path.join(os.path.dirname(__file__), '../yarpgen/scripts/yarpgen')

class BatchGenerator:
    def __init__(self, base_dir="./", max_workers=4):
        today = datetime.now().strftime("%Y%m%d")
        self.base_dir = os.path.abspath(base_dir)
        self.max_workers = max_workers
        self.c_files_dir = os.path.join(self.base_dir, "c_files")
        self.kernel_list_file = os.path.join(self.base_dir, "kernel_list")
        self.log_file = os.path.join(self.base_dir, f"yarpgen_generation_{today}.log")
        self.batch_size = 1000  # 分批处理，避免内存积累
        
        # 初始化日志系统
        self._setup_logging()
        
        
    def _clean_output_dir(self):
        """清空输出目录"""
        if os.path.exists(self.c_files_dir):
            self.logger.info(f"Cleaning output directory: {self.c_files_dir}")
            subprocess.run(['rm', '-rf', str(self.c_files_dir)])
        os.makedirs(self.c_files_dir, exist_ok=True)
        
        Path(self.kernel_list_file).resolve().unlink(missing_ok=True)
        
    def _setup_logging(self):
        """设置日志系统"""
        # 先手动创建文件处理器，使用'w'模式覆盖
        file_handler = logging.FileHandler(self.log_file, mode='w', encoding='utf-8')
        file_handler.setLevel(logging.DEBUG)
        
        stream_handler = logging.StreamHandler()
        stream_handler.setLevel(logging.INFO)
        
        formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
        file_handler.setFormatter(formatter)
        stream_handler.setFormatter(formatter)
        
        # 清除已有的处理器，添加新的
        logger = logging.getLogger()
        logger.setLevel(logging.DEBUG)
        
        # 移除所有现有处理器
        for handler in logger.handlers[:]:
            logger.removeHandler(handler)
            
        # 添加新的处理器
        logger.addHandler(file_handler)
        logger.addHandler(stream_handler)
        
        self.logger = logger
    
    def _add_to_kernel_list(self, path):
        """将成功的文件路径添加到kernel_list中（记录绝对路径）"""
        try:
            with open(self.kernel_list_file, 'a', encoding='utf-8') as f:
                f.write(f"{path}\n")
            # self.logger.debug(f"Added {os.path.basename(path)} to kernel list")
        except Exception as e:
            self.logger.error(f"Failed to add {os.path.basename(path)} to kernel list: {e}")
    
    def generate_single_case(self, seed):
        """生成单个测试用例"""
        output_dir = os.path.join(self.c_files_dir, str(seed))
        os.makedirs(output_dir, exist_ok=True)
        
        yarpgen_cmd = [
            yarpgen_script_path,
            "--std=c",
            "--emit-align-attr=none", 
            "--inp-as-args=none",
            "--emit-pragmas=none",
            "--expl-loop-param=true",
            f"--seed={seed}",
            "-o", output_dir
        ]
        
        try:
            # 运行yarpgen
            cmd_str = " ".join(yarpgen_cmd)
            # self.logger.debug(f"Running command: {cmd_str}")
            
            result = subprocess.run(yarpgen_cmd, capture_output=True, text=True)
            if result.returncode != 0:
                error_msg = f"yarpgen failed with return code {result.returncode}"
                if result.stderr:
                    error_msg += f": {result.stderr.strip()}"
                error_msg += f"\nCommand: {cmd_str}"
                return seed, False, error_msg
            
            # 检查并简化
            func_c_path = os.path.join(output_dir, "func.c")
            func_simplified_path = os.path.join(output_dir, f'{seed}.c')
            if not os.path.exists(func_c_path):
                return seed, False, "func.c not generated"
            
            process_output = process_file(func_c_path, func_simplified_path)  # True: simplify成功; 'skip': 不符合条件，跳过处理; False: 处理失败
            
            if process_output == True:
                # 成功处理，添加到kernel_list
                self._add_to_kernel_list(func_simplified_path)
                return seed, True, "simplification successful"
            elif process_output == False:
                return seed, False, "simplification failed"
            else:
                return seed, 'skip', process_output
            
        except Exception as e:
            return seed, False, f"exception: {str(e)}"
    
    def simplify_existing_case(self, seed_dir):
        """对已存在的测试用例进行simplify处理"""
        try:
            seed = os.path.basename(seed_dir)
            func_c_path = os.path.join(seed_dir, "func.c")
            func_simplified_path = os.path.join(seed_dir, f'{seed}.c')
            
            if not os.path.exists(func_c_path):
                return seed, False, "func.c not found"
            
            # 进行simplify处理
            process_output = process_file(func_c_path, func_simplified_path)
            
            if process_output == True:
                # 成功处理，添加到kernel_list
                self._add_to_kernel_list(func_simplified_path)
                return seed, True, "simplification successful"
            elif process_output == False:
                return seed, False, "simplification failed"
            else:
                return seed, 'skip', process_output
                
        except Exception as e:
            return seed, False, f"exception: {str(e)}"
    
    def generate_and_simplify_batch(self, seed_range):
        """运行一个批次"""
        start_seed, end_seed = seed_range
        batch_size = end_seed - start_seed + 1
        success_count = 0
        skip_count = 0
        fail_count = 0
        
        self.logger.info(f"Processing batch: seeds {start_seed}-{end_seed} ({batch_size} cases)")
        
        with ProcessPoolExecutor(max_workers=self.max_workers) as executor:
            # 使用as_completed避免内存积累
            futures = {executor.submit(self.generate_single_case, seed): seed for seed in range(start_seed, end_seed + 1)}
            
            for i, future in enumerate(as_completed(futures), 1):
                seed, success, message = future.result()
                
                if success == True:
                    success_count += 1
                    # self.logger.info(f"✓ Seed {seed:6d}: {message}")
                elif success == False:
                    fail_count += 1
                    self.logger.error(f"✗ Seed {seed:6d}: {message}")
                else:
                    skip_count += 1
                    self.logger.info(f"—— Seed {seed:6d}: {message}")
                
                # 每100个显示一次进度
                if i % 100 == 0:
                    progress = i / batch_size * 100
                    self.logger.info(f"Batch progress: {i}/{batch_size} ({progress:.1f}%)")
        
        return success_count, skip_count, fail_count
    
    def simplify_existing_cases(self, target_dir=None):
        """对已存在的测试用例进行simplify处理"""
        if target_dir is None:
            target_dir = self.c_files_dir
        
        if not os.path.exists(target_dir):
            self.logger.error(f"Target directory does not exist: {target_dir}")
            return
        
        # 获取所有子目录（每个seed一个目录）
        seed_dirs = []
        for item in os.listdir(target_dir):
            item_path = os.path.join(target_dir, item)
            if os.path.isdir(item_path):
                seed_dirs.append(item_path)
        
        total_cases = len(seed_dirs)
        
        if total_cases == 0:
            self.logger.error("No test cases found to simplify")
            return
        
        self.logger.info(f"Found {total_cases} existing test cases in {target_dir}")
        self.logger.info(f"Workers: {self.max_workers}, Batch size: {self.batch_size}")
        
        success_count = 0
        skip_count = 0
        fail_count = 0
        
        start_time = time.time()
        
        # 分批处理
        for i in range(0, total_cases, self.batch_size):
            batch_dirs = seed_dirs[i:i + self.batch_size]
            batch_success, batch_skip, batch_fail = self._simplify_batch(batch_dirs)
            
            success_count += batch_success
            skip_count += batch_skip
            fail_count += batch_fail
            
            # 强制垃圾回收
            gc.collect()
        
        total_time = time.time() - start_time
        total_cases = success_count + skip_count + fail_count
        
        # 生成总结报告
        summary = self._generate_summary_report(success_count, skip_count, fail_count, total_cases, total_time)
        # print(summary)
        self.logger.info("\n" + summary)
    
    def _simplify_batch(self, seed_dirs):
        """处理一批已存在的测试用例"""
        batch_size = len(seed_dirs)
        success_count = 0
        skip_count = 0
        fail_count = 0
        
        self.logger.info(f"Simplifying batch of {batch_size} existing cases")
        
        with ProcessPoolExecutor(max_workers=self.max_workers) as executor:
            futures = {executor.submit(self.simplify_existing_case, seed_dir): seed_dir for seed_dir in seed_dirs}
            
            for i, future in enumerate(as_completed(futures), 1):
                seed, success, message = future.result()
                
                if success == True:
                    success_count += 1
                    # self.logger.info(f"✓ Seed {seed:6s}: {message}")
                elif success == False:
                    fail_count += 1
                    self.logger.error(f"✗ Seed {seed:6s}: {message}")
                else:
                    skip_count += 1
                    self.logger.info(f"—— Seed {seed:6s}: {message}")
                
                # 每100个显示一次进度
                if i % 100 == 0:
                    progress = i / batch_size * 100
                    self.logger.info(f"Batch progress: {i}/{batch_size} ({progress:.1f}%)")
        
        return success_count, skip_count, fail_count
    
    def generate_and_simplify(self, total_cases=1000):
        """运行批量生成（分批处理）"""
        self.total_cases = total_cases
        
        self.logger.info(f"Starting generation of {total_cases} test cases")
        self.logger.info(f"Workers: {self.max_workers}, Batch size: {self.batch_size}")
        self.logger.info(f"Output directory: {self.base_dir}")
        
        total_success = 0
        total_skip = 0
        total_fail = 0
        
        start_time = time.time()
        
        # 分批处理
        for batch_start in range(1, total_cases + 1, self.batch_size):
            batch_end = min(batch_start + self.batch_size - 1, total_cases)
            
            success, skip, fail = self.generate_and_simplify_batch((batch_start, batch_end))
            total_success += success
            total_skip += skip
            total_fail += fail
            
            # 批次总结
            batch_time = time.time() - start_time
            self.logger.info(f"Batch {batch_start}-{batch_end} completed: "
                           f"Success: {success}, Skip: {skip}, Fail: {fail}, "
                           f"Time: {batch_time:.1f}s")
            
            # 强制垃圾回收
            gc.collect()
        
        total_time = time.time() - start_time
        
        # 生成并记录总结报告
        summary = self._generate_summary_report(total_success, total_skip, total_fail, total_cases, total_time)
        # print(summary)
        self.logger.info("\n" + summary)

    
    def _generate_summary_report(self, success_count, skip_count, fail_count, total_cases, total_time):
        """生成总结报告"""
        report = [
            "=" * 60,
            "BATCH GENERATION SUMMARY REPORT",
            "=" * 60,
            f"Command       : {'python ' + ' '.join(sys.argv)}", 
            f"Start time    : {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}",
            f"Total cases   : {total_cases}",
            f"Success       : {success_count} ({success_count/total_cases*100:.1f}%)",
            f"Skipped       : {skip_count} ({skip_count/total_cases*100:.1f}%)",
            f"Failed        : {fail_count} ({fail_count/total_cases*100:.1f}%)",
            f"Total time    : {total_time:.2f} seconds",
            f"Output dir    : {self.base_dir}",
            f"C Files dir   : {self.c_files_dir}",
            f"Kernel list   : {self.kernel_list_file}",
            f"Log file      : {self.log_file}",
            "=" * 60
        ]
        
        return "\n".join(report)

def main():
    parser = argparse.ArgumentParser(description='Batch generate test cases with yarpgen')
    parser.add_argument('--total', type=int, default=100, help='Total test cases to generate')
    parser.add_argument('-o', '--output_dir', type=str, default='./', help='Output directory')
    parser.add_argument('-j', '--workers', type=int, default=min(os.cpu_count(), 16), help='Number of parallel workers')
    parser.add_argument('--batch-size', type=int, default=2000, help='Batch size for processing')
    parser.add_argument('--log-level', choices=['DEBUG', 'INFO', 'WARNING', 'ERROR'], 
                       default='INFO', help='Logging level')
    parser.add_argument('--no-clean', action='store_true', 
                       help='Do not clean output directory before generation')
    parser.add_argument('--simplify-exist', action='store_true',
                       help='Only simplify existing test cases in the output directory')
    
    args = parser.parse_args()
    
    # 设置日志级别
    logging.getLogger().setLevel(getattr(logging, args.log_level))
    
    generator = BatchGenerator(
        base_dir=args.output_dir,
        max_workers=args.workers
    )
    generator.batch_size = args.batch_size
    
    try:
        if args.simplify_exist:
            args.no_clean = True
            # 简化已存在的测试用例
            generator.simplify_existing_cases()
        else:
            # 正常生成新测试用例
            if not args.no_clean:
                generator._clean_output_dir()
            generator.generate_and_simplify(total_cases=args.total)
            
    except KeyboardInterrupt:
        print("\nGeneration interrupted by user")
        logging.getLogger().info("Generation interrupted by user")
    except Exception as e:
        print(f"Unexpected error: {e}")
        logging.getLogger().error(f"Unexpected error: {e}")

if __name__ == "__main__":
    main()