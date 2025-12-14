/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 29;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_11 = (arr_4 [i_1 + 1] [i_1 + 1] [i_2] [i_3]);
                        arr_10 [i_3] [i_2] [i_1 - 3] [i_0] [i_0] = (-616752474 / var_1);
                        arr_11 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] [i_0] |= (((0 == 120) | 1906755664));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_12 = (arr_8 [i_1 - 2] [i_3 + 2] [i_2] [i_2 - 2] [i_4]);
                            var_13 ^= ((!255) ? var_0 : var_2);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_14 = 6400249203172377487;
                            var_15 ^= 1;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_3] [i_2 - 1] [i_0] [i_1] [i_0] &= (((arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2]) - 5938620653482843427));
                            var_16 = (var_3 / var_9);
                            var_17 = (~var_3);
                        }
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_27 [i_0] [i_7] [i_7] [i_7] = (7 * 3654775418);
                        arr_28 [i_0] [14] [i_0] [i_0] [i_0] [i_0] = (arr_23 [i_2 + 1]);
                        var_18 *= 6001418120851083103;
                        var_19 = ((arr_21 [i_1 - 3] [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 2] [i_2]) ? (arr_21 [i_1 - 3] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2]) : (arr_9 [i_1 - 1] [i_1 + 1] [i_2] [i_0] [i_2 + 1] [i_2]));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        var_20 = (((arr_9 [i_8] [i_1 - 2] [i_2] [i_2] [i_0] [i_8 - 1]) | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_21 = var_4;
                        var_22 = (arr_0 [i_0] [i_0]);
                        var_23 = (arr_24 [i_2] [i_2] [i_0]);
                    }
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_24 -= (min(5938620653482843438, 88));
                    arr_33 [i_0] [i_1] [i_9] = var_5;

                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        var_25 = (arr_19 [i_10] [i_9] [i_0] [i_1] [i_0] [i_0] [i_0]);
                        arr_37 [i_10] [i_9] [i_1] [i_1] [i_10] = (!var_2);
                    }
                    arr_38 [i_0] [11] [i_0] = ((min((arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1]), -33)));
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = var_0;
                    arr_41 [i_11] = (!118);
                    var_27 = (((var_7 ? 0 : 138)));
                    arr_42 [i_11] = (!var_3);
                    var_28 &= 12445325952858468513;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_29 = 4893951158909938095;
                    var_30 = ((((5445046093298073414 ? var_2 : 12445325952858468517)) < (((arr_20 [i_0] [i_1] [i_12] [i_1] [i_1] [i_1 - 1] [i_0]) ? 12445325952858468517 : var_1))));
                    var_31 = var_6;
                }
                arr_46 [0] [i_1 + 1] [i_0] = (571310570 % (max((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) + 13001697980411478197)), (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1 - 3]), 1583190878224684767)))));
                var_32 = (arr_16 [i_0] [i_1 - 2] [i_0] [i_0] [i_1 - 2] [i_0]);
            }
        }
    }

    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        arr_49 [i_13] [i_13] = ((min((arr_48 [i_13 - 1]), (max((arr_8 [i_13] [i_13] [i_13] [i_13] [i_13]), var_0)))));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                var_33 = 6001418120851083096;
                var_34 -= (arr_19 [i_13] [i_13 + 1] [15] [6] [i_13] [i_13 + 1] [i_15 - 1]);
            }
            var_35 = ((~(arr_52 [i_13] [i_13] [i_13 + 2] [i_13])));
            arr_55 [i_13] [i_14] = (arr_0 [i_13 + 2] [i_13 - 1]);
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                arr_66 [i_16] [i_16] [i_13] |= (~var_2);
                                var_36 = var_4;
                            }
                        }
                    }
                    arr_67 [12] [i_16] [i_17 + 3] [i_13] = 145;
                }
            }
        }
        var_37 = ((!(var_7 * 0)));
    }
    var_38 = (((((max(43997, var_0)) + (min(var_3, var_3)))) == ((((!((max(20, 132)))))))));
    #pragma endscop
}
