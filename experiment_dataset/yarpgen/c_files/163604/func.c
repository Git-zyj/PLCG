/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163604
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~((~(262143)))));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) + (var_13)))) ? (((arr_6 [i_0]) - (4095977048839150445LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)1);
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (unsigned short)29124))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(var_7)))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_10 [i_5] [i_5] [i_2] [i_5] [i_5])) : (0LL)))));
                                arr_22 [i_2] [i_2] = arr_9 [i_5] [i_2];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) 1063763136);
                    /* LoopSeq 1 */
                    for (int i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 2])) * (((/* implicit */int) arr_9 [i_7 - 3] [i_7 - 3]))));
                        arr_28 [i_0] [i_2] [i_0] [i_7] = var_13;
                        var_20 = ((((/* implicit */int) var_6)) / (arr_25 [i_7 + 1] [6U] [i_7 + 1] [i_7] [i_7]));
                        arr_29 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 1]);
                    }
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((-3439611917060788088LL) + (9223372036854775807LL))) >> (((445353762U) - (445353733U))))))));
    var_22 = ((/* implicit */long long int) var_4);
    var_23 &= ((/* implicit */long long int) var_9);
    var_24 = ((/* implicit */short) (~((~((~(var_1)))))));
}
