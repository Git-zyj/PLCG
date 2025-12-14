/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(~262143)));
        var_16 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((2147483647 + var_13) ? (((arr_6 [i_0]) - 4095977048839150445)) : (arr_9 [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_2] [i_4] [i_4] = 1;
                                var_18 -= (0 + 29124);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_5] [i_6] = ((-var_7 / (((arr_2 [i_1]) ? (arr_10 [i_5] [i_5] [i_2] [i_5] [i_5]) : 0))));
                                arr_22 [i_2] [i_2] = arr_9 [i_5] [i_2];
                            }
                        }
                    }
                    var_19 = 1063763136;

                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] = (((arr_9 [i_7 - 1] [i_7 - 2]) * (arr_9 [i_7 - 3] [i_7 - 3])));
                        arr_28 [i_0] [i_2] [i_0] [i_7] = var_13;
                        var_20 = (var_6 / (arr_25 [i_7 + 1] [6] [i_7 + 1] [i_7] [i_7]));
                        arr_29 [i_0] [i_0] [i_2] [i_0] = (arr_14 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 1]);
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, ((((-3439611917060788088 + 9223372036854775807) >> (445353762 - 445353733))))));
    var_22 = var_4;
    var_23 &= var_9;
    var_24 = ((~((~(~var_1)))));
    #pragma endscop
}
