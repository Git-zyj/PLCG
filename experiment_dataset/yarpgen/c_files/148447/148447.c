/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1061084134;
        arr_4 [i_0] [i_0] = 59966;
        var_12 = 790259434;
        var_13 = (min(var_13, (~-59962)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_1 + 1] [i_2 - 3] [i_3] = 3242673803;
                    var_14 = (max(var_14, (((!(~2147483642))))));
                    var_15 = (!3233883170);
                }
            }
        }
        var_16 = (max(var_16, ((!(~790259434)))));
        var_17 = 1;
        var_18 = 22;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_19 &= (!1061084134);
            arr_18 [i_5] = 31290;
            var_20 = 2147483647;

            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                arr_21 [i_6] [i_6] [i_6 + 3] [i_6 - 1] = (~2962595582);
                arr_22 [i_6] [i_6] [i_6] [i_4] = 259564331;
                var_21 = (-127 - 1);
            }
            for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
            {
                arr_26 [0] [i_7] [i_7] [i_4] = ((-(~5597)));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, 50704));
                            var_23 = (max(var_23, 46138));
                            var_24 = 3429285062;
                            arr_33 [i_9] [i_7] [i_7] [i_8] [i_4] [i_8] = ((-(!127)));
                        }
                    }
                }
                var_25 = 1;
            }
            for (int i_10 = 4; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_26 = (~1090629811);
                var_27 = 865682234;
                arr_36 [i_10] [i_5] [i_4] [i_10] = (~3429285061);
                var_28 *= -2147483647;
            }
        }
        var_29 = (max(var_29, 17399));
    }
    var_30 |= (!4294967295);
    #pragma endscop
}
