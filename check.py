import os
import sys
import subprocess as sp
import argparse
import time
from multiprocessing import Pool
from collections import defaultdict
from path_settings import PROJECT_PATH, DATASET_PATH

def test_single_file(args_tuple):
    """
    编译并执行单个合成代码文件。
    返回 (basename, status, detail)
    
    status 取值:
        success          编译通过且执行返回码为0
        compile_failed   编译失败（非零返回码）
        compile_timeout  编译超时
        runtime_failed   编译通过但执行返回码非零（含信号终止）
        runtime_timeout  执行超时
    """
    c_file, poly_code_dir, polybench_dir, execution_dir, compile_timeout, run_timeout = args_tuple
    
    basename = os.path.splitext(os.path.basename(c_file))[0]
    out_file = os.path.join(execution_dir, f"{basename}.out")
    
    # ---- 编译 ----
    compile_cmd = [
        "gcc-15", c_file,
        os.path.join(polybench_dir, "polybench.c"),
        "-I", polybench_dir,
        "-I", poly_code_dir,
        "-lm", "-o", out_file
    ]
    
    try:
        comp = sp.run(
            compile_cmd,
            capture_output=True, text=True,
            timeout=compile_timeout
        )
        if comp.returncode != 0:
            # 取最后3行作为错误摘要
            stderr_lines = comp.stderr.strip().split('\n')
            summary = ' | '.join(stderr_lines[-3:]) if stderr_lines else 'unknown'
            return (basename, "compile_failed", summary[:300])
    except sp.TimeoutExpired:
        return (basename, "compile_timeout", "")
    except Exception as e:
        return (basename, "compile_failed", str(e)[:300])
    
    # ---- 执行 ----
    try:
        run = sp.run(
            [out_file],
            capture_output=True, text=True,
            timeout=run_timeout
        )
        if run.returncode < 0:
            # 被信号终止（SIGSEGV=-11, SIGABRT=-6 等）
            return (basename, "runtime_failed", f"signal {abs(run.returncode)}")
        elif run.returncode != 0:
            return (basename, "runtime_failed", f"exit_code={run.returncode}")
        else:
            return (basename, "success", "")
    except sp.TimeoutExpired:
        return (basename, "runtime_timeout", "")
    except Exception as e:
        return (basename, "runtime_failed", str(e)[:300])


def main():
    parser = argparse.ArgumentParser(
        description="编译执行通过率测试 — SCoPSyn 合法性约束消融实验"
    )
    parser.add_argument("--poly-code-dir", default=f"{DATASET_PATH}/poly_code",
                        help="合成代码所在目录")
    parser.add_argument("--polybench-dir", default=f"{PROJECT_PATH}/polybench",
                        help="PolyBench 辅助文件目录")
    parser.add_argument("--execution-dir", default=f"{DATASET_PATH}/execution",
                        help="编译产物输出目录")
    parser.add_argument("--workers", type=int, default=32,
                        help="并行编译执行进程数")
    parser.add_argument("--compile-timeout", type=int, default=30,
                        help="单个文件编译超时（秒）")
    parser.add_argument("--run-timeout", type=int, default=120,
                        help="单个文件执行超时（秒）")
    parser.add_argument("--limit", type=int, default=None,
                        help="限制测试文件数量（用于调试）")
    parser.add_argument("--error-log", default=f"{DATASET_PATH}/error_compile_and_execution.log",
                        help="错误详情输出文件路径")
    args = parser.parse_args()
    
    # 目录准备
    os.makedirs(args.execution_dir, exist_ok=True)
    os.system(f'rsync -r --delete {DATASET_PATH}/empty/ {args.execution_dir}/') # 初始化执行目录
    if not os.path.isdir(args.poly_code_dir):
        print(f"[ERROR] poly_code 目录不存在: {args.poly_code_dir}")
        sys.exit(1)
    
    # 收集所有 .c 文件
    c_files = sorted([
        os.path.join(args.poly_code_dir, f)
        for f in os.listdir(args.poly_code_dir)
        if f.endswith('.c')
    ])
    
    if args.limit:
        c_files = c_files[:args.limit]
    
    total = len(c_files)
    if total == 0:
        print("[ERROR] 未找到任何 .c 文件")
        sys.exit(1)
    
    print(f"测试配置: {total} 文件, {args.workers} 进程")
    print(f"编译超时: {args.compile_timeout}s, 执行超时: {args.run_timeout}s")
    print(f"poly_code: {args.poly_code_dir}")
    print(f"execution: {args.execution_dir}")
    print("-" * 60)
    
    stats = defaultdict(int)
    errors = []  # 收集编译/执行失败的详情
    start = time.time()
    
    tasks = [
        (f, args.poly_code_dir, args.polybench_dir, args.execution_dir,
         args.compile_timeout, args.run_timeout)
        for f in c_files
    ]
    
    with Pool(args.workers) as pool:
        for i, (basename, status, detail) in enumerate(
            pool.imap_unordered(test_single_file, tasks)
        ):
            stats[status] += 1
            if status != "success":
                errors.append((basename, status, detail))
            
            # 进度打印
            if (i + 1) % 500 == 0:
                print(f"  [{i+1:>6d}/{total}] "
                      f"ok={stats['success']:>6d} "
                      f"cfail={stats['compile_failed']:>5d} "
                      f"rfail={stats['runtime_failed']:>5d} "
                      f"ctout={stats['compile_timeout']:>4d} "
                      f"rto={stats['runtime_timeout']:>4d}")
    
    elapsed = time.time() - start
    
    # ---- 统计输出 ----
    compile_pass = (stats['success'] + stats['runtime_failed'] +
                    stats['runtime_timeout'])
    exec_pass = stats['success']
    
    print("\n" + "=" * 60)
    print(f"完成，耗时 {elapsed:.1f}s")
    print(f"文件总数:              {total:>8d}")
    print(f"编译通过:              {compile_pass:>8d}  ({compile_pass/total*100:5.1f}%)")
    print(f"  ├ 执行成功:          {stats['success']:>8d}  ({stats['success']/total*100:5.1f}%)")
    print(f"  ├ 执行失败(返回码):  {stats['runtime_failed']:>8d}")
    print(f"  └ 执行超时:          {stats['runtime_timeout']:>8d}")
    print(f"编译失败:              {stats['compile_failed']:>8d}")
    print(f"编译超时:              {stats['compile_timeout']:>8d}")
    print(f"综合成功率 "
          f"(编译且执行成功):    {exec_pass:>8d}  / {total} "
          f"= {exec_pass/total*100:.1f}%")
    
    # ---- 错误日志写入 ----
    if args.error_log:
        log_path = args.error_log
    else:
        # 默认写入 execution_dir 下
        log_path = os.path.join(args.execution_dir, "error_log.txt")
    
    if errors:
        with open(log_path, 'w') as f:
            f.write(f"错误日志 — {time.strftime('%Y-%m-%d %H:%M:%S')}\n")
            f.write(f"总数: {total}, 错误数: {len(errors)}\n")
            f.write("=" * 60 + "\n\n")
            for basename, status, detail in errors:
                f.write(f"[{status}] {basename}\n")
                if detail:
                    f.write(f"  {detail}\n")
                f.write("\n")
        print(f"\n错误详情已写入: {log_path} ({len(errors)} 条)")
    else:
        print("\n无错误，未生成错误日志")


if __name__ == "__main__":
    main()
