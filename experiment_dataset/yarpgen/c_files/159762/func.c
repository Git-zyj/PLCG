/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159762
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
    var_10 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 6099653584451137965ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58452))) : (0U)))), (((long long int) (+(((/* implicit */int) var_8)))))));
    var_11 *= ((/* implicit */unsigned char) 12347090489258413651ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) ? (((var_6) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7083))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (var_6) : ((~(var_6)))))));
    var_15 = ((/* implicit */long long int) ((var_1) ? (1719538787U) : (max((((/* implicit */unsigned int) var_0)), (var_2)))));
}
