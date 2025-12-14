/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174440
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)630)) / (((/* implicit */int) (short)-631))));
    var_20 |= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_1] [i_2 - 1]))) ? (((((/* implicit */int) (short)15)) >> (((4294967295U) - (4294967265U))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 2])) ? (((/* implicit */int) arr_2 [(unsigned short)10] [(unsigned short)10] [i_2 + 1])) : (((/* implicit */int) var_4))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */unsigned char) ((arr_0 [i_2 + 1] [i_2 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))), (arr_6 [i_2 - 4] [i_2] [i_2 - 4] [i_2])));
                    var_22 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) < (((((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 1] [i_2])) & (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
    var_23 = var_18;
}
