/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 *= ((10454025229372673628 ? (((((18446744073709551605 ? -19793 : (arr_2 [i_0 - 1])))) ? 416095771902650795 : (((max(var_11, 33)))))) : -83));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (min(var_17, (!33)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                        {
                            var_18 = ((-(arr_10 [i_0] [i_0 + 1] [i_2 + 2] [i_3 + 1] [5])));
                            var_19 = (min(var_19, ((((arr_2 [i_3 + 3]) ? -19793 : (var_3 * var_9))))));
                            var_20 = (((arr_0 [i_0 + 2]) >= (arr_10 [i_3] [i_4] [i_4] [i_4] [i_3 - 1])));
                            var_21 = ((var_10 ? (arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 + 2]) : var_2));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_22 += 16530963763158388488;
                            arr_17 [i_5] [i_1] [i_0] [i_5] [i_1] = ((-(((arr_6 [i_2 - 2] [i_5] [i_2 - 2]) + (arr_6 [i_0] [11] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_1] = ((((min(-111, (~var_15)))) ? 15552 : (min((arr_3 [i_0 + 1]), var_8))));
                            arr_22 [i_1] = ((((!var_12) << (((arr_9 [i_0] [i_0] [i_2] [i_2]) + 18149)))));
                            arr_23 [i_0] [i_1] [i_0] [4] [i_1] = var_15;
                            arr_24 [8] [i_1] [8] [i_2] = ((((((~(arr_12 [i_3 + 1] [i_1] [i_2 - 1] [i_0 - 2] [i_3]))) + 2147483647)) >> ((((-(arr_12 [i_3 + 3] [i_3 + 3] [i_2 - 2] [i_0 - 3] [i_6]))) + 53922))));
                            var_23 = (((!var_5) >> (((arr_4 [i_0 - 2] [i_2 - 2] [i_0 - 2]) - 11569286848620137164))));
                        }
                        var_24 ^= var_1;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_25 = 2216545910494337573;
                        var_26 += -24;
                    }
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        var_27 = (min(var_27, (((~((min(var_9, (((!(arr_12 [20] [i_1] [i_2 - 1] [i_2 + 2] [i_0 + 1]))))))))))));

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_28 = -10454025229372673601;
                            arr_34 [i_0] [i_9] [i_2 + 1] [i_1] [i_9 - 1] [i_1] = 7992718844336878010;
                        }
                        for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_29 |= arr_9 [i_10 - 2] [i_2 - 1] [i_0 - 1] [i_8 + 1];
                            var_30 = (min(-56, 19776));
                            arr_37 [i_1] [i_8] [i_1] [i_1] [i_0] [i_0] = (((arr_30 [i_1] [i_1] [i_0 - 1] [i_8] [i_1]) ? var_13 : -var_14));
                            arr_38 [i_1] [i_1] [16] [i_8] [i_1] [7] [i_10] = ((-(arr_26 [i_8 - 2] [i_2 + 1])));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            arr_43 [i_0] [i_1] [0] [i_0] = (~-65535);
                            arr_44 [i_0] [0] [i_0 - 3] [i_2] [i_0] |= (32766 % ((-((33 ? (arr_42 [i_2]) : (arr_29 [i_0 - 3]))))));
                        }
                    }
                    arr_45 [8] [i_1] [i_1] = 117;
                    arr_46 [i_2 - 2] [i_1] [i_0] = var_10;
                }
            }
        }
    }
    var_31 = (var_6 ? ((-var_1 ? var_0 : (min(var_1, var_13)))) : var_7);
    #pragma endscop
}
