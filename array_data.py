from dataclasses import dataclass
from typing import Dict, Tuple, Union
import numpy as np

@dataclass(frozen=True)
class ArrayData:
    array_id: Tuple[int, int] = None
    array_name: Union[list, str] = None
    array_access_function: np.ndarray = None
    distance: np.ndarray = None
    mapping: Dict[int, int] = None
    parent_stmt_id: int = None