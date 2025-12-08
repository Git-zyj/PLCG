#!/bin/bash
# run.sh
SEED=${1:-1}  # 如果没有提供参数，默认使用1

../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=${SEED}

python3 yarpgen_simplify.py ./func.c