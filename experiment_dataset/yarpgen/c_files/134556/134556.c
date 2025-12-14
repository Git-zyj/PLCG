/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-var_6 ? var_2 : (min(var_8, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (min((arr_3 [i_0] [i_1]), (((arr_3 [i_0] [21]) | (arr_3 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_19 += (min(9223372036854775807, -2096566471));
                    arr_9 [i_0] [i_0] [i_0] = ((((max((arr_5 [i_0]), (arr_5 [i_0])))) ? ((((var_12 >= (arr_5 [i_0]))))) : (((arr_5 [i_0]) - (arr_5 [i_0])))));
                }

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_20 = ((min(var_7, 16355380284260325751)));
                            var_21 = (((min((arr_15 [7] [i_5] [i_5 + 2] [i_5 - 1] [7] [16] [12]), (arr_15 [i_5] [i_5] [i_5 + 2] [i_5 - 1] [20] [i_5] [20]))) | 46444));
                            var_22 = -var_2;
                            arr_17 [i_0] [i_0] [i_3] [i_0] [24] = (((~var_4) <= (~var_0)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((min(var_1, 48169)) + (!var_10)))) | var_0));
                        }
                        arr_19 [i_0] [i_1] [i_1] [6] = var_14;
                    }

                    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [7] [i_3] [i_3] = 206;

                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_0] [21] [i_3] [10] = ((-((-939524096 + ((1 ? -164874956444836750 : 0))))));
                            var_23 = -var_12;
                        }
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_24 = ((min((arr_20 [i_0]), 1004641638)));
                            var_25 |= ((-(28320 - 4254)));
                        }
                    }
                    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_26 = ((((!var_3) <= (min(var_16, 232)))));
                        var_27 = var_12;
                        var_28 = 3290325658;
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_29 += 4239;
                        arr_37 [i_0] = (arr_6 [8]);
                    }
                    arr_38 [1] [14] [1] [24] |= ((((((arr_12 [i_0] [i_0] [i_3] [i_3]) ? var_0 : (((-(arr_32 [16] [i_0] [8] [i_3]))))))) ? (min(164874956444836754, -55119679029891986)) : var_4));
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_30 = (max(((((arr_40 [17] [i_11 + 2] [15]) <= (arr_40 [19] [i_11 - 1] [8])))), (max(var_6, var_11))));
                                var_31 += 4241;
                                arr_47 [i_0] = var_6;
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_32 |= (arr_8 [18] [18] [i_11]);
                        var_33 = (-(max(var_10, (max(var_11, (arr_48 [i_0] [i_0] [i_11 + 1] [i_0]))))));
                    }
                    var_34 |= var_15;

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_35 = arr_30 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 - 1];
                        var_36 = ((arr_31 [0] [i_1] [0] [i_15]) <= (var_12 <= var_15));
                    }
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 23;i_16 += 1)
                    {
                        var_37 = ((!(((-(arr_26 [i_11] [i_1] [i_11] [i_16 + 1]))))));
                        var_38 ^= ((-((var_12 ? var_4 : var_2))));

                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [15] = ((((arr_29 [9]) + var_7)) >= ((var_6 ? (arr_29 [i_0]) : (arr_12 [i_1] [i_1] [i_1] [i_1]))));
                            var_39 = (var_1 <= -var_9);
                            var_40 = var_12;
                        }
                        var_41 = (arr_3 [i_1] [i_1]);
                        arr_60 [i_0] [i_1] [i_11] [i_16] = 1004641621;
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_42 += ((-((66 ? 2790753768 : 939524085))));
                        arr_63 [20] [20] [i_0] [2] = (min(var_10, ((((((arr_62 [9] [i_0] [i_0] [i_0]) - var_7))) ? ((var_16 ? (arr_11 [i_0] [i_0]) : (arr_3 [i_1] [8]))) : var_2))));
                        var_43 += (min(0, -1372193118126975642));
                        var_44 += (max((((var_12 ? var_6 : var_3))), (((var_3 <= (min(var_10, var_4)))))));
                    }
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_45 = -var_5;
                    var_46 += var_3;
                    var_47 |= ((1 >= (min((min(4, 4294967290)), (((var_6 ? var_14 : (arr_34 [i_0] [i_0] [i_0] [i_0] [0] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
