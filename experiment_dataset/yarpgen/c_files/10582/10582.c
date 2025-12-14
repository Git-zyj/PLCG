/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_12 = ((1488419763 > (((((-9223372036854775807 - 1) || (var_1 * var_10)))))));
            arr_5 [i_0] [i_1] = (var_0 & var_1);
            var_13 = (0 || 42);
            arr_6 [i_0] = var_10;

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_14 = (var_8 || var_9);
                    arr_14 [0] [i_2] [i_1] [14] [i_2] [i_3] &= ((var_10 == var_2) && var_9);
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] [i_1] [3] [i_0] = var_10;
                    arr_18 [i_4] [i_0] [i_0] [i_0] = ((var_1 | ((var_2 << (var_9 - 18420217758055423267)))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_0] = ((var_8 + (var_4 + var_1)));
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_5] = var_8;
                        var_15 -= (var_6 != var_4);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_26 [i_0] = var_7;
                        var_16 *= (18070089661681931153 && -42629733);
                    }
                    var_17 = (((var_5 | var_0) > var_5));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_18 = (var_1 >> (9223372036854775807 - 9223372036854775804));
                        var_19 -= (((var_10 + var_11) + (var_5 + var_1)));
                        var_20 *= var_8;
                        arr_32 [4] [i_0] [i_2] [i_0] [i_0] = var_1;
                        arr_33 [i_0] [i_0] [i_7] [i_1] = var_0;
                    }
                    var_21 -= var_5;
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_37 [i_0] [i_0] [i_2] [i_0] = var_8;
                    arr_38 [i_0] = var_4;
                    var_22 = (((var_0 && var_7) < var_9));
                    arr_39 [i_0] [i_1] [i_2] [i_2] = (((var_7 > var_2) ^ var_4));
                }
                var_23 -= (42629733 * 0);
            }
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                var_24 |= (((var_3 - var_6) || (var_11 || var_4)));
                var_25 = (((var_11 || var_5) - var_6));
                arr_42 [i_0] = (46 < 18070089661681931153);
            }
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_26 = var_3;
            var_27 = (min(var_27, ((((var_0 & var_6) ^ (((16320 << (-471533078 + 471533088)))))))));
            arr_45 [i_0] [i_0] = var_5;
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    arr_50 [i_0] [i_0] [i_12] [i_0] = var_0;
                    var_28 *= var_1;
                    var_29 = ((4294967295 == ((((2942020883553382158 >= (14262 % -42629733)))))));

                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 3; i_15 < 16;i_15 += 1)
                        {
                            arr_55 [i_0 + 1] [i_0] [15] [i_0] = (((-9223372036854775807 - 1) | (-9223372036854775807 - 1)));
                            var_30 = (min(var_30, var_4));
                            arr_56 [i_0] [7] [i_0] [16] [i_15 - 3] [i_15] = var_0;
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_31 -= (((var_7 == 0) && (var_6 <= var_7)));
                            var_32 *= (((((var_10 >> (var_1 - 64)))) || var_9));
                            var_33 = var_0;
                            var_34 = var_2;
                            var_35 *= var_6;
                        }
                        var_36 = ((var_10 && (var_1 && var_10)));

                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_63 [i_0] [i_12] [i_13] [i_14] [i_0] = (((1 + 36983434) % var_9));
                            arr_64 [i_0] [4] = var_10;
                            var_37 = ((-748374102 == 0) + var_1);
                            var_38 = (min(var_38, (2147483647 || 0)));
                        }
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_39 = (min(var_39, (((var_7 && (((var_2 >= var_2) || var_2)))))));
                            var_40 -= var_5;
                        }
                    }
                }
            }
        }
    }
    var_41 = var_9;

    /* vectorizable */
    for (int i_19 = 3; i_19 < 18;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                {

                    for (int i_22 = 3; i_22 < 20;i_22 += 1)
                    {

                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            arr_78 [i_19] [i_22] [i_19] [i_21] [16] [i_19] = (var_7 % var_1);
                            arr_79 [i_20] [i_20] [i_19] [i_20] [i_20] = var_9;
                            arr_80 [i_19] = var_1;
                        }
                        var_42 = (max(var_42, (var_9 <= var_6)));

                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            arr_85 [i_19 - 3] [i_19] [12] [i_22] [5] = (var_11 ^ var_8);
                            var_43 = ((var_10 - (var_7 + var_8)));
                            arr_86 [i_19] [1] [i_19] [i_19] [i_19] = var_10;
                            var_44 = (((((var_3 + 2147483647) << (((var_11 + 8339) - 15)))) <= var_1));
                        }
                        for (int i_25 = 1; i_25 < 17;i_25 += 1)
                        {
                            arr_90 [i_19] [i_19] [i_19 - 1] [i_19] [i_19] = ((var_0 << (var_7 - 4057)));
                            var_45 = var_6;
                        }

                        for (int i_26 = 1; i_26 < 18;i_26 += 1)
                        {
                            var_46 = (min(var_46, (1 < 379775517)));
                            arr_93 [i_19 + 1] [i_20] [i_19] [i_22] [i_26] = var_2;
                            var_47 = (94 ^ var_10);
                            arr_94 [i_26] [i_19] [i_19] [i_19] = ((((((var_3 + 2147483647) >> (var_8 - 21611)))) & var_10));
                        }
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            var_48 = ((var_6 << (var_6 - 3462439280684713763)));
                            var_49 = (var_7 & var_8);
                        }
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_50 = (var_8 + var_2);
                            arr_100 [i_19] [i_22] [i_22] = var_1;
                            var_51 = var_10;
                            arr_101 [17] [i_20] [i_21] [i_19] [i_20] [i_28] = (var_4 && var_6);
                        }
                    }
                    arr_102 [i_19] [i_20] [i_21] = (((var_10 > var_2) == var_8));
                    var_52 = var_2;
                }
            }
        }
        var_53 = (((var_1 ^ var_4) | var_10));
    }
    for (int i_29 = 0; i_29 < 11;i_29 += 1)
    {
        var_54 = (min(var_54, var_10));
        arr_105 [i_29] = var_4;

        for (int i_30 = 0; i_30 < 11;i_30 += 1) /* same iter space */
        {
            arr_109 [i_29] [i_29] = ((var_7 + (250 ^ 3915191778)));
            arr_110 [i_30] = (6160903697374446987 & 55493);
            var_55 += var_4;
            arr_111 [i_29] [7] = var_11;
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 11;i_31 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_32 = 2; i_32 < 10;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 11;i_33 += 1)
                {
                    {
                        var_56 = var_9;
                        arr_119 [i_29] [i_31] [i_31] [i_32] [i_32] = (var_1 && var_6);
                        var_57 = (max(var_57, (var_2 > var_5)));
                        var_58 ^= var_4;
                        arr_120 [i_33] [i_31] [i_29] &= var_10;
                    }
                }
            }
            var_59 = (var_0 != var_10);
            var_60 = var_1;

            for (int i_34 = 0; i_34 < 11;i_34 += 1)
            {
                /* LoopNest 2 */
                for (int i_35 = 3; i_35 < 9;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 11;i_36 += 1)
                    {
                        {
                            arr_130 [i_35] = ((211 >> (42629732 - 42629721)));
                            var_61 = var_3;
                            var_62 = (var_11 + var_8);
                        }
                    }
                }
                arr_131 [i_29] [i_31] [i_34] [i_34] = var_1;
                var_63 = (max(var_63, ((((var_6 % var_4) ^ var_10)))));
                arr_132 [i_29] [3] [i_31] [i_34] = (var_1 | var_9);
            }
            for (int i_37 = 1; i_37 < 9;i_37 += 1)
            {
                arr_135 [i_31] [i_31] [i_37] = (42629714 - 9223372036854775794);
                arr_136 [i_37] [i_37] [i_37] = var_11;

                for (int i_38 = 0; i_38 < 11;i_38 += 1)
                {
                    var_64 = (var_6 && var_0);

                    for (int i_39 = 0; i_39 < 11;i_39 += 1)
                    {
                        var_65 = (var_4 && var_8);
                        var_66 = (max(var_66, var_11));
                        arr_142 [i_29] [i_31] [i_31] [i_37] [i_39] = (var_8 && var_6);
                    }
                }
                var_67 = (max(var_67, var_2));
            }
            arr_143 [i_29] [i_29] [i_29] = (var_3 || var_1);
        }
    }

    for (int i_40 = 0; i_40 < 15;i_40 += 1)
    {
        var_68 *= (((var_4 > var_3) & var_11));
        var_69 = var_9;
        /* LoopNest 2 */
        for (int i_41 = 0; i_41 < 15;i_41 += 1)
        {
            for (int i_42 = 1; i_42 < 13;i_42 += 1)
            {
                {
                    var_70 |= ((var_6 >> (var_7 && var_10)));

                    for (int i_43 = 0; i_43 < 15;i_43 += 1)
                    {

                        for (int i_44 = 1; i_44 < 12;i_44 += 1)
                        {
                            arr_160 [i_43] = var_10;
                            arr_161 [i_40] [i_41] [i_42] [i_43] [i_43] [i_44] = var_11;
                            var_71 -= ((var_8 << (((-42629733 + 42629751) - 16))));
                        }
                        for (int i_45 = 2; i_45 < 13;i_45 += 1)
                        {
                            var_72 = (max(var_72, ((((var_0 + var_5) - (var_11 + var_7))))));
                            var_73 = var_8;
                            var_74 = var_10;
                        }
                        for (int i_46 = 1; i_46 < 1;i_46 += 1)
                        {
                            arr_167 [i_43] = (((var_7 < var_4) % var_7));
                            var_75 *= ((((var_10 - (var_4 | var_2))) ^ (var_2 == var_1)));
                            arr_168 [i_40] [i_40] [i_41] [i_42] [i_42] [i_43] [i_43] = var_0;
                            var_76 = (((var_5 ^ var_8) * var_2));
                            arr_169 [i_46 - 1] [i_43] [i_42] [i_41] [i_43] [i_40] = (((var_6 || var_10) + (var_9 >= var_9)));
                        }
                        var_77 = var_9;
                        var_78 = (max(var_78, var_4));

                        for (int i_47 = 0; i_47 < 0;i_47 += 1) /* same iter space */
                        {
                            var_79 = (max(var_79, (((((var_10 >> (var_3 + 1770667448))) == ((((var_10 && (726489261 ^ 205))))))))));
                            arr_172 [i_47 + 1] [i_43] [i_43] [0] [i_40] = var_6;
                        }
                        for (int i_48 = 0; i_48 < 0;i_48 += 1) /* same iter space */
                        {
                            var_80 = (min(var_80, ((((var_7 || var_2) <= (var_8 & var_9))))));
                            arr_175 [i_43] [i_43] [i_43] [i_41] [i_41] [i_40] [i_43] = var_7;
                            arr_176 [i_40] [i_40] [i_42 + 1] [10] [i_48] [i_42 + 1] [i_43] = (((var_4 + 9223372036854775807) >> (var_7 - 4039)));
                        }
                        for (int i_49 = 3; i_49 < 14;i_49 += 1)
                        {
                            var_81 = (((var_5 & var_1) & (var_3 & var_4)));
                            var_82 -= (((((var_11 + var_8) + (var_4 + var_9))) + var_2));
                            var_83 = var_1;
                            var_84 = var_4;
                        }
                        arr_180 [i_43] [i_41] [i_42] [i_41] = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_50 = 2; i_50 < 14;i_50 += 1)
                    {
                        for (int i_51 = 3; i_51 < 14;i_51 += 1)
                        {
                            {
                                var_85 += var_8;
                                arr_185 [i_40] [i_40] [i_40] [i_51] [i_40] = var_2;
                                var_86 = (max(var_86, var_6));
                                arr_186 [i_41] [i_42] [i_51] = (((0 > 809086627) > var_11));
                            }
                        }
                    }
                }
            }
        }
        arr_187 [i_40] [i_40] = var_5;
    }
    var_87 = var_2;
    #pragma endscop
}
