/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131586
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8985))) : (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_1] [i_1] [i_2] [i_2]), (arr_8 [i_1] [i_2] [i_1] [0LL])))) : (max((((/* implicit */unsigned long long int) (signed char)-11)), (5654326759530548768ULL)))));
                    arr_9 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)63))) : (arr_4 [i_0] [10]))) : ((-(((((/* implicit */_Bool) (signed char)27)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    arr_10 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (max((arr_8 [i_1] [i_2] [i_1] [i_2]), (((/* implicit */long long int) arr_1 [i_1])))) : (((/* implicit */long long int) (+(min((4194303U), (((/* implicit */unsigned int) var_11)))))))));
                    arr_11 [i_0] [i_0] [i_1] [(short)11] = ((/* implicit */unsigned int) ((int) max((((/* implicit */int) (unsigned short)60550)), (((((/* implicit */int) var_11)) - (((/* implicit */int) (short)-18800)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7603711976581088989ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-18796)), (var_9))))))), (max((max((16539987559594572790ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned short)4986))))));
}
