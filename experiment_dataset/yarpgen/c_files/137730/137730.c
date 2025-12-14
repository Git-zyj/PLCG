/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_4 <= ((((-9223372036854775807 - 1) & (((1 ? 1 : 1)))))))))));
    var_11 = var_6;
    var_12 |= ((var_4 | (var_5 / var_0)));
    var_13 = max(((((var_7 ? var_1 : var_0)) | ((var_4 ? var_3 : var_4)))), 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((((((arr_3 [1] [i_1]) / var_8))) ? 1 : var_1))) ? (var_1 & 1) : (max(1, var_6)))))));
                arr_4 [i_1] = ((((1 / (arr_2 [i_0] [i_1]))) / 1));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_7 [3] [i_1] = 1;
                    var_15 = (max(var_15, (((-((min(1, 1))))))));
                    arr_8 [i_0] [i_1] [i_0] = (max((max(1, ((1 ? var_5 : var_8)))), ((max(1, 1)))));
                }

                /* vectorizable */
                for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_3] = (((!1) * (1 | 1)));
                        var_16 = (max(var_16, -1));
                        arr_16 [i_0] [i_1] = 1;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_17 *= 1;
                        var_18 = var_0;
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = (arr_5 [i_5] [9] [i_3 + 2] [i_5]);
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_19 = (min(var_19, ((((((1 ? 1 : 1))) && (((1 ? (arr_21 [2] [2] [2]) : 1))))))));
                        var_20 = (min(var_20, (!var_6)));
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_1] [i_6 + 1] = 1;

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_21 = (((arr_3 [i_1] [i_6 + 1]) % (arr_12 [i_0] [i_1] [1] [11])));
                            var_22 = -1;
                        }
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6] = (!(1 && 1));
                            var_23 *= var_6;
                            arr_32 [i_1] [i_1] = var_7;
                            arr_33 [i_1] [14] [i_3] [i_6] = (!var_5);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 = (1 >> 1);
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] [1] = (((arr_27 [i_1] [i_1] [i_3 + 3] [i_3 + 2]) ? (arr_5 [i_0] [i_1] [i_1] [i_0]) : var_2));
                                arr_42 [i_10] [i_1] [13] [4] [i_1] [i_0] = (!(~var_7));
                                var_25 = (((1 | 1) ? var_6 : (!1)));
                                arr_43 [i_0] [i_1] [9] [i_0] [i_1] = (arr_38 [3] [i_9] [i_3] [i_10] [i_9]);
                            }
                        }
                    }
                    var_26 += (var_5 != 1);
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_46 [i_0] [3] [i_1] = ((1 << (var_0 - 17837901966692854616)));
                    var_27 = (arr_3 [i_1] [i_11]);
                }
                arr_47 [i_1] [i_1] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
