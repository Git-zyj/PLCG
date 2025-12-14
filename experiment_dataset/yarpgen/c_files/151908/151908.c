/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_10 = 4194288;
                        arr_11 [i_3] [i_0] [i_1 - 1] [i_2] [i_2] [i_3 + 1] = 716126060;
                    }
                }
            }
        }
        var_11 = (min(var_11, var_3));
        arr_12 [i_0] = (~252);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_12 *= ((-4194299 & (1 != -4194307)));
                            var_13 = (arr_19 [6] [i_5 + 3] [i_8 - 1]);
                            var_14 = (min(var_14, var_2));
                            var_15 = (max(var_15, (!1)));
                            var_16 = (max(var_16, (((~(arr_15 [i_8 + 1] [i_5] [i_5 + 1]))))));
                        }
                        arr_26 [i_4] [i_4] [i_4] [i_4] = var_8;
                        var_17 = var_9;
                        var_18 ^= var_6;
                        var_19 = (max(var_19, (((~(arr_19 [i_5 - 1] [i_5 - 1] [i_5]))))));
                    }
                }
            }
            var_20 = var_6;
            arr_27 [i_5] [i_5] [i_5] = ((~(((arr_16 [i_5 + 3] [i_4]) * (arr_19 [i_4] [i_5] [i_5 + 1])))));
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_21 ^= (var_7 & -4194288);
                                var_22 *= 7315145873521461770;
                            }
                        }
                    }
                    var_23 *= (arr_28 [i_4]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_1));
                                var_25 = 12288;
                                var_26 = 1;
                                var_27 = (max(var_27, ((((arr_42 [i_4] [i_9] [i_9 + 1] [i_13] [14] [i_13]) + (arr_42 [i_10] [i_14] [i_9 - 1] [i_9 - 1] [i_14] [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_51 [i_15] [11] [11] [i_17] [11] = 1297326773467459181;
                        var_28 = (240 + -4823495709960875764);
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        var_29 = (1152358554653425664 * var_4);
        var_30 *= (-77 * 234);
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_31 *= (arr_45 [i_19]);
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 13;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 12;i_21 += 1)
            {
                {
                    var_32 = (max(var_32, (arr_23 [i_20 - 1] [i_21 - 1])));
                    var_33 = (max(var_33, (!-4194303)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                {
                    var_34 = (min(var_34, (var_1 + var_8)));
                    var_35 = ((-var_7 >> ((((~(arr_38 [2] [i_22 + 2] [i_22 + 1] [i_22] [i_22 + 2] [10]))) + 14))));
                }
            }
        }
        var_36 *= (arr_47 [i_19] [i_19] [i_19] [i_19]);
    }

    for (int i_24 = 0; i_24 < 21;i_24 += 1)
    {
        var_37 ^= 40443;

        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
        {
            arr_73 [i_24] [i_25] = var_6;

            /* vectorizable */
            for (int i_26 = 3; i_26 < 20;i_26 += 1)
            {
                var_38 = (max(var_38, ((((arr_74 [i_26 - 2] [i_24]) + var_8)))));
                arr_76 [i_25] [i_25] = (var_6 != var_4);
                var_39 &= (arr_75 [i_26 - 3] [13] [i_26 - 1]);
            }
            /* LoopNest 2 */
            for (int i_27 = 1; i_27 < 18;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 21;i_28 += 1)
                {
                    {
                        var_40 = var_8;

                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            arr_85 [i_29] [i_25] [i_27] [i_25] [i_24] = 10837;
                            var_41 *= ((0 - (((((arr_77 [i_24] [i_24] [i_24]) >= 4823495709960875764))))));
                        }
                        var_42 = (arr_75 [i_28] [i_27 + 2] [i_25]);
                        var_43 = (max(var_43, var_9));
                    }
                }
            }
        }
        for (int i_30 = 0; i_30 < 1;i_30 += 1) /* same iter space */
        {
            var_44 = arr_82 [i_24] [i_30] [2] [i_24] [i_24];
            var_45 = 11619492955312551500;
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 1;i_31 += 1)
        {
            var_46 += (((((arr_89 [i_24] [i_31]) + 2147483647)) >> (((arr_89 [i_24] [i_31]) + 889796422))));
            /* LoopNest 2 */
            for (int i_32 = 3; i_32 < 20;i_32 += 1)
            {
                for (int i_33 = 2; i_33 < 18;i_33 += 1)
                {
                    {
                        arr_98 [i_24] [i_24] [i_32] [i_24] = (((arr_84 [i_24] [i_32 - 1] [i_33 - 2] [1] [i_33 - 2]) - (arr_84 [i_32 - 1] [i_32 + 1] [i_32 - 1] [15] [i_32 - 1])));
                        var_47 = (min(var_47, 234));
                    }
                }
            }
            var_48 |= var_1;
        }
    }
    for (int i_34 = 0; i_34 < 1;i_34 += 1)
    {
        /* LoopNest 3 */
        for (int i_35 = 2; i_35 < 15;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 16;i_36 += 1)
            {
                for (int i_37 = 1; i_37 < 1;i_37 += 1)
                {
                    {
                        arr_109 [i_34] [i_35] [i_34] [i_35] = 1;

                        for (int i_38 = 0; i_38 < 1;i_38 += 1)
                        {
                            var_49 = var_5;
                            arr_114 [i_34] [i_35] [i_36] [i_37 - 1] [i_34] = (((63045578 + 13260305635649165393) + (((((arr_43 [1]) >= var_9))))));
                            arr_115 [i_34] [i_34] [i_36] [i_37] [i_38] = 1;
                        }
                        for (int i_39 = 0; i_39 < 16;i_39 += 1)
                        {
                            var_50 ^= var_7;
                            var_51 = -1452;
                        }
                        arr_118 [i_34] [i_35] [i_36] [i_34] [i_35] [6] = ((var_2 & 1) >> -9198104550547393017);
                        arr_119 [i_34] [13] [i_36] [i_37] = (((arr_44 [i_35] [i_35 - 2] [i_35 - 2]) && var_4));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_40 = 2; i_40 < 12;i_40 += 1)
        {
            for (int i_41 = 2; i_41 < 15;i_41 += 1)
            {
                {
                    arr_126 [i_34] [i_40] [i_41 + 1] = (arr_31 [i_34] [i_34] [i_40]);
                    arr_127 [i_34] [i_40] [i_34] = var_3;
                    var_52 ^= ((((arr_120 [i_41] [i_40 - 2] [i_41]) << var_5)));
                    var_53 = (((238 & (1 * -16496))));
                }
            }
        }
    }
    var_54 = var_5;

    for (int i_42 = 0; i_42 < 19;i_42 += 1) /* same iter space */
    {
        var_55 = (1 - var_7);
        var_56 = var_7;
        var_57 = var_4;
        var_58 = var_3;
    }
    for (int i_43 = 0; i_43 < 19;i_43 += 1) /* same iter space */
    {
        var_59 += 4194306;
        var_60 *= 5195985684811752934;
        /* LoopNest 3 */
        for (int i_44 = 0; i_44 < 19;i_44 += 1)
        {
            for (int i_45 = 0; i_45 < 19;i_45 += 1)
            {
                for (int i_46 = 0; i_46 < 19;i_46 += 1)
                {
                    {
                        var_61 &= var_4;
                        var_62 *= var_0;
                        var_63 = (min(var_63, (3644722072 & var_6)));
                        var_64 = (max(var_64, (1 > 21014)));
                    }
                }
            }
        }
        arr_142 [i_43] [i_43] = (((arr_72 [i_43] [10] [i_43]) + var_2));
    }
    /* vectorizable */
    for (int i_47 = 0; i_47 < 19;i_47 += 1) /* same iter space */
    {
        var_65 += (arr_92 [i_47] [i_47] [6] [i_47]);
        arr_146 [i_47] = var_8;
    }
    var_66 = (((((var_2 + 9223372036854775807) >> (240 - 209))) >> var_5));
    #pragma endscop
}
