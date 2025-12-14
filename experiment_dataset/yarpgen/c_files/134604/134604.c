/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = var_12;
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_1] [i_0] = ((((((~var_11) + 2147483647)) << (((var_9 + 98453552) - 9)))));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = (((arr_7 [i_1] [i_3] [i_4]) + (((!(arr_7 [i_4] [i_2 - 1] [i_2]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_15 = 65;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = var_12;
                            arr_21 [i_1] [i_5] [i_2] [i_1] [i_1] = ((-(arr_19 [i_2 - 1] [i_6])));
                            var_16 -= (arr_8 [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_0]);
                            arr_22 [i_1] [i_1] [i_1] [i_5] [i_5] = (((((arr_7 [i_2 + 1] [i_1 - 3] [i_2]) + 2147483647)) >> (((arr_7 [i_2 + 1] [i_1 - 3] [i_6]) + 58))));
                            var_17 = ((var_9 * (arr_1 [i_0] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_18 = (((103 && 2579146892) || var_5));
                            var_19 += (arr_6 [i_5]);
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5] [i_7] = (~(((var_7 != (arr_18 [i_0] [i_1] [i_2] [i_5] [i_7])))));
                        }
                        var_20 = (arr_6 [i_1]);
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_0] = (((!var_11) != ((((var_4 << (((arr_1 [i_0] [i_2]) - 169)))) << (((((arr_6 [i_1]) - var_2)) - 3642123446))))));

                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_21 = (arr_18 [i_0] [i_1] [i_2] [i_8] [i_9]);
                            arr_31 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9] = ((((((arr_7 [i_2] [i_1] [i_0]) % var_6)))) / (arr_26 [i_9 - 1] [i_9] [i_9] [i_2] [i_2] [i_2 + 1]));
                        }
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_12 [i_10] [i_8] [i_2] [i_1] [i_0]);
                            arr_36 [i_0] [i_1] [i_2] [i_8] [i_1] = (~550296054);
                        }
                        arr_37 [i_0] [i_1] [i_2] [i_1] = ((-(arr_26 [i_0] [i_2 + 1] [i_2] [i_8] [i_2] [i_1 - 3])));
                        var_22 = ((((!(((~(arr_26 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2]))))))));
                    }
                    var_23 = (((((((arr_16 [i_0] [i_0] [i_1]) - var_11)) != (((!(arr_9 [i_0] [i_1] [i_1]))))))) + var_2);
                }
            }
        }
    }
    var_24 = (var_5 / var_10);
    var_25 = var_12;
    var_26 += var_1;
    #pragma endscop
}
