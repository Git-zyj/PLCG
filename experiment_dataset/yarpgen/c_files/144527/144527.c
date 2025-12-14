/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? -var_16 : var_14));
    var_20 = 1;
    var_21 = (min(0, var_3));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = 1;
                        var_22 = ((((((-127 - 1) ? (arr_5 [i_0 - 1] [i_0] [i_0]) : var_9)) + (192 > var_0))));
                        var_23 = arr_1 [i_1] [i_2];
                        var_24 = min(9223372036854775807, (var_11 >= var_9));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_25 = (max(var_25, var_14));
                        var_26 = (max(var_26, (((-var_1 * (arr_5 [i_4] [i_2] [i_0]))))));
                        var_27 = (min(var_27, 1));
                        var_28 = 96;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] = (((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + var_1));
                        arr_17 [i_2] [i_1] = 96;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_20 [i_1] [i_1] = (-96 ? (((max(-97, 89)))) : 1490045764);
                        arr_21 [i_1] [i_1] = ((243 ? ((((arr_15 [i_1] [i_2] [i_2]) < ((1 ? 32763 : (arr_7 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0])))))) : var_5));
                    }
                }
            }
        }
        arr_22 [i_0] = ((((((var_13 < -32761) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : var_8))) < 9223372036854775807));
        var_29 *= 93;
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_7] [i_8] [i_9] [i_8] [i_10] [i_9] = (min((((arr_6 [i_9 + 1]) == (arr_8 [i_7] [i_7] [i_7 - 1] [i_7]))), var_16));
                                arr_37 [i_0] [i_0] [i_8] [i_9] [i_10] = (((arr_7 [i_0] [i_7 + 2] [i_9] [i_9] [i_10] [i_10]) + (((!(((927977246 << (var_9 - 1243337971)))))))));
                                arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = (1390090263 + 1);
                            }
                        }
                    }
                    arr_39 [i_0 - 1] [i_0] = 2;
                }
            }
        }
    }
    #pragma endscop
}
