/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((max(56151, 54)))));
                                var_18 = ((((arr_0 [i_4] [i_3 - 1]) ? ((var_15 ? var_0 : 56151)) : ((max(-1381987318, -78))))));
                                arr_16 [i_4] [i_3] [i_1] = ((min((~-3841578454252761700), (arr_2 [i_0 + 2]))));
                            }
                        }
                    }
                }
                var_19 = 9390;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_20 ^= -var_6;
                var_21 = (((((arr_13 [i_5] [i_6 + 1] [i_6] [i_5 + 2] [i_6 + 1] [i_5] [i_5]) ? (arr_13 [i_5] [i_6] [i_6] [i_5 - 1] [i_6 + 1] [i_5] [i_5 + 2]) : (arr_13 [i_5] [i_6] [i_5] [i_5 + 2] [i_6 - 1] [i_5] [i_6 + 2]))) * ((var_10 ? (arr_13 [i_5] [i_6] [i_6] [i_5 + 2] [i_6 + 1] [i_6] [i_6]) : (arr_13 [i_6] [i_6] [i_6] [i_5 - 1] [i_6 - 1] [i_6] [i_5])))));
                arr_22 [i_6] [i_6] = (((min(((max((arr_19 [i_5] [i_6 + 1]), var_16))), var_13)) * var_6));
            }
        }
    }
    var_22 = ((((max(var_7, (!var_5)))) ? var_13 : var_4));
    #pragma endscop
}
