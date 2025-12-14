/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (~15)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_5;
        var_21 = (max(var_21, ((max((((var_17 < 10537719563512533888) - ((1 ? (arr_3 [i_0 - 2]) : var_18)))), ((((min(1, var_8)) ? 1 : var_4))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_22 ^= (min(1, (((arr_11 [i_3] [i_0 - 3] [i_0 - 3] [i_3]) ? (arr_11 [i_0] [i_0 - 1] [i_2] [i_0]) : (arr_11 [i_0] [i_0 - 1] [i_2] [i_2])))));
                        arr_13 [i_1] [i_1] [i_3] = ((((var_13 ? (arr_6 [i_0 + 2]) : (arr_2 [i_0 + 2])))) ? (((((var_0 ? var_10 : (arr_0 [i_0 + 2] [i_1])))) ? 1 : var_1)) : var_13);
                        var_23 = (max(var_23, (min(((min((max((arr_0 [i_3] [i_1]), 1)), (arr_9 [1] [2])))), (((((var_3 ? var_2 : 1))) ? var_1 : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2])))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_24 -= ((var_5 ? (arr_15 [i_0 - 3] [i_0 - 3]) : (arr_12 [i_0 - 2])));
                        var_25 = ((var_16 ? (((!((((arr_5 [i_0 - 2] [1] [i_0 - 2]) ? var_1 : (arr_5 [i_1] [i_2] [i_2]))))))) : 1));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_26 += ((1 ? 1 : 1));
                        var_27 = 1;
                        var_28 = var_10;
                        var_29 += (((var_13 & 1) ? (((arr_12 [i_2]) & var_5)) : (arr_10 [i_0 - 1] [i_0 + 2] [i_0 - 3])));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_30 &= (((max(var_0, var_13)) > (arr_19 [i_6] [i_2] [i_1] [i_2] [i_1] [i_0])));
                        arr_20 [i_6] [i_0] [i_1] [i_0] = -1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_31 &= var_4;
                        var_32 -= ((var_18 ? 1 : 1));
                        var_33 = (arr_9 [i_7] [i_7]);
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] [12] = -1;
            var_34 = var_16;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_39 [i_8] [i_10] [i_11] [i_12 - 3] = var_19;
                        arr_40 [i_8] [i_10] [i_8] |= (!(((-((min(var_8, var_15)))))));
                        var_35 = var_0;
                    }
                }
            }
            var_36 = max(((((1 ? 1 : 1)))), (max(((1 ? (arr_27 [i_8] [i_10]) : 1)), (((1 ? 1 : 1))))));

            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                var_37 = (max(var_37, var_4));
                var_38 += var_6;
                var_39 -= var_13;
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
            {
                var_40 = var_14;

                for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        var_41 -= (min(((((arr_37 [i_14]) >> var_8))), ((((var_15 ? 1 : var_14)) & var_16))));
                        var_42 = var_18;
                        var_43 += (((arr_15 [i_8 - 4] [i_16 - 1]) ? var_7 : (arr_15 [i_8 + 1] [i_10])));
                    }
                    var_44 = (arr_22 [i_8 - 2] [i_8 - 2] [i_14] [i_15] [i_15] [2]);
                }
                for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        arr_54 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8] [i_8 + 3] = (min((((arr_37 [i_8 - 3]) ? (((min(1, 1)))) : (arr_19 [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_8]))), ((((arr_49 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8]) ? (!var_15) : var_4)))));
                        arr_55 [i_10] = (min((((arr_46 [i_8] [i_8]) >> (((arr_41 [i_10]) - 1070235223)))), ((((((!(arr_38 [i_8])))) + ((1 ? 1 : 1)))))));
                        arr_56 [i_8] [i_18] [i_17] &= (min((arr_34 [i_8] [i_8] [i_8 + 2] [i_8]), var_0));
                    }
                    for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                    {
                        var_45 = (max(var_45, (!1)));
                        var_46 = ((((var_19 & var_13) ? (1 | var_14) : (((max(var_17, 1)))))));
                        arr_59 [i_10] [i_10] = ((((((arr_46 [i_8 - 4] [i_8 - 4]) ? var_8 : var_18))) ? ((-(arr_46 [i_8 - 4] [i_8 - 4]))) : (arr_46 [i_8 - 4] [i_8 - 4])));
                    }
                    for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                    {
                        arr_64 [i_20] [i_10] [i_17] [i_14] [i_10] [i_8] = var_8;
                        arr_65 [i_8] [i_10] [i_10] = var_3;
                        var_47 = (max(var_47, (((1 ? 1 : var_13)))));
                        var_48 += (((arr_18 [i_14] [i_14] [i_14]) ? (((((((arr_11 [i_8] [i_10] [i_17] [i_20]) - var_12))) || (((var_11 ? var_14 : (arr_3 [i_10]))))))) : (((1 ? 1 : 1)))));
                    }

                    /* vectorizable */
                    for (int i_21 = 1; i_21 < 1;i_21 += 1)
                    {
                        var_49 = 1;
                        var_50 = (((arr_33 [i_21 - 1] [i_8 - 4] [i_8 - 4]) ^ 1));
                    }
                }
                var_51 += (~1);
                var_52 -= (((((((arr_49 [i_8 + 1] [i_10] [i_10] [i_10] [15] [i_14]) ? var_12 : (arr_2 [i_8 + 3]))) ^ (min(var_11, var_3)))) < (((var_17 ? var_19 : (arr_16 [i_8] [i_8 + 3] [i_8 - 3] [i_10] [i_10]))))));
            }
            for (int i_22 = 0; i_22 < 16;i_22 += 1) /* same iter space */
            {
                var_53 = (max(var_53, (((((((!(arr_26 [i_8 - 1]))))) % var_14)))));
                var_54 = (((min(var_2, (arr_22 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 3] [i_10] [i_10])))) ? (((var_12 ? (arr_22 [i_8 - 3] [i_8 - 3] [i_8] [i_8 - 1] [i_8 - 2] [i_10]) : (arr_18 [i_8 - 3] [i_8 - 4] [11])))) : (arr_15 [i_8 - 4] [i_8]));
                var_55 = ((max(1, (arr_41 [i_8 - 4]))));
            }
        }

        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    {
                        var_56 = (min(var_56, var_5));
                        arr_80 [i_8] [i_23] [i_24] [i_25] = 1;
                    }
                }
            }
            arr_81 [i_8] [i_23] = (((((arr_53 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) || var_17)) ? var_10 : ((((var_17 + 2147483647) >> (((arr_53 [i_8] [i_8 + 3] [1] [i_8] [i_8 - 4] [1]) + 102)))))));
            var_57 -= (max(((min((arr_75 [i_8 + 1] [i_8 + 2] [i_8 - 2]), (arr_75 [i_8 - 3] [i_8 - 4] [i_8 - 3])))), (max(var_12, var_13))));
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 14;i_26 += 1)
    {
        var_58 = (!1);
        var_59 = (arr_15 [i_26] [i_26]);
    }
    for (int i_27 = 0; i_27 < 23;i_27 += 1)
    {
        var_60 = (var_6 < var_10);
        var_61 ^= 1;
        /* LoopNest 2 */
        for (int i_28 = 1; i_28 < 22;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 23;i_29 += 1)
            {
                {

                    for (int i_30 = 0; i_30 < 23;i_30 += 1) /* same iter space */
                    {
                        var_62 = (max(var_62, (((!(~var_16))))));
                        var_63 = (min(1, 1));
                        var_64 = (min((((!((((arr_86 [i_28] [i_27]) ? var_3 : var_12)))))), ((-((var_7 ? var_6 : var_10))))));
                        var_65 = var_17;
                    }
                    for (int i_31 = 0; i_31 < 23;i_31 += 1) /* same iter space */
                    {
                        arr_98 [i_27] [i_28] [i_29] [i_29] [i_31] [i_31] = (((((var_8 ? var_15 : var_15))) ? (arr_92 [i_27] [i_27] [i_31]) : var_15));
                        var_66 = (max(var_66, (((((((arr_94 [i_31] [i_28] [i_28 - 1] [i_31]) ? var_10 : var_2))) ? ((var_10 ? (arr_94 [i_27] [i_28 - 1] [i_28 + 1] [i_31]) : (arr_94 [i_27] [i_28 - 1] [i_28 - 1] [1]))) : (~1))))));

                        for (int i_32 = 0; i_32 < 1;i_32 += 1)
                        {
                            var_67 = var_12;
                            arr_103 [i_28] [i_28 + 1] [i_29] [i_32] [i_29] [i_29] [i_29] = (min((arr_101 [i_28] [i_28] [i_28] [i_28 + 1]), (arr_92 [i_28] [i_28] [i_27])));
                            var_68 = ((((((arr_93 [i_28 - 1] [i_28 - 1] [i_28] [i_28 + 1]) ? (arr_93 [i_28 - 1] [i_28 - 1] [1] [i_28 + 1]) : var_0))) ? ((-(arr_100 [i_27] [i_28 - 1] [i_29] [i_31] [i_32] [i_31]))) : ((max((arr_87 [i_28 + 1] [i_28]), ((min(1, 1))))))));
                            var_69 = (((max(1, 1)) || (((var_19 ? (arr_99 [i_27] [2]) : (arr_100 [i_28] [i_28] [i_28 - 1] [i_28 - 1] [i_28 + 1] [i_28]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 23;i_33 += 1) /* same iter space */
                    {
                        var_70 = ((var_9 ? ((1 ? var_13 : var_3)) : (arr_100 [i_27] [i_28] [i_28 + 1] [i_27] [i_29] [i_29])));
                        arr_107 [i_33] = (((arr_89 [i_28 + 1]) ? (arr_101 [i_28 - 1] [i_28 + 1] [i_28 - 1] [i_28 - 1]) : var_7));

                        for (int i_34 = 0; i_34 < 23;i_34 += 1)
                        {
                            var_71 = (max(var_71, ((!((var_4 <= (arr_91 [i_27] [i_28 + 1] [i_27] [11])))))));
                            var_72 = (-(arr_94 [i_28] [i_28] [i_28] [i_28 - 1]));
                        }
                    }
                    var_73 |= (((~1) ? (arr_99 [i_27] [i_27]) : 1));

                    /* vectorizable */
                    for (int i_35 = 1; i_35 < 20;i_35 += 1) /* same iter space */
                    {
                        arr_113 [i_27] [i_27] [i_29] [i_35 - 1] = -1;
                        var_74 = 1;
                        var_75 = (min(var_75, var_9));
                        var_76 = (max(var_76, (((1 ? var_3 : (arr_87 [i_35 + 3] [i_28 - 1]))))));
                        var_77 += arr_87 [i_28] [i_35];
                    }
                    for (int i_36 = 1; i_36 < 20;i_36 += 1) /* same iter space */
                    {
                        var_78 -= (((1 > 1) ? (((!(arr_101 [i_27] [i_28 + 1] [11] [i_27])))) : var_15));
                        arr_116 [i_27] [i_27] [i_29] [i_36] [i_27] = (max(1, 1));
                        var_79 &= (max((arr_88 [i_36]), ((((var_1 ? var_4 : 1))))));
                        var_80 ^= max(((var_8 ? var_11 : (arr_87 [i_28 - 1] [i_36 + 1]))), (1 && 1));
                    }

                    for (int i_37 = 0; i_37 < 23;i_37 += 1) /* same iter space */
                    {

                        for (int i_38 = 0; i_38 < 1;i_38 += 1)
                        {
                            var_81 = var_13;
                            var_82 = (max(var_82, 1));
                            var_83 = (min(var_83, ((min((arr_115 [i_28 - 1]), (arr_115 [i_28 - 1]))))));
                        }

                        for (int i_39 = 0; i_39 < 1;i_39 += 1)
                        {
                            var_84 = (((var_4 && var_14) ? 1 : (max((arr_121 [i_28 + 1] [i_28 + 1] [i_28 - 1] [1] [i_28] [i_28] [i_28 + 1]), 1))));
                            arr_126 [i_27] [i_39] [i_29] [i_29] [i_37] [i_39] = (1 && 1);
                            var_85 = (max(var_85, ((max((arr_87 [i_28] [i_28]), ((((arr_88 [i_28 + 1]) && (arr_88 [i_28 - 1])))))))));
                            arr_127 [i_39] [i_28] [19] [9] [i_39] = (arr_87 [i_28 + 1] [i_28 - 1]);
                            var_86 = (max(var_86, ((((((arr_91 [i_28 - 1] [i_28 + 1] [i_28 + 1] [12]) ? (arr_91 [i_28 - 1] [i_28 + 1] [i_28 + 1] [i_37]) : var_5)) <= ((min((arr_91 [i_28 - 1] [i_28 + 1] [i_28 + 1] [i_37]), var_2))))))));
                        }
                    }
                    for (int i_40 = 0; i_40 < 23;i_40 += 1) /* same iter space */
                    {
                        arr_130 [i_27] [i_28] [i_29] [i_40] = var_8;
                        arr_131 [i_27] [13] [4] = (arr_96 [i_27] [i_28] [i_27] [i_40] [i_40]);
                        var_87 = var_8;
                        var_88 = (min((((arr_122 [i_27] [i_27] [i_28 - 1] [i_29] [i_40]) ? 1 : (arr_122 [i_29] [i_28] [i_29] [i_28] [i_29]))), ((var_9 >> (arr_122 [i_27] [i_28] [i_29] [i_29] [21])))));
                        var_89 = 1;
                    }
                }
            }
        }
    }
    var_90 = var_7;
    #pragma endscop
}
