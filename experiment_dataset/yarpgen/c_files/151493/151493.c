/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = var_8;

            /* vectorizable */
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                var_17 *= (~-345689202);
                var_18 = (min(var_18, var_16));

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_19 = (arr_2 [i_2 + 1]);
                    arr_11 [i_3] [i_2 + 1] [i_1 + 1] [i_0] = ((var_6 & ((~(arr_6 [i_0] [i_0] [i_0])))));
                }
                arr_12 [i_0] [i_1 + 1] [i_2] = 65;
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_4 < (arr_15 [i_1] [i_5 - 1] [i_5])));
                    var_20 = -6405396796160748287;
                    var_21 = (max(var_21, 0));
                    var_22 = ((((arr_4 [i_5] [i_1 - 1] [i_0]) | var_14)));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        arr_25 [14] [i_1] [i_4 - 1] [i_6] [14] = (arr_15 [i_0] [11] [i_4 - 1]);
                        var_23 = (min(var_23, (arr_14 [i_4] [i_6] [i_7 + 1])));
                        arr_26 [i_0] = (arr_21 [i_0] [i_0] [i_4] [i_6] [i_7 - 1]);
                        arr_27 [i_0] [1] [i_4 - 1] [1] [i_7] = (!1);
                        var_24 = (min(var_24, var_8));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1 - 1] [i_0] [i_8] [i_8] [i_6] = (arr_23 [i_1 + 1] [15] [i_1 + 1] [i_6] [i_1 + 2]);
                        arr_32 [i_8] [i_6] [i_4 - 1] [i_0] = 1;
                        arr_33 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_8] = -6405396796160748267;
                        var_25 = (~var_12);
                    }
                    arr_34 [i_0] [i_0] [15] [1] [i_6] = var_14;
                    arr_35 [i_0] [i_0] [i_0] [i_0] = (var_2 && var_11);
                }
                arr_36 [i_0] [i_1 + 2] [i_4 - 1] = var_10;
                var_26 = (min(var_26, (arr_16 [i_0] [6] [i_1 - 2] [7] [i_1] [i_4 - 1])));
                var_27 = (((arr_10 [1] [i_1 + 1] [i_0] [i_0]) <= var_7));
                var_28 = (var_16 & var_16);
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_29 ^= var_15;
                            var_30 -= (((arr_21 [i_10 + 2] [i_11 + 1] [i_11 - 1] [i_11] [i_11]) % var_13));
                        }
                    }
                }
                arr_45 [i_0] [i_1 + 1] [i_0] [i_9] = (arr_8 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                var_31 ^= (((arr_40 [i_1 + 1] [17] [1] [i_9 - 1]) * (arr_15 [i_0] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_32 = (min(var_32, 46923));
                            var_33 = 1;
                            var_34 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            arr_55 [i_0] [i_0] [i_0] = ((((187 & (!3791469672))) * (((var_9 <= (arr_7 [i_0] [i_0] [i_14] [i_0]))))));

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                var_35 += var_16;

                for (int i_16 = 1; i_16 < 23;i_16 += 1)
                {
                    var_36 += (arr_23 [i_0] [i_14] [i_15] [i_16 + 2] [i_16]);
                    arr_61 [i_15] [i_14] [i_15] [i_16 - 1] &= (arr_17 [i_0] [i_0] [i_0] [i_15] [i_16 - 1]);
                    var_37 = var_11;

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 24;i_17 += 1)
                    {
                        var_38 = (((var_0 ^ (arr_24 [i_14]))) ^ (arr_4 [i_16 + 2] [i_16 + 1] [i_17 - 1]));
                        var_39 ^= -var_12;
                        arr_64 [i_0] [i_15] [i_16] [i_17] = ((1339557941 - (var_9 * var_15)));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        arr_68 [i_0] [i_0] [i_18] [i_16 + 2] [i_18] = ((~(arr_15 [i_0] [i_18] [i_16 - 1])));
                        var_40 = (-9223372036854775807 - 1);
                        var_41 ^= (arr_1 [i_15] [i_16 + 1]);
                    }
                }
            }
            var_42 = (min(var_42, var_4));

            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_43 ^= (arr_46 [i_20 - 1] [14] [i_20 + 1] [i_20 + 1]);
                            var_44 ^= ((var_8 >> (((min(133, var_3)) + 135))));
                            arr_79 [i_0] [i_20] [i_0] [i_0] [i_0] = ((~((min(0, 65)))));
                        }
                    }
                }
                var_45 = ((((~(max(1, -9223372036854775806)))) + (((max(var_8, -64))))));
                arr_80 [i_19] [20] [21] = max((arr_57 [i_0]), (((max((arr_72 [2] [i_14] [i_19] [i_14]), 2171912902)) / (arr_28 [i_0] [i_0] [i_14] [i_14] [i_19]))));
            }
            var_46 = (min(((-(((var_0 + 2147483647) << (var_1 - 2983157609013035452))))), (((var_13 >= (((arr_14 [i_0] [i_14] [i_0]) * 1)))))));
        }
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 23;i_23 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 25;i_25 += 1)
                        {
                            {
                                var_47 -= (((-(max(1, 6793934220814976266)))));
                                var_48 = var_14;
                                var_49 = (arr_67 [i_22]);
                                var_50 = (((~var_1) && ((min((arr_57 [i_23 - 1]), 5)))));
                            }
                        }
                    }
                    arr_95 [i_22] [i_23] = (((max((~-345689225), var_2)) != ((~((max(var_2, var_9)))))));
                }
            }
        }
        arr_96 [i_0] [i_0] = (min(((((~56) * ((((arr_75 [24] [2] [24] [i_0] [i_0] [i_0] [i_0]) != 1)))))), (~var_9)));
    }
    for (int i_26 = 0; i_26 < 17;i_26 += 1)
    {
        var_51 = ((-(!var_8)));
        var_52 = ((min((min(1, var_6)), var_4)));
    }
    for (int i_27 = 3; i_27 < 20;i_27 += 1) /* same iter space */
    {
        arr_102 [i_27 - 1] = (min(var_1, var_16));
        var_53 &= (min((((var_5 < (arr_20 [i_27 - 2] [i_27 - 3] [i_27 + 2] [i_27 + 2])))), (((arr_20 [i_27 + 1] [i_27 - 2] [i_27 + 2] [i_27 - 2]) / var_10))));
    }
    /* vectorizable */
    for (int i_28 = 3; i_28 < 20;i_28 += 1) /* same iter space */
    {
        arr_107 [i_28] = var_3;
        arr_108 [i_28] = 1;
    }
    var_54 = var_5;
    #pragma endscop
}
