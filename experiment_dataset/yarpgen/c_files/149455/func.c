/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149455
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
    var_18 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) var_5)))))) < (min((min((((/* implicit */unsigned long long int) var_10)), (var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) var_10);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_6 [i_2 - 3] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_1] [i_2 + 1]))));
                    var_20 = ((/* implicit */signed char) var_4);
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 - 4] [i_2] [10ULL])) ? (((/* implicit */long long int) ((var_17) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (413904310)))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_3)))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (((((/* implicit */_Bool) arr_3 [i_0] [10] [10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))));
    }
    var_22 = ((/* implicit */int) var_15);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) < (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)7199)))), (((/* implicit */int) var_12))))));
}
