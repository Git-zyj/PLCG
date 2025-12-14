/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181195
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7753)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_15)) ? (8345008123990721809LL) : (var_13)))))) ? (-8345008123990721809LL) : (((/* implicit */long long int) ((var_5) & (((/* implicit */int) (_Bool)1)))))));
    var_21 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1874082411U)) ? (((/* implicit */int) (short)23455)) : (((/* implicit */int) (signed char)-1)))) - (((/* implicit */int) var_19))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_22 *= ((/* implicit */unsigned long long int) 1041503946);
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) & (max((max((((/* implicit */unsigned int) 1221508906)), (0U))), (((/* implicit */unsigned int) -1041503934))))));
                    arr_8 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 2] [i_2])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (-1041503946))), ((~(-1401323248)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4)))) ? (1956299322U) : (var_10))), (((/* implicit */unsigned int) (+(var_3))))));
    var_24 += ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0U)) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (2478490553005933599ULL)))))), (var_17)));
}
