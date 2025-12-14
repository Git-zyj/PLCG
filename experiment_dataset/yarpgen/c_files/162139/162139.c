/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2024780549;
    var_15 = 3991662730285233807;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0] [i_0]) ? (arr_1 [6] [i_0]) : var_6));
        arr_3 [i_0] [i_0] = (min(3926082153994805568, var_8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = ((!(((-((max(4318, 61218))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((max(3416675803, 9019))), ((61217 * (arr_10 [i_0] [i_1] [10] [2])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_17 |= ((-var_2 ? (arr_14 [i_0] [i_1] [i_2] [i_2] [i_5]) : 4318));
                        var_18 = 61218;
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6] = 8180;
                        arr_23 [i_0] [15] [i_2] = (min(var_8, ((~(~var_2)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_26 [i_7] [i_7] [i_0] = (!1843278957171101302);
                        arr_27 [i_0] [i_0] [i_2] = (!var_6);
                    }
                }
            }
        }
        var_19 = (max(var_19, ((min((min((arr_7 [2]), (arr_13 [8] [i_0] [2] [i_0] [i_0] [i_0]))), var_1)))));
    }
    #pragma endscop
}
