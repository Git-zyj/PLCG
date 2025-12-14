/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108997
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_5)) : (arr_1 [i_0]))), (((((/* implicit */_Bool) 4522094316981575011ULL)) ? (var_15) : (arr_1 [i_0]))))), ((+(max((arr_1 [i_0]), (var_4)))))));
        arr_2 [i_0] = min((((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (var_8)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (arr_1 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) ^ (var_3)))) ? (((/* implicit */unsigned long long int) var_15)) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10)))))))) : (((var_13) >> (((((var_10) / (((/* implicit */unsigned long long int) var_0)))) - (4241489107ULL)))))));
    var_20 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned int) var_9)) : (var_11)))));
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_4)) * (1336254157825554681ULL)))))) ? (((/* implicit */unsigned long long int) (((~(var_16))) | (var_14)))) : (((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((229866374795503616LL) <= (((/* implicit */long long int) var_9)))))) : (((((/* implicit */_Bool) 8896012222017807874LL)) ? (((/* implicit */unsigned long long int) var_16)) : (0ULL)))))));
}
