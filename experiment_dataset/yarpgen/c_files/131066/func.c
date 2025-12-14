/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131066
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (signed char)-31);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((var_7) << (((arr_1 [i_0]) - (1905254184U)))))) : (arr_0 [i_0])));
        arr_4 [i_0] |= ((/* implicit */unsigned int) var_2);
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2])), (var_7)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)30)) : (max((((((/* implicit */int) var_1)) - (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)-1))))));
        var_17 = ((/* implicit */long long int) (((~(max((((/* implicit */unsigned int) (short)-17126)), (arr_1 [i_1]))))) & (arr_1 [i_1])));
    }
    var_18 = ((/* implicit */int) var_2);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) / (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_13)) == (var_8)))))))) : (((((/* implicit */_Bool) (~(var_2)))) ? (((var_0) ? (1618429069018682096LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))) : (var_8)))));
    var_20 = ((/* implicit */long long int) var_4);
}
