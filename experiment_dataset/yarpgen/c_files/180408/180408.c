/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((1 > (arr_1 [i_0]))) ? 1 : var_8));
        var_17 = ((-(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [10] = (((((var_8 ? var_16 : var_2))) && (arr_4 [i_0] [i_1])));
            var_18 = (var_11 < var_14);
        }
    }

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        arr_9 [i_2] = ((((((arr_7 [i_2] [0]) * (arr_0 [i_2 + 3])))) ? var_6 : (((var_16 ? var_6 : (arr_1 [i_2 + 3]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, -var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = ((-((1 ? 30720 : 30771))));
                                var_21 = (((((!(!-15895)))) > (((1 << (var_7 - 77))))));
                                var_22 = ((((-((var_16 ? 1 : (arr_10 [i_5] [i_3]))))) - (((6104 + 1) + ((var_9 ? (arr_20 [i_2] [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 1] [1]) : var_5))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_2] [i_2] = (((((18446744073709551595 ? 1 : 1))) != 4254846832951380401));
                        arr_26 [i_4] [i_2] = (((var_13 >= (arr_13 [i_2 + 1] [7] [i_2] [i_2]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_23 ^= (-(1 + 113));
                        var_24 = (((arr_4 [i_2] [i_2 + 2]) ? var_7 : 1));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_2] = ((73 ? -4254846832951380416 : var_5));
                            arr_35 [i_2] [i_3] [i_10 + 3] = ((-(arr_19 [i_2 + 1] [i_4] [1] [1])));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_2] [i_9] [i_4] [i_2] = 1;
                            var_25 = (min(var_25, ((((arr_3 [i_2 - 1]) - var_15)))));
                            var_26 = (min(var_26, var_16));
                            arr_41 [i_2] = ((((((var_6 > (arr_20 [i_2 + 2] [i_2] [i_3] [7] [1] [i_9] [i_11 + 3]))))) <= ((var_10 ? var_13 : 85))));
                        }
                        var_27 = (max(var_27, -92));
                        var_28 = 5121;
                        arr_42 [i_2] [1] [i_2] = ((((var_15 + (arr_6 [i_2]))) - (arr_6 [i_2])));
                    }
                    var_29 ^= min(((-var_11 ? ((var_7 ? var_8 : var_12)) : var_15)), var_5);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 7;i_14 += 1)
                    {
                        arr_52 [i_2 - 1] [i_2 - 1] [i_13] [i_2] = 1;
                        arr_53 [i_2] = (((arr_11 [i_2] [i_2 + 3] [i_2]) || 895540952));
                        arr_54 [i_2] [i_13] [i_12] [i_2] = -var_0;
                    }
                    var_30 ^= (((((var_10 ? (arr_50 [i_12]) : var_16))) ? ((1 ? var_5 : 1)) : ((~(arr_50 [i_13])))));
                    var_31 = (min((arr_29 [i_2 - 1] [8] [i_2]), (max(var_3, 5121))));
                    var_32 ^= var_14;
                    var_33 &= (!var_6);
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
    {
        arr_57 [i_15] = (((((1 ? (~1) : (~1)))) ? ((-(arr_56 [10] [i_15]))) : (((((min((arr_55 [1]), var_3))) ? (var_7 | var_6) : (var_16 && var_7))))));
        arr_58 [i_15] = (max(((!(arr_55 [i_15]))), ((((var_1 ? (arr_56 [i_15] [i_15]) : 1)) <= ((1 ? var_14 : var_4))))));
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 22;i_18 += 1)
                {
                    {
                        arr_67 [i_16] [i_18 - 2] [i_17] = (min((arr_66 [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_16 - 2] [i_16]), ((((-5 + 9223372036854775807) >> (((arr_63 [i_18 - 1] [i_18 + 2] [i_16 - 2] [i_16]) - 30916)))))));
                        var_34 ^= (((var_1 && var_7) - 1));
                        arr_68 [15] [i_16] [i_17] [i_18 + 1] = (((((max((arr_62 [i_15] [i_15] [18] [i_17]), (!0))))) % (~4254846832951380390)));
                        arr_69 [9] = (13283047778363418189 && (((var_7 ? 14902 : (arr_61 [i_18 - 2])))));
                    }
                }
            }
        }
        var_35 *= ((!((!(((1 * (arr_59 [i_15]))))))));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        arr_72 [i_19] [i_19] = ((((((var_6 | var_0) & var_0))) ? ((~(17288032476953047811 & 16838079133411722794))) : 10408));

        /* vectorizable */
        for (int i_20 = 3; i_20 < 21;i_20 += 1)
        {
            arr_75 [i_20] = ((~(arr_61 [i_19])));
            arr_76 [i_20] [i_20] [i_19] = (arr_74 [i_20] [i_20]);
        }
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 24;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {
                    {
                        arr_86 [0] [0] = ((~(70 ^ 1)));
                        arr_87 [i_19] [i_19] [i_21] [i_22] [i_19] = (arr_81 [19] [i_21] [i_22] [i_23]);
                        var_36 -= (arr_61 [i_21]);
                        arr_88 [i_19] = (arr_82 [23] [i_19] [i_19]);
                    }
                }
            }
            arr_89 [i_19] [i_21] = (((arr_65 [i_19] [i_19] [i_21] [i_21]) ? (arr_77 [i_21] [i_21] [i_19]) : (((((8188 ? 1 : 4254846832951380401))) ? (-32 < var_7) : (var_15 * var_6)))));
            var_37 = (((var_13 ? (((arr_81 [i_19] [i_19] [i_19] [i_19]) ? (arr_65 [i_19] [i_19] [i_21] [16]) : 64)) : (((!(arr_85 [i_19] [i_21] [i_21] [21])))))));
            var_38 += (max((((((arr_83 [i_21] [i_21]) > 3367162216)))), (((~1) ? (((-(arr_81 [i_19] [10] [i_21] [9])))) : (var_16 - var_2)))));
        }
        var_39 = (((((((((arr_73 [i_19] [i_19]) ? 188 : var_9))) ? (((arr_71 [23]) ? -4254846832951380420 : (arr_65 [17] [i_19] [i_19] [4]))) : (var_11 - var_10)))) + (((min(var_5, var_12)) + ((max(var_6, 4294967287)))))));
        arr_90 [i_19] = (((var_6 ? (arr_81 [i_19] [i_19] [i_19] [i_19]) : var_4)));
    }
    #pragma endscop
}
