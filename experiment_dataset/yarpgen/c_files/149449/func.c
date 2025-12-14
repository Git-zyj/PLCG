/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149449
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45061))) : (var_9)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)45061))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))))) : ((~(arr_2 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    var_11 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))) & ((+(var_4))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((6695644739861140710ULL) - (6695644739861140705ULL)))))), (var_0))))));
}
