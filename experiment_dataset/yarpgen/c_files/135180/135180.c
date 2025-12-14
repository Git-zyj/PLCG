/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_12 *= ((((var_10 ? 101 : var_4)) != -262080));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 ^= ((!(arr_8 [i_2 + 1] [i_2] [i_2 + 1] [4] [i_2 - 2] [i_2 - 2])));
                        var_14 = -2259436967;
                        arr_10 [i_2] = 2518850136667445590;
                        var_15 = (((arr_9 [4] [i_2] [i_2 - 1] [i_2]) ? var_6 : 6));
                    }
                }
            }
            var_16 = (max(var_16, (((-(arr_1 [i_0]))))));
        }
        var_17 = var_1;

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_0] [i_0] [i_4] = var_1;
            arr_14 [i_4] [i_4] [i_0] = 16177;
            var_18 = (max((arr_0 [i_0]), (((var_0 ^ var_3) & (var_11 & var_9)))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_7] [i_7] [i_7] [i_0] [i_0] = ((var_11 || ((max(var_5, 0)))));
                            arr_29 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((!(arr_21 [i_7] [i_5])));
                        }
                    }
                }
            }
            var_19 = (min(var_19, ((((!var_10) ? var_6 : (arr_2 [i_5]))))));
        }
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_20 *= ((50688 ? (arr_21 [i_9] [i_9 - 1]) : ((0 ? 7457247245405970366 : 1709277521))));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_35 [i_9] [7] [i_9] = (((arr_11 [i_9 + 3] [6] [i_10]) - var_6));

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_21 = (((arr_34 [i_9 + 1]) ? var_10 : (-127 - 1)));

                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_22 = (arr_7 [i_10] [i_9]);
                    arr_42 [i_12] [i_10] = (((((~(arr_1 [i_9])))) ? 32147 : 7457247245405970381));
                    arr_43 [i_12] [i_11] [2] [i_12] = ((-89 == (27 == var_8)));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_23 = var_9;
                    var_24 = (max(var_24, (1 != -118)));
                    arr_46 [i_9] [i_10] [i_10] [i_13] [i_10] [i_9] = var_2;
                    var_25 = (4294967268 + var_8);
                }
                var_26 ^= (arr_26 [i_11] [i_9] [i_9] [12] [i_10] [i_11] [i_11]);
                var_27 = (min(var_27, (32 >= 1790129740)));
                arr_47 [i_9] = var_10;
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {

                for (int i_15 = 4; i_15 < 9;i_15 += 1)
                {
                    var_28 = (min(var_28, (var_1 > var_9)));
                    var_29 = ((86 ? 4294967295 : 167));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_55 [i_9] [i_14] [i_9 + 3] [i_9] [i_9] [i_9] = var_6;

                    for (int i_17 = 1; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, ((58324 ? ((-(arr_11 [i_9 - 1] [i_9 + 3] [i_9 + 2]))) : ((~(arr_21 [i_9 + 3] [i_9])))))));
                        arr_59 [i_16] [i_14] [i_14] [i_16] [i_14] = (((arr_1 [i_9 - 1]) - var_8));
                        var_31 ^= (8 && var_7);
                        var_32 ^= 1733935807;
                    }
                    for (int i_18 = 1; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        var_33 = var_0;
                        arr_62 [i_14] [i_14] = (~93);
                        arr_63 [i_18] [i_16] [i_14] [i_16] [i_9] |= (arr_21 [i_9 - 1] [i_9]);
                    }
                    for (int i_19 = 1; i_19 < 12;i_19 += 1) /* same iter space */
                    {
                        var_34 -= (!var_5);
                        var_35 = 93;
                        arr_66 [i_9] [i_14] [i_14] [i_9] [i_19] = (0 == 679910677);
                    }
                }

                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    var_36 ^= (((~63) ? var_0 : (arr_39 [i_20 + 1] [i_9 + 3] [i_10] [i_9 + 3])));
                    var_37 = ((45157 && (arr_61 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9])));
                    var_38 = -1;
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    arr_71 [i_14] [i_14] = ((-108 ? 4 : -110));
                    var_39 = (max(var_39, 255));
                    var_40 = (33027 % var_9);
                }
            }
            var_41 ^= (14848 % var_9);
            /* LoopNest 3 */
            for (int i_22 = 3; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 12;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        {
                            var_42 = (arr_18 [i_9 + 3]);
                            var_43 |= (arr_2 [i_22 - 2]);
                            arr_79 [i_24] [i_24] [i_24] [i_24] [i_24] = 33005;
                        }
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            arr_84 [i_25] = var_2;
            arr_85 [i_9] [i_9] [3] = var_5;
        }

        /* vectorizable */
        for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
        {
            arr_89 [i_26] = (!32);
            arr_90 [10] [10] |= (12 || 0);
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
        {
            var_44 -= (arr_26 [4] [i_27] [i_9] [0] [i_27] [4] [4]);
            var_45 = -28733;
            var_46 = (max(var_46, (((23430 ? 55 : -115)))));
        }
        var_47 = (3411466380 || (arr_57 [9] [i_9] [i_9] [9] [i_9 + 2]));

        for (int i_28 = 0; i_28 < 13;i_28 += 1)
        {
            var_48 += (max(((-56 / (arr_33 [i_28] [i_28] [i_9]))), -111));
            var_49 = (min(var_49, -50689));
        }
    }
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {
        arr_97 [i_29] = (!var_10);
        var_50 = (max(var_50, var_8));
        var_51 = (((14 == 19) != ((var_4 / (max((arr_95 [i_29]), (arr_96 [i_29])))))));
    }
    var_52 |= var_9;
    /* LoopNest 3 */
    for (int i_30 = 2; i_30 < 12;i_30 += 1)
    {
        for (int i_31 = 0; i_31 < 13;i_31 += 1)
        {
            for (int i_32 = 2; i_32 < 10;i_32 += 1)
            {
                {
                    var_53 = ((!(-127 - 1)));
                    arr_106 [i_30 - 2] [9] [i_31] [i_32] = (max((7252 >= var_9), (max((var_9 | 127), ((min((arr_65 [i_32 - 2] [i_31] [i_30 - 2]), (arr_70 [i_30] [i_32 + 3] [i_30] [i_30] [7] [i_32 - 2]))))))));
                    var_54 += (max((((var_6 * (var_10 / var_5)))), var_11));
                }
            }
        }
    }
    var_55 = (max(var_55, (((var_0 ? var_3 : 20378)))));
    #pragma endscop
}
