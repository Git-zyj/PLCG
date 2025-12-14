/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(((-(arr_0 [i_0 + 2]))), 239892103));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] = (((((-(var_10 + var_6)))) | (min(var_9, (arr_8 [11] [i_1] [i_0] [i_3])))));
                            arr_13 [i_0] [i_3] [i_2] [i_0] [i_2 + 3] [i_0] = (((((1 ? var_7 : ((max(21786, (arr_1 [1]))))))) ? ((max(var_16, 43741))) : (min((((arr_1 [i_2 - 1]) + 227)), var_11))));
                        }
                    }
                }
                var_19 ^= (min(((((arr_8 [i_0 - 1] [i_0] [10] [i_0 + 1]) || var_11))), var_8));
                var_20 = ((max(var_3, var_15)) | -var_2);
            }
        }
    }
    var_21 = ((-(max((!var_12), (var_5 & var_11)))));

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [i_4] = (-(arr_14 [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_5] [i_5] [i_6] [i_7 + 2] [i_6] [i_7] = ((((((arr_20 [i_4] [i_5] [i_6]) == 92))) & (arr_22 [i_7 + 2] [i_7] [i_7 - 2] [i_7] [i_7 - 3] [i_7 + 2])));

                        for (int i_8 = 4; i_8 < 18;i_8 += 1)
                        {
                            var_22 = var_0;
                            var_23 *= var_4;
                            var_24 = (min(var_24, ((var_4 >> (var_13 - 40)))));
                        }

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_25 = ((~(arr_26 [i_7 - 3] [i_9 + 1] [i_9 - 1] [i_9] [i_9])));
                            var_26 ^= (((arr_26 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_7 + 2]) < (!13006685652583465341)));
                        }
                        var_27 = (max(var_27, ((((-(arr_23 [i_4] [10] [i_4] [i_7])))))));
                        arr_30 [i_5] [i_6] [i_6] [i_6] [i_7] = (!var_17);
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_28 = -var_16;
                            arr_37 [i_4] [i_5] [i_6] [i_5] [17] [17] [i_10] = (((var_7 ? (arr_22 [i_4] [i_4] [i_5] [i_6] [i_10] [i_4]) : var_12)));
                            var_29 = ((!((((arr_29 [i_4] [i_5] [i_6] [i_5] [i_11] [i_11] [i_4]) ? var_15 : var_12)))));
                            var_30 = (min(var_30, var_7));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            var_31 ^= var_5;
                            var_32 -= -var_14;
                            var_33 = (!var_4);
                            var_34 = (var_4 > var_2);
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            var_35 = ((min((min(var_14, var_17)), (var_7 & var_7))));
                            arr_42 [i_4] [i_5] [i_5] [i_5] [i_5] = ((max((arr_14 [i_5]), var_13)));
                            arr_43 [i_10] [i_5] [i_10] [i_10] [i_10] [i_10] [i_10] = min(((min(var_1, var_5))), (min((((arr_38 [i_4] [i_4] [i_4] [i_4] [7] [i_13]) ? var_3 : var_5)), (var_0 ^ 239892103))));
                            var_36 = ((~((13006685652583465322 ? -107 : 4055075183))));
                        }
                        var_37 = (max(var_37, ((max((min(var_8, var_10)), (((!(arr_17 [i_10] [i_5])))))))));
                        var_38 = var_7;
                        var_39 *= (7101671576418431705 % 4602678819172646912);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_48 [11] [i_5] [11] [i_14] [i_15] = var_7;
                                var_40 = ((-((min(var_13, (arr_27 [i_4] [i_4]))))));
                            }
                        }
                    }
                    arr_49 [i_5] = (((((-(arr_19 [i_4] [i_4] [i_5])))) ? ((((min(var_4, var_8))) ? var_7 : var_8)) : ((-(var_4 ^ 4055075194)))));
                    var_41 ^= ((min((max(18048138526328918261, var_7)), ((max(111, var_0))))));
                    arr_50 [i_4] [i_4] [i_5] [i_5] = (arr_34 [i_4] [8] [i_5] [i_6]);
                }
            }
        }
        arr_51 [i_4] = max(var_8, (max(((var_17 ? var_1 : var_8)), var_3)));

        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_42 = (((var_0 ^ var_1) + (var_3 >= var_10)));

            /* vectorizable */
            for (int i_17 = 3; i_17 < 20;i_17 += 1)
            {

                for (int i_18 = 3; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    var_43 = ((var_3 ? var_2 : var_13));
                    var_44 = (var_11 / var_6);
                }
                for (int i_19 = 3; i_19 < 18;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 4; i_20 < 19;i_20 += 1)
                    {
                        var_45 -= (var_9 & var_6);
                        var_46 = ((~(13006685652583465351 & 28773003)));
                    }
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        arr_70 [i_4] [i_4] [6] [i_4] [i_16] = var_17;
                        var_47 = (arr_47 [i_17 - 1] [i_16] [i_16] [i_17 - 1] [i_21]);
                    }
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_48 = ((var_16 < (arr_55 [i_16] [i_17 - 2])));
                        var_49 = ((var_6 == ((var_2 & (arr_61 [i_4])))));
                        var_50 = (((arr_68 [i_4] [i_16] [i_19] [i_4] [i_19] [i_16] [i_19]) ? var_1 : (((var_8 ? (arr_20 [i_4] [i_16] [i_17]) : (arr_18 [i_4] [i_16]))))));
                    }
                    arr_73 [i_4] [i_16] [i_17] [i_16] = (((!0) != ((var_1 ? var_11 : var_18))));

                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        var_51 = (((arr_26 [11] [i_19] [11] [i_16] [i_4]) ? 9223372036854775807 : var_7));
                        arr_76 [i_4] [i_19] [i_19] [i_4] [i_23] [i_19] [i_4] &= (var_8 < var_18);
                        arr_77 [i_16] [i_19 - 3] [i_16] [i_19] = var_14;
                        var_52 ^= var_2;
                        var_53 = var_4;
                    }
                }
                var_54 |= (((arr_54 [i_4] [i_16] [i_17 - 3]) ? (arr_61 [i_17 - 2]) : (arr_61 [i_4])));
            }
            for (int i_24 = 1; i_24 < 19;i_24 += 1)
            {
                var_55 = ((!(((1178350737 ? 5462831795873997104 : 228)))));

                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    arr_83 [i_4] [i_16] [i_16] [i_25] [i_16] = var_18;
                    arr_84 [i_25] [i_16] [i_4] = (max(((max(var_4, var_4))), (max((min(var_18, var_10)), (min(var_15, var_18))))));
                    arr_85 [i_16] [i_24] [i_16] = var_7;
                }
                for (int i_26 = 1; i_26 < 20;i_26 += 1)
                {

                    for (int i_27 = 0; i_27 < 21;i_27 += 1)
                    {
                        var_56 = (max(var_56, (arr_62 [3] [i_24 - 1] [i_26] [3])));
                        var_57 = (arr_72 [i_16]);
                    }
                    for (int i_28 = 2; i_28 < 20;i_28 += 1) /* same iter space */
                    {
                        arr_94 [i_28] [i_16] [i_24] [i_16] [i_4] = (min(8535394754437795586, (((~(max(4055075193, var_16)))))));
                        var_58 -= ((-(arr_22 [i_26 + 1] [i_28] [i_28] [i_28] [i_28 - 1] [14])));
                        var_59 = (min(var_59, (((var_10 ? (min(((max(var_10, var_14))), (max(18446744073709551613, var_11)))) : (~var_3))))));
                        var_60 = ((var_6 ? (((-(arr_79 [i_24 - 1] [i_16] [i_26 - 1] [i_26])))) : ((var_14 + (var_6 + var_8)))));
                    }
                    for (int i_29 = 2; i_29 < 20;i_29 += 1) /* same iter space */
                    {
                        var_61 &= (((((arr_33 [i_26] [i_26 - 1] [i_4]) ? var_4 : var_8)) / var_10));
                        var_62 = -var_0;
                    }
                    arr_97 [i_4] [i_4] [i_16] [8] [i_4] [i_4] = (arr_87 [i_24] [i_24 + 2] [i_24] [i_24 + 1] [i_24] [i_24]);
                    arr_98 [i_4] [i_4] [i_26] [i_4] [i_16] = (((arr_87 [i_24 - 1] [i_26] [i_26] [i_24 - 1] [i_26] [i_26]) || (21786 || -1)));
                }
                for (int i_30 = 0; i_30 < 21;i_30 += 1)
                {
                    arr_101 [i_16] [i_4] [i_16] [i_16] = min(var_10, (max(((var_4 ? var_17 : 739997245)), ((var_12 ? var_14 : var_5)))));
                    var_63 = (max(var_63, ((((((var_11 ? var_3 : var_15))) && ((min((((var_17 + 9223372036854775807) << (((((arr_33 [i_4] [i_4] [i_4]) + 2114144121)) - 14)))), var_3))))))));
                }
                arr_102 [i_4] [i_4] [i_16] [i_4] = var_11;

                for (int i_31 = 1; i_31 < 17;i_31 += 1)
                {

                    for (int i_32 = 0; i_32 < 21;i_32 += 1)
                    {
                        var_64 = (!-var_0);
                        var_65 -= ((239892103 ? 255 : 0));
                        var_66 = 227;
                    }
                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 21;i_33 += 1)
                    {
                        arr_112 [i_16] = (var_8 == var_3);
                        var_67 ^= ((var_12 << (((var_14 + 2672856517833393303) - 1))));
                        var_68 -= ((var_14 ? ((var_15 ? var_3 : var_13)) : (((-(arr_17 [i_4] [i_16]))))));
                        var_69 = (min(var_69, -var_15));
                    }

                    for (int i_34 = 0; i_34 < 21;i_34 += 1)
                    {
                        var_70 ^= (((arr_60 [i_4]) ? ((var_0 ? (arr_60 [i_4]) : var_9)) : ((var_2 ? (arr_60 [i_4]) : (arr_60 [i_4])))));
                        arr_116 [i_4] [i_16] [i_24 + 1] [i_31] [i_34] [i_16] = (min((((arr_55 [i_31 + 4] [i_24 + 1]) ^ var_5)), -var_13));
                    }
                }
            }
            var_71 = ((-(((!((max(var_14, var_10))))))));

            /* vectorizable */
            for (int i_35 = 0; i_35 < 21;i_35 += 1)
            {
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 1;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 21;i_37 += 1)
                    {
                        {
                            var_72 = ((~((var_10 ? var_17 : var_9))));
                            var_73 ^= -320295239;
                        }
                    }
                }
                var_74 = -var_10;
                var_75 = ((var_7 ? var_11 : ((((arr_25 [i_16] [i_16] [i_16] [i_35] [i_16] [i_16] [i_16]) && var_4)))));
                /* LoopNest 2 */
                for (int i_38 = 1; i_38 < 17;i_38 += 1)
                {
                    for (int i_39 = 1; i_39 < 20;i_39 += 1)
                    {
                        {
                            var_76 = (arr_58 [i_4] [i_16] [i_35] [i_38 - 1] [i_4] [i_16]);
                            var_77 ^= (1 | 29);
                            var_78 = var_17;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_40 = 0; i_40 < 1;i_40 += 1) /* same iter space */
        {
            arr_136 [11] [i_40] = (var_6 - var_12);
            arr_137 [i_40] [i_40] [i_40] = var_13;
        }
        for (int i_41 = 0; i_41 < 1;i_41 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_42 = 0; i_42 < 21;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 21;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 21;i_44 += 1)
                    {
                        {
                            var_79 = var_4;
                            arr_147 [i_4] [i_41] [i_42] [i_43] [i_41] = ((((((max(111, var_3))) ? var_16 : -var_9)) ^ ((((!((min((arr_63 [i_4] [i_4] [i_42] [i_43]), (arr_132 [2] [i_41] [i_42] [i_43] [i_44]))))))))));
                            var_80 = var_7;
                            arr_148 [i_4] [i_41] [i_42] [i_43] [i_41] [i_41] [i_44] = ((~(arr_80 [i_41] [i_42] [i_43] [i_44])));
                            var_81 = var_13;
                        }
                    }
                }
            }
            var_82 = ((max((min((arr_122 [i_4] [i_41] [i_41] [i_41]), var_15)), (max(var_10, var_15)))));
        }
        arr_149 [1] = (-var_15 * var_13);
    }
    var_83 = (max(var_83, var_4));
    #pragma endscop
}
