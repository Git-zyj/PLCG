/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182069
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 0LL))) ? (((((/* implicit */_Bool) (signed char)127)) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))))) : (21LL))))));
        var_12 = ((/* implicit */long long int) min((var_12), ((~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1163883141U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), ((signed char)0))))) : (((long long int) (_Bool)1))))))));
        var_13 = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (arr_1 [i_0]));
        arr_2 [i_0] = (-(min((arr_1 [i_0]), (((/* implicit */unsigned int) (_Bool)1)))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */short) (-(max((((unsigned int) 3852380261U)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1])))))))));
        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (max((max((((/* implicit */unsigned int) arr_4 [i_1])), (442587028U))), (((/* implicit */unsigned int) ((_Bool) var_10))))));
    }
    var_15 *= ((/* implicit */short) ((var_7) ? (((((/* implicit */long long int) var_5)) + (((((/* implicit */_Bool) 1749356361U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (20LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((3852380261U) & (2589640765U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))))));
    var_16 ^= ((/* implicit */unsigned int) min(((-(((((((/* implicit */int) (signed char)-122)) + (2147483647))) << (((var_4) - (1477393823U))))))), (((/* implicit */int) (_Bool)1))));
}
