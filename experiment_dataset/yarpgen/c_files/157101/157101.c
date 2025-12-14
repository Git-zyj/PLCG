/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(-95570367, 1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = 1334578070;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] = (-((-(arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]))));
                            var_17 = (min(255, var_10));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 = var_3;
                        arr_21 [i_0] = ((!(~255)));
                        arr_22 [i_0] [i_0] [i_5] [i_5] = (!182);
                    }
                }
            }
            arr_23 [i_1] [0] |= (~1);
            arr_24 [i_1] [i_0] = (arr_10 [13] [i_1] [i_0] [i_1] [13]);
            arr_25 [i_0] = (((~233) >= var_6));
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            var_19 = ((~(arr_3 [i_0])));
            arr_28 [i_0] [i_7] |= var_11;
            arr_29 [i_0] [i_0] = ((arr_26 [5] [11] [2]) == ((max(var_1, (arr_0 [i_0])))));
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            arr_34 [i_8] [i_0] [2] = (~var_7);
            var_20 = (min(var_20, var_1));
        }
        var_21 = -32483;
    }
    var_22 = var_11;

    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_23 |= (((~(arr_35 [i_9]))));
        arr_37 [i_9] |= (~12599);

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_24 ^= (max(((~(!var_12))), -31087));
            var_25 ^= max(1, (arr_35 [i_10]));
            var_26 = (min(var_26, var_3));
        }
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            arr_43 [i_9] [i_9] [i_9] = arr_38 [i_9] [i_9];
            var_27 = var_13;
        }
        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_28 ^= ((!(~-432154048)));
                            arr_54 [i_14] = var_13;
                        }
                    }
                }
            }
            arr_55 [i_9] = var_1;
            var_29 = var_13;
        }
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        arr_59 [i_16] [i_16] = (!40079);
        arr_60 [i_16] [9] = var_0;

        /* vectorizable */
        for (int i_17 = 3; i_17 < 10;i_17 += 1) /* same iter space */
        {

            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                arr_67 [i_17] [i_18] = (~var_11);
                var_30 = ((~(arr_5 [i_16] [i_17] [i_18])));
                arr_68 [i_17] [i_17] = (arr_8 [i_16] [i_17 - 2] [i_18] [i_18] [5]);

                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    arr_71 [i_16] [i_17] [i_17] [i_17] [i_17] = (arr_65 [7] [i_17] [i_17] [i_16]);
                    var_31 = var_6;
                }
                for (int i_20 = 2; i_20 < 11;i_20 += 1) /* same iter space */
                {
                    arr_75 [i_17] [i_18] [i_17] [i_17] = (arr_14 [i_18] [i_18] [i_17]);
                    arr_76 [i_18] [i_17] [i_17] [i_17] [i_17] = var_7;
                    var_32 = 0;
                }
                for (int i_21 = 2; i_21 < 11;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        var_33 = ((!(~54341)));
                        var_34 *= -12038;
                    }
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        var_35 = var_5;
                        arr_85 [i_16] [i_17] [i_18] [i_18] [i_21] [i_21] [i_23] = ((~(((var_2 + 2147483647) << (var_8 - 215)))));
                        var_36 = var_12;
                    }
                    for (int i_24 = 2; i_24 < 10;i_24 += 1)
                    {
                        arr_90 [i_17] [i_17] [i_17 - 3] = var_11;
                        arr_91 [i_24] [i_17] [9] [i_17] [i_16] = (arr_8 [i_24] [i_21 + 1] [i_18] [10] [10]);
                        var_37 = var_4;
                    }
                    var_38 = (arr_16 [2] [i_17]);
                    arr_92 [9] [i_17 + 2] [i_17] [i_18] [i_17] [i_21] = var_1;
                }
                arr_93 [i_16] [i_17] [i_16] [i_18] = ((~((~(arr_61 [i_16] [3] [i_18])))));
            }

            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                arr_96 [i_16] [i_16] [i_17] = (~var_6);
                var_39 -= (arr_6 [i_16] [i_16]);
            }
            for (int i_26 = 0; i_26 < 12;i_26 += 1)
            {
                var_40 = (arr_44 [8] [8]);
                var_41 = (max(var_41, 242));
            }
            for (int i_27 = 0; i_27 < 12;i_27 += 1)
            {
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 10;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 12;i_29 += 1)
                    {
                        {
                            var_42 = var_8;
                            arr_110 [i_16] [i_17] [i_16] [i_17] [i_27] [i_17] = (arr_27 [i_17] [1]);
                        }
                    }
                }
                var_43 = (min(var_43, (((-(arr_33 [i_16] [i_16]))))));

                for (int i_30 = 0; i_30 < 12;i_30 += 1)
                {

                    for (int i_31 = 2; i_31 < 11;i_31 += 1)
                    {
                        arr_116 [i_17] [0] [i_27] [i_27] [i_27] [i_31] = var_9;
                        arr_117 [i_16] [i_16] [6] [9] [i_17] [i_17] [i_31] = (((arr_87 [i_16] [i_16] [i_16] [i_30] [i_30]) / var_3));
                        arr_118 [i_17] [7] [7] [i_17] = 239;
                    }
                    for (int i_32 = 0; i_32 < 12;i_32 += 1)
                    {
                        var_44 = ((-(~var_0)));
                        var_45 -= (arr_1 [i_16]);
                        arr_121 [i_16] [i_16] [i_17] [i_30] [i_32] [i_16] [i_17] = var_8;
                        var_46 = (min(var_46, (arr_45 [i_16] [i_16])));
                        arr_122 [i_16] [i_16] [i_16] [i_16] [i_16] [i_30] [i_17] = var_9;
                    }
                    for (int i_33 = 1; i_33 < 11;i_33 += 1)
                    {
                        var_47 = (((95570367 >= var_2) == (!var_4)));
                        arr_127 [i_16] [7] [i_16] [i_30] [i_17] = var_5;
                        arr_128 [i_16] [i_17] [i_17] [i_30] [i_33] = (var_0 - -95570348);
                    }
                    for (int i_34 = 3; i_34 < 10;i_34 += 1)
                    {
                        arr_131 [i_17] = (arr_81 [i_16] [i_16] [i_34] [i_30] [i_17] [i_30] [i_17]);
                        var_48 = -123;
                        arr_132 [i_16] [6] [i_17] [i_17] [i_17 - 3] [i_16] = ((!(var_8 == var_6)));
                        arr_133 [i_17] [i_30] [i_30] [i_27] [i_17] [i_17] = var_10;
                    }

                    for (int i_35 = 0; i_35 < 12;i_35 += 1) /* same iter space */
                    {
                        arr_136 [9] [i_17] [i_17] [i_27] [i_27] [i_30] [i_35] = (((var_2 + 2147483647) << (((arr_17 [i_16] [i_27] [i_30]) - 2053092826))));
                        arr_137 [i_17] [i_30] [i_17] = var_10;
                        var_49 *= (var_10 == var_1);
                    }
                    for (int i_36 = 0; i_36 < 12;i_36 += 1) /* same iter space */
                    {
                        arr_141 [i_16] [i_17] [i_27] [i_16] [i_17] = var_10;
                        var_50 = (min(var_50, (((!(1 ^ 248))))));
                        arr_142 [i_36] [i_17] [i_17] [i_30] [i_36] = (~var_2);
                        var_51 = 37184;
                    }
                    for (int i_37 = 1; i_37 < 9;i_37 += 1)
                    {
                        var_52 = (arr_10 [i_16] [i_16] [i_17] [i_30] [i_37]);
                        var_53 = var_3;
                    }
                }
                for (int i_38 = 0; i_38 < 12;i_38 += 1)
                {

                    for (int i_39 = 0; i_39 < 12;i_39 += 1)
                    {
                        arr_151 [i_16] [4] [4] [i_38] [i_17] = var_2;
                        var_54 |= 59065;
                        var_55 -= var_4;
                    }
                    for (int i_40 = 1; i_40 < 8;i_40 += 1)
                    {
                        var_56 = (var_9 > 7);
                        var_57 = (arr_123 [i_17] [i_17] [i_17] [i_17] [i_17]);
                        arr_155 [9] [i_17] [9] [4] [i_17] [i_16] = var_3;
                        var_58 |= ((!(arr_56 [i_27])));
                    }
                    for (int i_41 = 0; i_41 < 12;i_41 += 1)
                    {
                        var_59 = (arr_52 [i_41]);
                        arr_159 [i_16] [i_17] = ((-(!var_8)));
                        var_60 = ((3998072786 ^ (((((arr_52 [i_27]) > var_14))))));
                        arr_160 [i_17] [i_17] [i_17] = (~(arr_4 [i_16] [i_16]));
                    }
                    var_61 = (var_1 - 510151744);
                    arr_161 [i_17] [i_27] [i_17] = ((!(arr_32 [i_17])));
                    arr_162 [i_16] [4] [i_17] [i_27] [i_17] = (--1231451212);
                }
                for (int i_42 = 2; i_42 < 10;i_42 += 1)
                {

                    for (int i_43 = 0; i_43 < 12;i_43 += 1)
                    {
                        var_62 = (~var_13);
                        var_63 = (arr_7 [i_16] [i_27] [i_43]);
                        var_64 -= 1;
                    }
                    var_65 = 9472793330511491687;
                }
            }
        }
        for (int i_44 = 3; i_44 < 10;i_44 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_45 = 1; i_45 < 8;i_45 += 1)
            {
                for (int i_46 = 1; i_46 < 9;i_46 += 1)
                {
                    {
                        arr_175 [i_46] [8] [i_16] = var_1;
                        arr_176 [i_16] [i_16] [i_45] [i_46 + 3] [i_46 + 3] = (min(((((((arr_125 [i_44] [i_44 + 2] [i_44] [i_44 - 3] [i_44 - 1]) == (arr_115 [i_16]))) || 18743))), var_3));
                    }
                }
            }
            var_66 = var_10;
            arr_177 [i_44] = var_13;
            arr_178 [i_16] = -18743;
        }
    }
    var_67 = var_1;
    #pragma endscop
}
