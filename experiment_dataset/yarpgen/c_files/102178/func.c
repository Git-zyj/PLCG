/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102178
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) && (((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [15U] [i_1 + 1] [15U])))))))) ? (1084617872U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (1084617872U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((2725329618836677804ULL) <= (((/* implicit */unsigned long long int) 1084617872U))));
                    }
                    var_14 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned long long int) var_2);
}
