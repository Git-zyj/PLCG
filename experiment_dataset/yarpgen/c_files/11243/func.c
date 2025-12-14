/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11243
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (min((var_13), ((short)-28703)))))) ? (var_6) : (((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3379619994U)) || (((/* implicit */_Bool) (short)28185)))))) : (var_12)))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 4398046511103ULL))));
}
