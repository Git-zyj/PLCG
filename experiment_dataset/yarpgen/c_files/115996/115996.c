/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 ^= min(((min((arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1]), 11898))), ((1130 ? -1506778806418272563 : 1)));
                                var_19 += (min((max((var_5 * 21934), var_13)), ((~((max(var_11, var_13)))))));
                                var_20 *= (-7 - var_7);
                                var_21 += 1195943934;
                                var_22 = ((var_16 ? var_14 : -18014398509481983));
                            }
                        }
                    }
                }
                var_23 |= (((((-(~var_10)))) ? (((((arr_4 [i_0 - 1]) + 9223372036854775807)) << (var_9 + 4))) : ((((((-(arr_3 [i_0])))) ? var_6 : var_0)))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_24 += (max((((arr_10 [i_5] [0] [i_5 - 1]) | var_12)), var_6));
                                var_25 = ((((var_12 ? 1307210458669266365 : (arr_3 [i_7 + 2]))) - (var_7 & var_6)));
                                var_26 *= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 += var_0;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            {
                var_28 += ((var_13 ? var_15 : (arr_24 [14] [14])));
                arr_25 [i_8] [i_8] = (((((43596 ? var_5 : (arr_19 [i_9] [9] [i_9 - 1] [i_9 + 1] [11] [i_9 - 2] [0])))) ? ((~(arr_9 [i_8] [i_9] [i_9 + 1] [7]))) : ((min((arr_22 [i_9 + 1]), (arr_20 [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [9] [i_9]))))));
                var_29 &= (-5531128742245217041 <= var_17);
            }
        }
    }
    var_30 = var_1;
    #pragma endscop
}
