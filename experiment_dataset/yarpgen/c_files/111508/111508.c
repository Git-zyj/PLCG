/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [9] [i_0 + 1] = (~var_10);
        var_19 -= var_14;
        var_20 = ((-((max(var_6, (arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 -= (var_8 / var_7);

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_22 = ((!((((arr_2 [i_1 + 1]) ? (arr_0 [5] [2]) : var_0)))));
            var_23 = (((arr_7 [i_1 + 1]) ? 212 : (((arr_6 [i_1 - 1]) ? var_14 : 46))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_24 = var_1;

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_25 |= var_0;

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_26 = var_12;
                    var_27 = var_2;
                    var_28 = var_17;
                }
                arr_19 [i_1] [i_1] [i_4] [i_1 - 1] = (~(arr_5 [i_4] [i_1]));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_29 ^= (((arr_0 [i_1 + 1] [i_3 - 1]) != (arr_0 [i_1 + 1] [i_3 - 1])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_30 = ((~(((arr_3 [i_6] [i_7]) - 209))));
                            var_31 = 750364952;
                            var_32 = -1;
                            var_33 = -2692966197925245045;
                            var_34 = ((((((arr_13 [i_1] [i_3 - 1] [0]) ? 1 : var_12))) - ((var_14 ? (arr_2 [i_1]) : var_17))));
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                var_35 -= (~(arr_2 [i_1 + 1]));

                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    var_36 = (((arr_18 [i_1] [i_3 - 1] [i_3 - 1] [i_9] [i_10 + 1]) || (arr_18 [8] [6] [i_9] [i_3 - 1] [i_1])));
                    var_37 = (!4357);
                    arr_31 [10] [i_10] [i_9] [i_9] [0] [10] = ((var_15 ? var_8 : (arr_3 [i_9 + 3] [i_3])));
                    var_38 = (min(var_38, var_15));
                }
            }
            var_39 *= ((-(arr_1 [i_3 - 1])));
        }
        for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
        {
            var_40 = (max(var_40, (((!(arr_20 [i_1 + 1] [i_1 + 1] [i_11] [i_11 - 1]))))));
            var_41 = (~(arr_9 [6] [i_1 + 1]));
            var_42 = ((((~(arr_16 [8] [8] [i_11] [i_11]))) > (arr_23 [i_11] [i_11] [i_11 - 1] [i_11 + 1])));
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
        {
            var_43 = var_9;
            arr_38 [i_12] [i_12] = (((arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 2]) * (arr_32 [i_12 + 1] [i_12 - 1] [i_12 + 1])));

            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            arr_48 [10] [i_15] [i_12 - 2] [i_13] [i_14] [1] [4] |= (arr_3 [i_13 - 1] [i_13 - 1]);
                            var_44 += ((!(((1277955583 ? 209 : (arr_40 [i_1 + 1] [i_1] [i_15] [i_1]))))));
                            var_45 = (arr_7 [i_1]);
                            arr_49 [i_1 - 1] [i_12] [i_12 + 1] [4] [4] [i_15] = (arr_27 [i_1] [i_1] [i_1]);
                            var_46 = (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]);
                        }
                    }
                }
                arr_50 [i_12] [i_12] = ((47 ? var_8 : (arr_35 [i_13 + 1] [i_12])));
            }
            var_47 = -var_0;
        }
        arr_51 [2] [2] = (var_11 + var_12);
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 7;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    {
                        var_48 = (~47);

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_49 -= (arr_41 [i_1] [i_16] [i_18] [i_19]);
                            var_50 = (-1277955583 - 257333390);
                            var_51 = (min(var_51, (((var_6 ? (arr_5 [i_1] [i_1 - 1]) : (!var_14))))));
                            arr_66 [i_1] [i_1] [i_1] [9] [i_1 - 1] [i_1 - 1] [2] = var_2;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 10;i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                {
                    var_52 = (arr_60 [i_22]);
                    var_53 = (arr_34 [4]);
                    var_54 = ((47 ? (arr_34 [i_21]) : ((((arr_73 [i_20] [i_20] [i_20]) && (arr_67 [i_22]))))));

                    for (int i_23 = 2; i_23 < 10;i_23 += 1)
                    {
                        var_55 *= (arr_52 [6]);

                        for (int i_24 = 2; i_24 < 9;i_24 += 1)
                        {
                            arr_79 [i_20 - 1] [i_20] [i_22] [i_20] [i_24 - 2] = ((-(arr_44 [i_20 - 1] [i_23 - 1] [i_24 - 1] [i_24] [i_24])));
                            arr_80 [6] [6] [i_20] [i_23 - 2] [i_24] [i_21] [i_21] = arr_74 [i_20] [1] [i_22] [i_23 - 1] [i_24 - 1];
                        }
                        var_56 = (arr_63 [i_23 - 2] [i_23] [i_23] [i_20 + 1] [i_23] [i_20] [i_20 + 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 8;i_25 += 1)
        {
            for (int i_26 = 2; i_26 < 10;i_26 += 1)
            {
                {
                    var_57 = ((arr_70 [i_26 - 2] [i_26 - 2] [i_26]) & (arr_16 [1] [i_25 + 1] [i_26] [i_20 + 1]));
                    arr_85 [i_20] = ((((((-22211 ? (arr_44 [i_20] [i_20] [i_20] [i_20] [i_20]) : (arr_47 [i_20] [i_20]))) + 2147483647)) << (7168 - 7168)));
                }
            }
        }
    }
    for (int i_27 = 1; i_27 < 10;i_27 += 1) /* same iter space */
    {
        var_58 = (~var_3);
        arr_88 [i_27] [i_27] = ((!(arr_14 [i_27 - 1] [i_27])));
        arr_89 [i_27] = ((((((((var_4 - (arr_60 [i_27])))) ? (var_9 & -1943136187) : (arr_11 [i_27] [i_27] [i_27])))) ? (!var_7) : (((arr_18 [i_27 - 1] [10] [10] [i_27 - 1] [i_27 + 1]) ^ (arr_6 [i_27])))));
        arr_90 [i_27 - 1] [i_27] = ((~((-28116 ? ((((arr_9 [i_27] [i_27]) || var_9))) : 24421))));
    }

    for (int i_28 = 0; i_28 < 1;i_28 += 1)
    {
        /* LoopNest 2 */
        for (int i_29 = 3; i_29 < 10;i_29 += 1)
        {
            for (int i_30 = 3; i_30 < 11;i_30 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 12;i_31 += 1)
                    {
                        for (int i_32 = 4; i_32 < 10;i_32 += 1)
                        {
                            {
                                arr_104 [i_28] [i_30] [i_28] [2] [i_28] [i_28] [i_28] = (!1);
                                var_59 *= (arr_96 [5]);
                                arr_105 [i_30] = (var_14 && var_17);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 12;i_33 += 1)
                    {
                        for (int i_34 = 2; i_34 < 10;i_34 += 1)
                        {
                            {
                                var_60 = var_12;
                                arr_111 [i_28] [4] [i_30] [i_30] [i_33] [i_34] [i_30] = ((+((max((arr_99 [i_30 + 1]), (arr_99 [i_30 + 1]))))));
                                arr_112 [i_30] [i_29 - 3] [i_30] = var_15;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_35 = 1; i_35 < 10;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 12;i_36 += 1)
                        {
                            {
                                arr_119 [i_30] [i_35 - 1] [i_30 + 1] [i_30] = var_4;
                                arr_120 [i_28] [i_28] [i_29 + 2] [i_30] [i_30] [4] [i_36] = (max((arr_106 [i_28] [i_29] [i_30] [i_35]), (((-(arr_114 [i_28] [i_28]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_121 [0] = var_5;
        var_61 = ((((var_10 ? (~var_13) : 46)) >= ((~(arr_103 [i_28] [i_28] [i_28])))));
        var_62 = (max(((~(arr_101 [i_28] [i_28] [10] [i_28] [10] [i_28] [i_28]))), (arr_94 [i_28] [i_28] [5])));
    }
    for (int i_37 = 3; i_37 < 17;i_37 += 1)
    {
        var_63 = (min(var_63, (((-(((arr_123 [i_37 - 2]) ? ((min((arr_122 [i_37 + 1] [i_37]), var_5))) : (min((arr_123 [i_37 - 2]), var_13)))))))));
        /* LoopNest 2 */
        for (int i_38 = 3; i_38 < 16;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 18;i_39 += 1)
            {
                {
                    arr_130 [4] [i_39] [i_39] [14] = (arr_128 [i_38] [i_39]);
                    var_64 *= (arr_129 [8] [i_38] [6]);
                }
            }
        }
        var_65 = ((~var_6) >> (((~var_1) ? 0 : (((((arr_125 [i_37] [i_37]) || var_0)))))));
        /* LoopNest 2 */
        for (int i_40 = 0; i_40 < 18;i_40 += 1)
        {
            for (int i_41 = 0; i_41 < 18;i_41 += 1)
            {
                {
                    var_66 = ((((var_11 ? 1 : ((min(var_12, var_12))))) != -1943136187));
                    var_67 = (~var_5);
                    var_68 = ((~(max(var_0, (arr_124 [i_37 + 1])))));
                    var_69 -= ((!(((~((var_5 & (arr_126 [i_37] [i_40] [i_41]))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_42 = 0; i_42 < 11;i_42 += 1)
    {

        for (int i_43 = 0; i_43 < 11;i_43 += 1)
        {
            var_70 *= (((arr_109 [i_42] [i_43] [i_43] [i_43] [i_43]) && (~var_2)));
            var_71 ^= (((!var_3) ? var_18 : var_4));
        }
        for (int i_44 = 0; i_44 < 11;i_44 += 1)
        {
            var_72 = var_18;

            for (int i_45 = 3; i_45 < 10;i_45 += 1)
            {
                arr_145 [6] [i_44] [i_44] [i_44] = ((-var_7 != (var_13 - var_0)));
                var_73 = (arr_68 [i_42]);
                var_74 = ((~((-(arr_91 [i_45] [4])))));
                arr_146 [i_44] [i_44] = ((~(arr_59 [i_45 - 1] [i_45 + 1] [i_45 - 2] [i_45 - 3])));
                arr_147 [i_42] [10] [i_44] = (~var_8);
            }
        }
        var_75 = (var_16 && 210);
    }
    #pragma endscop
}
