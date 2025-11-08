# THIS CODE WILL BE REFACTORED!!!
# todo use ast eval, since eval is unsafe!
import random
import math
import numpy as np
import logging
import sys
import os
import re

from bidict import bidict
from collections import defaultdict, Counter
from typing import *
from itertools import product

from parse_input import DataClass, parse_data
from path_settings import json_input_path, target_path
from basic_params_settings import enable_if_branch, enable_reverse_dim
from polybench_style_file_generation import polybench_style_file_generation
from schedule import Schedule_tree
from array_data import ArrayData
from tools import generate_terms

class C_Code_Generator:
    def __init__(self, log_level: int = logging.WARNING, log_path = None) -> None:
        """初始化代码生成器，设置默认数据结构"""
        self._reset_data()  # 初始化数据
        self._setup_logging(log_level, log_path)  # 提取日志设置到独立方法
    
    def _setup_logging(self, log_level: int, log_file: str) -> None:
        """独立的日志设置方法"""
        # 清除已有的处理器，添加新的
        logger = logging.getLogger("Properties")
        logger.setLevel(logging.DEBUG)
        
        # 移除所有现有处理器
        for handler in logger.handlers[:]:
            logger.removeHandler(handler)
        
        formatter = logging.Formatter(f'%(asctime)s - {os.path.basename(self.filename)} - %(name)s - %(levelname)s - %(message)s')
        
        # 添加新的处理器
        
        stream_handler = logging.StreamHandler(sys.stdout)
        stream_handler.setLevel(log_level)
        stream_handler.setFormatter(formatter)
        
        logger.addHandler(stream_handler)
        
        if log_file is not None:
            file_handler = logging.FileHandler(log_file, mode='w', encoding='utf-8')
            file_handler.setLevel(logging.WARNING) # 有需要再更改
            file_handler.setFormatter(formatter)
        
            logger.addHandler(file_handler)
        
        self.logger = logger
    
    def update_logging(self) -> None:
        """更新文件名并立即更新logger格式"""
        
        # 如果logger已创建，更新其formatter
        if hasattr(self, 'logger') and self.logger.handlers:
            new_format = f'%(asctime)s - {os.path.basename(self.filename)} - %(name)s - %(levelname)s - %(message)s'
            new_formatter = logging.Formatter(new_format)
            
            for handler in self.logger.handlers:
                handler.setFormatter(new_formatter)
    
    def _reset_data(self) -> None:
        """重置数据，但不影响logger"""
        self.filename = ""
        self._parsed_data = None
        self.arrays_write = defaultdict(ArrayData)
        self.arrays_reads = defaultdict(lambda: defaultdict(ArrayData))
        self.bounds_data = {}
        self.value_params_and_iterators = {'max':{}, 'min':{}}
        self.iterators_stmts = []
        self.schedule_tree = Schedule_tree()
        self.loop_structure = {}
        self.loop_body = []
        self.SCoP = []
    
    def generate_c_code(self, filename: str) -> None:
        self._reset_data()  # 每次生成代码前重置数据
        
        self.filename = filename
        self.update_logging()
        # self.logger.debug(f"\nStart code generation for file {self.filename}\n")
        
        self._parsed_data = parse_data(self.filename)
        # self.logger.debug(f'Generation start for "{self.filename}".\n')
        # self.logger.debug(f'_parsed_data: {self._parsed_data}\n')
        
        self.extract_instructions()
        # self.logger.debug(f'arrays_write: {self.arrays_write}\n')
        # self.logger.debug(f'arrays_reads: {self.arrays_reads}\n')
        
        self.create_bounds_data()
        # self.logger.debug(f'initial bounds_data: {self.bounds_data}\n')
        
        arrays_in_stmts = self.parse_arrays()
        # self.logger.debug(f'arrays_in_stmts: {arrays_in_stmts}\n')
        # self.logger.debug(f'bounds_data after filled: {self.bounds_data}\n')
        
        self.convert_statements_to_expressions(arrays_in_stmts)
        # self.logger.debug(f'loop_body: {self.loop_body}\n')
        
        self.translate_calculated_values_to_bounds()
        # self.logger.debug(f'loop_structure: {self.loop_structure}\n')
        # self.logger.debug(f'final bounds_data: {self.bounds_data}\n')
        
        self.get_final_loop()
        scop = '\n'.join(self.SCoP)
        # self.logger.debug(f'\nSCoP: \n{scop}\n\n\n')
        
        polybench_style_file_generation(self.filename, json_input_path, self.SCoP, target_path)

    def extract_instructions(self) -> None:
        """Extract 'dependency' and 'additional_computation' instructions from the DSL"""
        schedules = []
        branchs = []
        
        for stmt_id, instruction in enumerate(self._parsed_data.instructions):
            # self.logger.debug(f'instruction: {instruction}\n')
            schedules.append(instruction['schedule'])
            if enable_if_branch:
                branchs.append(instruction['branch'])
            
            self.iterators_stmts.append([instruction['schedule'][j] for j in range(len(instruction['schedule'])) if j % 2 == 1])

            if 'additional_computation' in instruction:
                additional_computation = instruction['additional_computation']
                for comp in additional_computation:
                    array = ArrayData(array_id=comp['array_id'], array_name=comp['array_name'], array_access_function=np.array(comp['array_access_function']))
                    if comp['array_type'] == "write":
                        self.arrays_write[stmt_id] = array
                    else:
                        self.arrays_reads[stmt_id][comp['array_id'][1]] = array
            
            if 'dependency' in instruction:
                dependency = instruction['dependency']
                for dep in dependency:
                    array = ArrayData(array_id=dep['array_id'], distance=np.array(dep['distance']), mapping=bidict({int(k): int(v) for k, v in dep['mapping'].items()}), parent_stmt_id=dep['parent_stmt_id']) # json会修改dict中元素类型，需要改回int
                    if dep['category'] == "write": # get source array info when dep in WAW, or get write array info when dep is WAR or RAW
                        self.arrays_write[stmt_id] = array
                    else:
                        self.arrays_reads[stmt_id][dep['array_id'][1]] = array
            
        self.schedule_tree.add_paths(schedules, branchs)
        self.schedule_tree.check_tree()
        
        scop_init = '\n'.join(self.schedule_tree.extract_tree('code'))
        # self.logger.debug(f'initial scop: \n{scop_init}\n')
        
        # self.logger.debug(f'arrays_write: {self.arrays_write}\n')
        # self.logger.debug(f'arrays_reads: {self.arrays_reads}\n')
        # self.logger.debug(f'iterators_stmts: {self.iterators_stmts}\n')
        
    def create_bounds_data(self) -> None:
        """Create a dict that will store loop bounds for each loop iterator and assign special loop bounds (iterator expressions). Store value for params in dict for calc_bound"""
        iterators = sorted({iterator for iterators_stmt in self.iterators_stmts for iterator in iterators_stmt}) # 去重
        
        for iterator in iterators:
            self.bounds_data[iterator] = {
                'min': {'numerical': set(), 'string': set(), 'iterator': defaultdict(set), 'bound_value': None},
                'max': {'numerical': set(), 'string': set(), 'iterator': defaultdict(set), 'bound_value': None}
            }
        
        for param, value in self._parsed_data.params.items():
            self.value_params_and_iterators['max'][param] = value
            self.value_params_and_iterators['min'][param] = value
        
        # self.logger.debug(f'initial value_params_and_iterators:\n{self.value_params_and_iterators}')
        
        # check assigned loop_bounds
        if self._parsed_data.special_loop_bounds and self._parsed_data.params:
            # self.logger.debug(f'special_loop_bounds: {self._parsed_data.special_loop_bounds}\n')
            for iterator, bound in self._parsed_data.special_loop_bounds.items():
                # self.logger.debug(f'iterator: {iterator}, value: {value}\n')
                min_value, max_value = bound
                self._process_special_bound(iterator, 'min', min_value)
                self._process_special_bound(iterator, 'max', max_value)
    
    def _process_special_bound(self, iterator_key: str, bound_type: str, value: str) -> None:
        """处理边界值并将其分类到相应的集合中"""
        expression_type, expression, iterators_used = self.evaluate_expression(value)
        
        if iterators_used == (): # numerical or string
            self.bounds_data[iterator_key][bound_type][expression_type].add(expression)
        else: # iterator
            self.bounds_data[iterator_key][bound_type][expression_type][iterators_used].add(expression)
    
    def parse_arrays(self) -> List[List[str]]:
        """Transfer access info to array index and update loop bounds"""
        arrays_in_stmts = []
        
        # self.logger.debug(f'arrays_write before parsing:\n{self.arrays_write}\n')
        # self.logger.debug(f'arrays_reads before parsing:\n{self.arrays_reads}\n')
        
        for stmt_id in self.arrays_write:
            arrays_in_stmt = []
            
            # 处理写入数组
            array_repr = self._process_single_array_indexes((stmt_id, 0))
            arrays_in_stmt.append(array_repr)
            
            # 处理读取数组
            for dep_read_id in self.arrays_reads[stmt_id]:
                array_repr = self._process_single_array_indexes((stmt_id, dep_read_id))
                arrays_in_stmt.append(array_repr)
                
            arrays_in_stmts.append(arrays_in_stmt)
            
        # self.logger.debug(f'arrays_write after parsing: {self.arrays_write}\n')
        # self.logger.debug(f'arrays_reads after parsing: {self.arrays_reads}\n')
        # self.logger.debug(f'bounds_data before calc:\n{self.bounds_data}\n')
            
        return arrays_in_stmts
    
    def _process_single_array_indexes(self, array_id: Tuple[int]) -> str:
        """处理单个数组的访问信息"""
        if array_id[1] == 0: # write
            array_pre = self.arrays_write[array_id[0]]
        else: # read
            array_pre = self.arrays_reads[array_id[0]][array_id[1]]
        
        # 递归获取数组访问函数
        array = self.get_array_info(array_pre)
        
        # self.logger.debug(f'Finish info processing for array {array.array_id}: {array}\n')
        
        if array_id[1] == 0:
            self.arrays_write[array_id[0]] = array
        else:
            self.arrays_reads[array_id[0]][array_id[1]] = array
        
        # 计算每个访问函数的边界
        for array_depth_id, access_function in enumerate(array.array_access_function):
            self.calculate_bounds(array_id[0], array.array_name, access_function, array_depth_id)
        
        # 获取索引数组访问
        indexed_access = self.get_indexed_array_access(array_id[0], array.array_access_function)
        
        # self.logger.debug(f'Indexed access for array {array.array_id}: {indexed_access}\n')
        
        # 构建数组访问表示并添加到语句中
        array_repr = array.array_name + ''.join(f'[{idx}]' for idx in indexed_access)
        
        # self.logger.debug(f'Array representation for array {array.array_id}: {array_repr}\n')
        
        return array_repr
    
    def get_indexed_array_access(self, stmt_id: int, array_access_function: np.ndarray) -> List[str]:
        """Translate all access functions within an array expressed as a matrix of numbers to expression with loop indexes.\n
        Example:\n
        array_name = 'A', array_access_function = [[2, 0, 0, -1], [-1, 1, 2, 0]] -> 'A', ['2-k', '-1+i+2*j']
        """
        index_letters = self.iterators_stmts[stmt_id]
        # self.logger.debug(f'index_letters: {index_letters}\n')
        # self.logger.debug(f'array_access_function: {array_access_function}\n')
        
        indexed_array_access = [self.translate_access_function_to_indexes(access_fun, index_letters) 
                for access_fun in array_access_function]
        
        # self.logger.debug(f'indexed_array_access: {indexed_array_access}\n')
        
        return indexed_array_access

    def translate_access_function_to_indexes(self, access_fun: List[int], index_letters: List[str]) -> str:
        """Return a string representation of access function expressed with loop indexes.
        
        Example:
            access_fun = [1, 1, 2, -1], index_letters = ['i','j','k']
            -> 'i+j+2*k-1'
        """
        terms = generate_terms(len(index_letters), self._parsed_data.max_degree)
        
        # self.logger.debug(f'index_letters: {index_letters}')
        # self.logger.debug(f'terms: {terms}')
        # self.logger.debug(f'access_fun: {access_fun}')
        
        # 构建多项式字典
        poly_dict = {term: coeff for term, coeff in zip(terms, access_fun)}
        
        # self.logger.debug(f'poly_dict: {poly_dict}')
        
        # 基项系数转化为str
        return self._poly_to_str(poly_dict, index_letters)
    
    @staticmethod
    def _build_term_expression(coeff: float, iterators: List[Tuple[str, int]]) -> str:
        """构建term的表达式（核心公共方法）
        
        Args:
            coeff: 系数
            iterators: term中所使用的循环变量列表，每个元素为(变量名, 幂次数)
        
        Returns:
            格式化后的term字符串
        """
        if coeff == 0:
            return ""
        
        # 构建变量部分
        term_str = ""
        for iterator_name, count in sorted(iterators):
            if term_str:
                term_str += "*"
            if count == 1:
                term_str += iterator_name
            else:
                term_str += f"{iterator_name}^{count}"
        
        # 构建完整项
        if not term_str:  # 常数项
            if isinstance(coeff, str): # 可能计算出如PB_M的值
                return coeff
            else:
                return f"{coeff:+g}"
        elif coeff == 1:
            return f"+{term_str}"
        elif coeff == -1:
            return f"-{term_str}"
        else:
            if isinstance(coeff, str):
                return f"{coeff}*{term_str}"
            else:
                return f"{coeff:+g}*{term_str}"
    
    def _poly_to_str(self, poly_dict: Dict[Tuple, float], iterator_names: List[str]) -> str:
        """将多项式字典转换为可读字符串（使用实际循环变量名）"""
        terms = []
        
        # self.logger.debug(f'poly_dict: {poly_dict}')
        
        for term, coeff in sorted(poly_dict.items(), key=lambda x: (len(x[0]), x[0]), reverse=True):
            if coeff == 0:
                continue
            
            # self.logger.debug(f'term in poly_dict: {term}')
            
            iterator_counts = Counter(term)
            
            # self.logger.debug(f'iterator_counts: {iterator_counts}')
            
            # 转换为变量列表
            iterators = [(iterator_names[iterator_idx], count) for iterator_idx, count in iterator_counts.items()]
            term_expr = self._build_term_expression(coeff, iterators)
            if term_expr:
                terms.append(term_expr)
        
        if not terms:
            return "0"
        
        result = "".join(terms)
        return result[1:] if result.startswith('+') else result

    def get_array_info(self, child_array: ArrayData) -> ArrayData:
        """Return array with array access from write array (in WAR or RAW dep) or source array (in WAW) using parent_stmt_id and distance.\n
        When the write array or source array doesn't have array access since it also depends on another array, try to recursively get array access from the initial array.\n
        Example:\n
        child_array: parent_stmt_id = 0, distance = [1,-1,0]\n
        array_write in stmt {0}: array_name = 'A', array_access_function = [[2, 0, 0, -1], [-1, 1, 2, 0]]\n
        'A', ['2-k', '-1+i+2*j'] -> 'A', ['2-k', '-1+(i+1)+2*(j-1)']
        output: 'A', [[2, 0, 0, -1], [-2, 1, 2, 0]]
        """
            
        # self.logger.debug(f'child_array before recursively search: {child_array}\n')
        
        if child_array.parent_stmt_id is not None:
            parent_array = self.arrays_write[child_array.parent_stmt_id] # get write array or source array (namely parent array)
            parent_array = self.get_array_info(parent_array)
        
            # self.logger.debug(f'parent (source for WAW / write for WAR and RAW) array: {parent_array}')

            self.arrays_write[child_array.parent_stmt_id] = parent_array
            
            # self.logger.debug(f'array_access_function: {parent_array.array_access_function}\n')
            # self.logger.debug(f'index_letters: {index_letters}\n')
            # self.logger.debug(f'distance: {child_array.distance}\n')
            
            array_access_function = self.generate_access_functions_from_distance(parent_array, child_array)
            
            child_array = ArrayData(array_id=child_array.array_id, array_name=parent_array.array_name, array_access_function=array_access_function)
            
            # self.logger.debug(f'child_array after recursively search: {child_array}\n')
            
        elif child_array.array_access_function is None:
            raise ValueError(f"Array access function is missing and cannot be resolved for array with parent_stmt_id {child_array.parent_stmt_id}")
        else:
            pass
        
        return child_array

    def apply_offsets_to_poly(self, term_dict: Dict[Tuple, float], offsets: Dict[int, int]) -> Dict[Tuple, float]:
        """
        将偏移量应用到多项式并展开
        
        Args:
            term_dict: 原始多项式项字典（从access_fun解析而来）
            offsets: 偏移距离字典（key：child_array中所用到的循环变量，value：依赖距离）
            mapping: 循环变量i对基项一次项x的一一映射
            
        Returns:
            应用偏移后的新多项式
        """
        new_poly = defaultdict(int)
        
        # self.logger.debug(f'term_dict: {term_dict}')
        # self.logger.debug(f'offsets: {offsets}')
        
        for term, coeff in term_dict.items():
            if coeff == 0:
                continue
                
            # 对常数项直接处理
            if not term:
                new_poly[()] += coeff  # 常数项不变
                continue
                
            # 展开应用偏移后的多项式项
            substituted = {(): 1}
        
            for iterator_idx in term:
                # 获取该循环变量的偏移量并创建表达式
                iterator_offset = offsets.get(iterator_idx, 0) 
                offset_iterator = self.create_offset_iterator(iterator_idx, 1, iterator_offset)
                
                # 计算 substituted * (iterator + offset)
                substituted = self._multiply_polynomials(substituted, offset_iterator)
            
            # 合并到新多项式（乘以原始系数）
            for t, c in substituted.items():
                new_poly[t] += coeff * c
                
        # 移除零系数项
        return {k: v for k, v in new_poly.items() if v != 0}

    @staticmethod
    def create_offset_iterator(iterator_idx: int, coeff: float, offset: float) -> Dict[Tuple, float]:
        """
        创建 (iterator + offset) 表达式
        
        Args:
            iterator_idx: 变量索引
            coeff: 系数
            offset: 偏移量
            
        Returns:
            表示 (coeff * iterator + coeff * offset) 的字典
        """
        if offset == 0:
            return {(iterator_idx,): coeff}
        return {(iterator_idx,): coeff, (): coeff * offset}

    def _multiply_polynomials(self, poly1: Dict[Tuple, float], poly2: Dict[Tuple, float]) -> Dict[Tuple, float]:
        """多项式乘法"""
        result = defaultdict(int)
        for (t1, c1), (t2, c2) in product(poly1.items(), poly2.items()):
            merged_term = tuple(sorted(set(t1 + t2)))
            result[merged_term] += c1 * c2
        return result

    def generate_access_functions_from_distance(self, parent_array: ArrayData, child_array: ArrayData) -> np.ndarray:
        """
        应用偏移量到系数矩阵
        
        Args:
            parent_array: 包含以下所需信息
                array_id: 用于获取数组所在语句对应的变量列表index_letters_parent，如['i', 'j', 'k']
                access_functions: 原始系数矩阵（每行对应一个访问函数），如 [[2, 0, 0, -1], [1, 1, 1, 0]]，表示[2-k][1+i+j]
            child_array: 包含以下信息
                array_id: 用于获取数组所在语句对应的变量列表index_letters_child，如['i', 'j', 'k']
                distance: 距离向量（与terms中的循环变量一一对应），如 [1, -1, 0] 表示 i→i+1, j→j-1, k→k+0
            
        Returns:
            新的系数矩阵，如[[2, 0, 0, -1], [1, 1, 1, 0]]，表示[2-(k+0)][1+(i+1)+(j-1)]
        """
        
        index_letters_parent, index_letters_child = self.iterators_stmts[parent_array.array_id[0]], self.iterators_stmts[child_array.array_id[0]]
            
        # 获取和access function对应变量维数的基项
        depth_stmt_child = len(index_letters_child)
        terms_child = generate_terms(depth_stmt_child, self._parsed_data.max_degree)
        terms_parent = generate_terms(len(index_letters_parent), self._parsed_data.max_degree)
        
        # self.logger.debug(f'Applying distance to access functions:\nparent_array.array_id: {parent_array.array_id}\nchild_array.array_id: {child_array.array_id}\naccess_functions:\n{parent_array.array_access_function}\nindex_letters_parent: {index_letters_parent}\nindex_letters_child: {index_letters_child}\ndistance: {child_array.distance}\nmapping: {child_array.mapping}\n')
        
        # 输入验证 
        if len(child_array.distance) > depth_stmt_child:
            raise ValueError(f"距离向量长度必须不大于变量列表长度，期望不大于 {depth_stmt_child}，实际 {len(child_array.distance)}")
        
        # 生成映射后的项
        mapped_terms = [()] + [
            tuple(child_array.mapping[iterator] for iterator in term)
            for term in terms_parent
            if any(iterator in child_array.mapping for iterator in term)
        ]
        
        trimmed_access_functions = [
            [access_fun[0]] + [
                access_fun[i+1] for i, term in enumerate(terms_parent[1:])
                if any(iterator in child_array.mapping for iterator in term)
            ]
            for access_fun in parent_array.array_access_function
        ]
        
        offset = {iterator:value for iterator, value in zip(child_array.mapping.values(), child_array.distance)}
        
        mapping_presentation = [(f'x{k}: i{v}(即{index_letters_child[v]})') for k, v in child_array.mapping.items()]
        
        # self.logger.debug(f'trimmed_access_functions:\n{trimmed_access_functions}\nterms_parent: {terms_parent}\nterms_child: {terms_child}\nmapping: {mapping_presentation}\nmapped_terms: {mapped_terms}\noffset: {offset}\n')
        
        # 应用偏移量生成新的访问函数
        new_access_functions = []
        
        for i, access_fun in enumerate(trimmed_access_functions):
            # 将系数映射到项字典
            poly_dict = dict(zip(mapped_terms, access_fun))
            
            # self.logger.debug(f'poly_dict: {poly_dict}')
            
            # 应用偏移量并展开新多项式
            new_poly_dict = self.apply_offsets_to_poly(poly_dict, offset)
            
            # self.logger.debug(f'new_poly_dict: {new_poly_dict}')
            
            # self.logger.debug(f"原始多项式 {i}: {self._poly_to_str(poly_dict, index_letters_child)}")
            # self.logger.debug(f"变换后多项式 {i}: {self._poly_to_str(new_poly_dict, index_letters_child)}\n")
            
            # 将新多项式转换回系数向量
            new_access_fun = [new_poly_dict.get(term, 0) for term in terms_child]
            new_access_functions.append(new_access_fun)
            
        # self.logger.debug(f'new_access_functions: {new_access_functions}')
            
        return np.array(new_access_functions, dtype=parent_array.array_access_function.dtype)

    def calculate_bounds(self, stmt_id: int, array_name: str, access_function: List[int], array_depth_id: int) -> None:
        """Based on rank of the array_access_function update the min and max bounds."""
        rank_iterator = self.get_rank(access_function[1:]) # don't pass the numerical value

        if rank_iterator == -1:  # we don't want to have an expression like C[-1] when access fun is [0,0,0, -1]
            value = access_function[0]
            param = self._parsed_data.array_sizes[array_name][array_depth_id]
            max_array_size = self._parsed_data.params[param]
            if value not in range(0, max_array_size):
                
                self.logger.debug(f'The constant in the {array_depth_id}th array access function {access_function} of {array_name} not within the array size bounds, reverse it for available generation')
                
                access_function[0] = -access_function[0]
                self.calculate_bounds(stmt_id, array_name, access_function, array_depth_id)
        else:
            
            access_function = access_function.copy() # 避免污染！
            
            rank = rank_iterator + 1 # 常量维位置补回
            
            value_at_rank = access_function[rank]
            
            access_function[rank] = 0  # ori value at rank reset to 0

            right_bound = self._parsed_data.array_sizes[array_name][array_depth_id]  # TODO: left bound is always 0 now
            
            # self.logger.debug(f'access_fun: {access_function}\nrank: {rank}\nright_bound: {right_bound}\n')
            
            fun = None
            lower_bound, upper_bound = [], []
            
            if value_at_rank == 1:
                lower_bound = self.get_opposite_numbers(access_function)
                upper_bound = lower_bound[:]
                upper_bound[0] = self.build_simple_expression(right_bound, 1, upper_bound[0])
            elif value_at_rank == -1:
                upper_bound = access_function[:]
                lower_bound = upper_bound[:]
                lower_bound[0] = self.build_simple_expression(right_bound, -1, lower_bound[0])
            elif value_at_rank > 1:
                alpha = value_at_rank
                alpha_min_1 = alpha - 1
                lower_bound = self.get_opposite_numbers(access_function)
                lower_bound[0] += alpha_min_1
                upper_bound = lower_bound[:]
                upper_bound[0] = self.build_simple_expression(right_bound, 1, upper_bound[0])
                fun = self.write_as_fraction
            elif value_at_rank < -1:
                alpha = value_at_rank * (-1)
                alpha_min_1 = alpha - 1
                lower_bound = access_function[:]
                lower_bound[0] = self.build_simple_expression(right_bound, -1, alpha_min_1 + lower_bound[0])
                upper_bound = access_function[:]
                upper_bound[0] = alpha_min_1 + upper_bound[0]
                fun = self.write_as_fraction
                
            # self.logger.debug(f'upp: {upper_bound}\n')
            # self.logger.debug(f'low: {lower_bound}\n')
            
            self.update_bounds(stmt_id, [lower_bound], rank, 'min', value_at_rank, fun)
            self.update_bounds(stmt_id, [upper_bound], rank, 'max', value_at_rank, fun)
    
    def get_rank(self, sequence: List[int]) -> int:
        """Return the position in the sequence that is the last one to have the value != 0."""
        for i, el in enumerate(reversed(sequence)):
            if el != 0:
                return len(sequence) - i - 1
        return -1    
    
    def get_opposite_numbers(self, sequence: List[int]) -> List[int]:
        """Multiply each element in a sequence by -1 and return as a list."""
        return [-el for el in sequence]    
    
    def build_simple_expression(self, iterator_name: Optional[str] = None, iterator_coeff: float = 0, constant: float = 0) -> str:
        """构建简单表达式
        
        Args:
            iterator_name: 循环变量名，如果为None则不包含
            iterator_coeff: 循环变量系数
            constant: 常数项
        
        Returns:
            格式化后的表达式字符串
        
        Examples:
            build_simple_expression('i', -1, -3)   -> "-i-3" 
            build_simple_expression('i', 1, 0)     -> "i"
            build_simple_expression(None, 0, 10)   -> "10"
        """
        terms = []
        
        # 构建变量项
        if iterator_name and iterator_coeff != 0:
            iterator_expr = self._build_term_expression(iterator_coeff, [(iterator_name, 1)])
            if iterator_expr:
                terms.append(iterator_expr)
        
        # 构建常数项
        if constant != 0:
            const_expr = self._build_term_expression(constant, [])
            if const_expr:
                terms.append(const_expr)
        
        if not terms:
            return "0"
        
        result = "".join(terms)
        # 处理开头的+号
        return result[1:] if result.startswith('+') else result
    
    def write_as_fraction(self, numerator: str, denominator: int) -> str:
        """Form a common fraction and return as a string."""
        return f'({numerator})/{abs(denominator)}'
    
    def update_bounds(self, stmt_id: int, bounds: List[List[int]], rank: int, bound_type: str, value_at_rank: int, fun: Optional[callable] = None) -> None:
        """Update bounds by evaluating access function."""
        # extract only the access function that will be an only element of the result array
        indexed_access = self.get_indexed_array_access(stmt_id, bounds)[0]

        if fun:
            indexed_access = fun(indexed_access, abs(value_at_rank))
        
        # self.logger.debug(f'indexed_access: {indexed_access}\n')
        
        expression_type, expression, iterators_used = self.evaluate_expression(indexed_access)
        
        if iterators_used == (): # numerical or string
            self.bounds_data[self.iterators_stmts[stmt_id][rank - 1]][bound_type][expression_type].add(expression)
        else: # iterator
            self.bounds_data[self.iterators_stmts[stmt_id][rank - 1]][bound_type][expression_type][iterators_used].add(expression)

    def evaluate_expression(self, expression: str) -> List[Union[str, int]]:
        """Try to evaluate the expression (especially common fractions from calculating bounds)."""
        expression = expression.strip()
        if not expression:
            return 'numerical', 0, ()
        
        # 检查特殊值
        special_values = {
            'inf': np.inf, '+inf': np.inf, 'infinity': np.inf, '+infinity': np.inf,
            '-inf': -np.inf, '-infinity': -np.inf
        }
        
        if expression.lower() in special_values:
            return 'numerical', special_values[expression.lower()], ()
        
        # 尝试数学表达式求值
        numeric_result = self._safe_eval_math_expression(expression)
        if numeric_result is not None:
            return 'numerical', numeric_result, ()
        
        # 检查是否包含已知迭代器
        iterators = {iterator for iterators_stmt in self.iterators_stmts for iterator in iterators_stmt}
        iterators_used = self.extract_signed_iterators(expression, iterators)
        if iterators_used:
            return 'iterator', expression, iterators_used
        else:
            return 'string', expression, ()

    def _safe_eval_math_expression(self, expression: str) -> Optional[Union[int, float]]:
        """安全地评估数学表达式"""
        try:
            # 只允许数学运算和函数
            allowed_names = {
                'sqrt': math.sqrt, 'pow': pow, 'abs': abs,
                'sin': math.sin, 'cos': math.cos, 'tan': math.tan,
                'pi': math.pi, 'e': math.e
            }
            
            # 使用空的 builtins 来增强安全性
            result = eval(expression, {"__builtins__": {}}, allowed_names)
            
            # 确保结果是数字
            if isinstance(result, (int, float)) and not math.isnan(result):
                return math.floor(result) if not math.isinf(result) else result
            return None
            
        except (NameError, SyntaxError, TypeError, ZeroDivisionError, ValueError):
            return None

    def extract_signed_iterators(self, expr: str, iterators: List[str]) -> Tuple[str]:
        """
        解析并提取带符号的循环变量
        """
        # 创建变量名的正则模式
        iterator_pattern = '|'.join(re.escape(it) for it in iterators)
        
        # 匹配：开头位置或运算符后的变量
        pattern = rf'(?:(?<=^)|(?<=[+\-*/(,]))\s*([+-])?\s*\b({iterator_pattern})\b'
        
        matches = re.findall(pattern, expr)
        result = []
        
        for sign, iterator in matches:
            if sign == '-':
                result.append(sign + iterator)
            else:
                result.append(iterator)
        
        return tuple(sorted(result))

    def convert_statements_to_expressions(self, arrays_in_stmts: List[List[str]]) -> None:
        """Add symbols randomly between elements to make them become a whole stmt"""
        
        # TODO: 目前只生成简单的赋值语句，后续可以考虑更复杂的表达式
        
        # self.logger.debug(f'arrays_in_stmts:\n{arrays_in_stmts}\n')
        
        for element in arrays_in_stmts:
            element.append(str(random.randint(1, 6)))  # add constant
            # '=' and ';' are included.
            statement_symbols = self.get_statement_symbols(len(element) - 2) # symbols数量应当为elements数量-1，再加上固定的'='，所以是 len(element)-2
            
            # self.logger.debug(f'element: {element}, statement_symbols: {statement_symbols}\n')
            
            statement = ''
            for array, symbol in zip(element, statement_symbols):
                statement += array
                if symbol == ';':
                    statement += symbol
                else:
                    statement += ' ' + symbol + ' '
            self.loop_body.append(statement)

    def get_statement_symbols(self, num_of_calculations: int) -> List[str]:
        """Return the list of symbols used in statement in the correct order."""
        # TODO: more ways of symbol selection other than randomly set + - *
        
        maths_symbols = ['+', '-', '*']
        random_maths_symbols = [random.choice(maths_symbols) for _ in range(num_of_calculations)]
        return ['='] + random_maths_symbols + [';']

    def translate_calculated_values_to_bounds(self) -> None:
        """Calculate bounds values and transfer them to loop structure type"""
        sorted_keys_bounds = sorted(self.bounds_data.keys())
        
        # self.logger.debug(sorted_keys)
        
        ndims = len(sorted_keys_bounds)
        reverse_dim = [False] * ndims
        
        # TODO: prepared for reversed loop, only one dim now
        if enable_reverse_dim:
            reverse_dim[random.sample(range(ndims), 1)[0]] = True
        
        for i, key in enumerate(sorted_keys_bounds):
            self.calc_bound(key, 0)  # lower -> max
            self.calc_bound(key, 1)  # upper -> min
            
            # Calculate min and max bounds using evaluated expressions
            values_max = self.value_params_and_iterators['max'].copy()
            values_min = self.value_params_and_iterators['min'].copy()
            
            self.value_params_and_iterators['max'][key] = max(
                eval(self.bounds_data[key]['min']['bound_value'], values_max),
                eval(self.bounds_data[key]['max']['bound_value'], values_max)
            )
            
            self.value_params_and_iterators['min'][key] = min(
                eval(self.bounds_data[key]['min']['bound_value'], values_min),
                eval(self.bounds_data[key]['max']['bound_value'], values_min)
            )
            
            self.generate_for_loop_structure(key, reverse_dim[i])

    def calc_bound(self, key: str, id: int) -> None:
        """Compare all bounds collected before. Types: numericals, strings(global parameters) and iterators"""
        func = [min, max]
        bound = bound_val = [0, np.inf][id]
        
        # self.logger.debug(f'bounds_data[{key}][{func[id].__name__}]:\n{self.bounds_data[key][func[id].__name__]}\n')
        
        # Process numerical bounds
        if self.bounds_data[key][func[id].__name__]['numerical']:
            numericals = {bound: bound_val}
            
            for num in self.bounds_data[key][func[id].__name__]['numerical']:
                if isinstance(num, str):
                    numericals[num] = eval(num, self._parsed_data.params.copy())
                else:  # int
                    numericals[num] = num
                    
            bound = bound_val = func[-id-1](numericals.values())
            
            # self.logger.debug(f'bound till numericals: {bound}\n')
        
        # Process string bounds
        if self.bounds_data[key][func[id].__name__]['string']:
            str_to_val = {bound: bound_val} if bound_val != [0, np.inf][id] else {}
            
            for bound_param in self.bounds_data[key][func[id].__name__]['string']:
                str_to_val[bound_param] = eval(bound_param, self._parsed_data.params.copy())
            
            extreme_val = func[-id-1](str_to_val.values())
            bound_keys = [k for k, v in str_to_val.items() if v == extreme_val]
            bound = sorted(bound_keys)[0] if bound_keys else bound
            bound_val = str_to_val.get(bound, bound_val)
            
            # self.logger.debug(f'bound till string: {bound} <-> {bound_val}\n')
        
        self.value_params_and_iterators[func[id].__name__][key] = bound_val
        
        # Process iterator bounds
        if self.bounds_data[key][func[id].__name__]['iterator']:
            
            # self.logger.debug(f"{func[-id-1].__name__} bound values for {key} in iterators:\n{self.bounds_data[key][func[id].__name__]['iterator']}\n")
            
            # Pre-calculate iterator expressions
            value_params = self._parsed_data.params.copy()
            bounds_iterator = []
            
            for iterators, exprs in self.bounds_data[key][func[id].__name__]['iterator'].items():
                # Set iterators to 0 to evaluate expressions without iterator influence
                for iterator in iterators:
                    value_params[iterator] = 0
                    
                # self.logger.debug(f"value_params updated:\n{value_params}\n")
                
                # Evaluate all expressions for current iterator set
                expr_values = {}
                for expr in exprs:
                    expr_values[expr] = eval(expr, value_params.copy())

                extreme_val = func[-id-1](expr_values.values())
                extreme_exprs = [k for k, v in expr_values.items() if v == extreme_val]
                extreme_expr = sorted(extreme_exprs)[0] if extreme_exprs else next(iter(exprs))
                bounds_iterator.append(extreme_expr)
                
            # self.logger.debug(f'bounds_iterator: {bounds_iterator}\n')
            
            # Evaluate iterator bounds in different contexts
            vals_iterator_0 = {bound: bound_val}
            vals_iterator_1 = {bound: bound_val}
            
            for bound_iterator in bounds_iterator:
                vals_iterator_0[bound_iterator] = eval(bound_iterator, self.value_params_and_iterators[func[-id-1].__name__].copy())
                vals_iterator_1[bound_iterator] = eval(bound_iterator, self.value_params_and_iterators[func[id].__name__].copy())
            
            # self.logger.debug(f"{func[-id-1].__name__} bound value containing iterators: {vals_iterator_0}\n")
            # self.logger.debug(f"{func[id].__name__} bound value containing iterators: {vals_iterator_1}\n")
            
            # Determine the extreme value and corresponding expression
            extreme_val = func[-id-1](vals_iterator_0.values())
            extreme_exprs = [k for k, v in vals_iterator_0.items() if v == extreme_val]
            extreme_expr = sorted(extreme_exprs, key=self.numeric_first_sort)[0] if extreme_exprs else bound

            # Check if iterator bounds affect the final result
            if vals_iterator_0[extreme_expr] != vals_iterator_0[bound]:
                # low_bound -> id=0 -> max(max(i), ..., bound_val) != bound_val -> bound_val < max(i)
                # upp_bound -> id=1 -> min(min(i), ..., bound_val) != bound_val -> bound_val > min(i)
                
                bound_set = {extreme_expr}
                
                # Collect bounds that satisfy the condition
                for bound_iterator, val in vals_iterator_0.items():
                    if val != vals_iterator_1[extreme_expr] and func[-id-1](val, vals_iterator_1[extreme_expr]) == val:
                        # low_bound -> id=0 -> max(N, min(i)) == N -> max(i) > N > min(i) -> low_bound = max(N, i)
                        # upp_bound -> id=1 -> min(N, max(i)) == N -> min(i) < N < max(i) -> upp_bound = min(N, i)
                        
                        bound_set.add(bound_iterator)

                # self.logger.debug(f'bound_set: {bound_set}\n')

                # Construct the final bound expression
                bound_set = list(bound_set)
                if len(bound_set) > 1:
                    # Create nested function calls for multiple bounds
                    func_name = func[-id-1].__name__
                    bound = bound_set[0]
                    for i in range(1, len(bound_set)):
                        bound = f'{func_name}({bound}, {bound_set[i]})'
                else:
                    bound = bound_set[0]

                # self.logger.debug(f'bound till iterator: {bound}\n')
        
        if str(bound) == 'inf': # only when id=1, if no constraint for iterator, randomly select an upper_bound
            bounds_from_rand = [param for param in self._parsed_data.params.copy()]
            
            self.logger.warning(f'randomly select bound from list instead of "inf" for bound {key}: {bounds_from_rand}')
            
            bound = random.choice(bounds_from_rand) 
            
        self.bounds_data[key][func[id].__name__]['bound_value'] = str(bound)
        
        # self.logger.debug(f'{func[id].__name__} bounds_data updated for key {key}: {self.bounds_data[key][func[id].__name__]["bound_value"]}')

    def numeric_first_sort(self, key):
        # 先尝试类型判断
        if isinstance(key, (int, float)):
            return (0, float(key))  # 统一转为浮点数比较
        
        key_str = str(key)
        # 再尝试内容判断
        try:
            # 尝试转换为数字（支持整数、浮点数、科学计数法等）
            num_val = float(key_str)
            return (0, num_val)
        except ValueError:
            # 无法转换为数字，按字符串处理
            return (1, key_str)

    def generate_for_loop_structure(self, key: str, is_reverse: bool) -> None:
        """Return formatted for loop structure filled with bounds."""
        lower_bound = self.bounds_data[key]['min']['bound_value']
        upper_bound = self.bounds_data[key]['max']['bound_value']
        if is_reverse:
            loop_expression = f'for (int {key} = {upper_bound} - 1; {key} >= {lower_bound}; {key}--)'
        else:
            loop_expression = f'for (int {key} = {lower_bound}; {key} < {upper_bound}; {key}++)'
        
        # self.logger.debug(f'loop expression: {loop_expression}\n')
        
        self.loop_structure[key] = (loop_expression, lower_bound, upper_bound)

    def get_final_loop(self) -> str:
        """assemble all components in loops together"""
        self.schedule_tree.update_tree(self.loop_structure, self.loop_body)
        self.SCoP = self.schedule_tree.extract_tree('code')
        return ''.join(self.SCoP)