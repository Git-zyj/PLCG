/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 ^= var_0;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = (((var_3 | var_5) != 0));
            var_16 = (min(var_16, ((((((0 ? 107790361 : var_8))) & var_11)))));
            var_17 = (min(var_17, (((((107790361 && (arr_0 [i_0 + 2]))) ? (arr_0 [i_0 + 1]) : (((arr_0 [i_0 - 1]) * 3107398259)))))));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_18 = (min(var_18, var_11));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_19 = arr_7 [0];
                var_20 = min(var_11, ((min(var_8, ((var_8 ? 10 : (arr_5 [i_2] [i_3])))))));
                var_21 = ((var_1 ? (min((arr_3 [i_2] [i_3]), (var_6 <= var_0))) : var_10));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_22 = (min(61149, ((min(var_8, (var_3 && 1668985725))))));

                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 ^= (((((0 ? 677351724 : var_11) | var_6))));
                        var_24 = min((min(var_6, ((3617615572 ? var_0 : 3107398271)))), (arr_8 [i_5 + 2] [i_2 - 1]));
                        arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = (arr_9 [i_5 + 2] [i_2] [i_0]);
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_2 + 1] [i_4] [5] [i_7] = var_1;
                        var_25 = (45136 | var_4);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_26 ^= var_10;
                        arr_25 [i_8] [i_8] [i_5] [i_4] [i_4] [i_8] [i_0] = var_5;
                    }
                    var_27 = (min(var_27, (~var_4)));
                }
                var_28 = (arr_11 [i_0 - 1]);
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_29 = (arr_15 [i_9] [i_9] [i_2 - 2] [i_0]);

                for (int i_10 = 4; i_10 < 17;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_30 = (min(var_30, (!var_9)));
                        var_31 += (min((min((((var_9 ? var_8 : (arr_8 [i_0 + 1] [i_2 - 2])))), var_12)), 3107398288));
                        arr_32 [i_0] [i_0] [i_2 - 1] [i_9] [i_10] [i_11] &= (min((((var_4 ? -5106213497118587950 : 32766))), 5));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_32 += ((-((min(var_10, (arr_29 [i_0 - 1] [i_9]))))));
                        arr_35 [i_0] [i_2 - 1] [i_0 + 3] = (min(var_4, var_7));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_33 = ((var_7 ? (min(1187568981, (var_1 ^ var_7))) : (arr_22 [i_13] [i_0] [i_2] [i_2] [i_9] [i_10 + 2] [i_13])));
                        var_34 = 268435455;
                    }
                    var_35 = (min(var_35, var_5));
                    var_36 = (min(var_36, var_8));
                    var_37 = (min((((3107398271 ^ (min(var_6, var_12))))), ((23161 * (((var_1 >> (1704672166 - 1704672135))))))));
                }
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_38 = 11707768504756656612;
                        var_39 = var_9;
                    }
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        arr_48 [i_14] [i_16] [i_9] [i_14] = ((var_11 ? (-5106213497118587952 / var_3) : ((min(((-(arr_4 [i_0] [i_2]))), (arr_29 [i_2] [i_9]))))));
                        var_40 = (((min((min(var_8, var_12)), 3107398303))) ? (((var_7 ? var_3 : -var_5))) : ((var_8 ? var_3 : var_12)));
                        var_41 = (var_6 || -17981);
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_42 = ((var_5 << (1187569026 - 1187569016)));
                        arr_51 [i_17] [i_14] [i_9] [i_9] [i_2] [10] = (((var_11 && 20400) * 53051));
                    }
                    var_43 = (min(((((arr_17 [i_14 - 1]) / (arr_17 [i_14 - 3])))), ((min(var_11, var_4)))));

                    for (int i_18 = 1; i_18 < 17;i_18 += 1)
                    {
                        arr_55 [i_0] [i_0] [i_2 - 1] [i_9] [i_0] [i_18 + 1] [i_18] = 74;
                        arr_56 [i_0] [i_2] [i_9] [i_14 + 1] [16] |= (arr_47 [i_0] [i_2] [i_2 - 2] [i_9] [i_14] [i_18]);
                        var_44 = ((((4294967295 / ((var_9 ? var_5 : -4638605085630404225)))) >> (((((((arr_20 [i_0 + 1] [i_14 + 1] [i_9] [i_14] [i_18]) ? var_7 : var_9)) + var_3)) + 431878542444137460))));
                    }
                }
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        var_45 = -365767484;
                        arr_61 [i_20] [i_9] = (arr_29 [i_0 - 1] [i_2 - 1]);
                    }
                    /* vectorizable */
                    for (int i_21 = 4; i_21 < 18;i_21 += 1) /* same iter space */
                    {
                        var_46 = var_12;
                        arr_65 [i_0] [i_21] [i_0] = var_4;
                    }
                    for (int i_22 = 4; i_22 < 18;i_22 += 1) /* same iter space */
                    {
                        var_47 = (min(((min((4638605085630404208 >= var_11), (min(255, var_10))))), (min((((var_0 ? var_8 : 1013157402))), -var_7))));
                        var_48 = (min(var_4, (((var_10 + var_8) ? ((var_2 ? (arr_63 [i_0 + 1] [i_0 + 1] [i_19] [i_19] [i_19]) : (arr_27 [i_22 - 1]))) : (((arr_4 [i_19] [i_9]) ? 6685 : (arr_46 [i_9] [i_2] [i_22] [i_9] [i_22] [i_19] [i_19])))))));
                        var_49 = (min((var_2 | var_5), (arr_9 [i_2 + 1] [i_0 + 1] [i_22 - 2])));
                    }

                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        arr_71 [i_19] &= (arr_14 [i_2] [i_2] [12] [7]);
                        var_50 = (arr_3 [i_0] [i_9]);
                        var_51 = (arr_60 [0] [0] [i_9] [i_19] [i_23]);
                    }
                    for (int i_24 = 2; i_24 < 17;i_24 += 1) /* same iter space */
                    {
                        var_52 += (((!var_1) ? var_11 : ((min(var_5, ((var_0 ? var_3 : 1068679253)))))));
                        arr_74 [i_0 + 2] [i_2 - 1] [i_2 - 1] [i_24 - 1] = (arr_39 [i_0] [i_2] [9] [i_19] [i_24]);
                    }
                    for (int i_25 = 2; i_25 < 17;i_25 += 1) /* same iter space */
                    {
                        var_53 = (max(var_53, (((((((((-18 ? var_8 : (arr_42 [i_2] [i_2] [i_9])))) ? ((min(var_6, -40))) : var_6))) ? (-9223372036854775807 - 1) : (min(-5106213497118587937, (arr_2 [i_2 - 2]))))))));
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                        var_54 = (!var_6);
                    }
                }
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    arr_82 [i_0] [i_0] [10] [i_2] [8] [i_26] |= (min(var_5, (((arr_42 [i_2 + 1] [i_2 - 1] [i_0 + 1]) - (((var_12 ? var_5 : var_2)))))));

                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        var_55 = (min((((!503725585) ? (arr_39 [i_0] [i_2] [i_2] [i_26] [i_2]) : (arr_16 [i_0 + 3]))), ((((arr_30 [i_27] [i_27] [i_27] [i_27] [i_27]) < (~var_10))))));
                        var_56 = (min(var_56, 365767484));
                        arr_86 [i_26] [6] [i_26] [2] [i_26] [i_26] [i_26] |= var_9;
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 19;i_28 += 1)
                    {
                        arr_89 [i_0 + 1] [i_2 - 3] [i_0 + 1] [i_26] [i_28] = (((~var_0) / var_1));
                        arr_90 [i_9] [i_28] [i_9] [i_28] [i_28] |= var_10;
                    }
                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        var_57 = -1068679253;
                        var_58 ^= ((!(arr_15 [i_0] [i_2] [i_26] [i_29])));
                        var_59 = (((min(-var_6, ((var_2 ? var_7 : 57)))) < var_7));
                    }

                    for (int i_30 = 2; i_30 < 18;i_30 += 1) /* same iter space */
                    {
                        var_60 = var_1;
                        var_61 = (arr_92 [i_2] [i_2 + 1] [i_2 + 1] [13] [i_2 + 1] [i_2 + 1]);
                    }
                    for (int i_31 = 2; i_31 < 18;i_31 += 1) /* same iter space */
                    {
                        arr_99 [i_0 - 1] [i_2 - 2] [i_2] [12] [i_26] [i_26] = ((min((((var_2 + 2147483647) << (((var_2 + 9) - 3)))), var_0)) / -32761);
                        var_62 = (min(var_62, 3));
                        var_63 = (arr_57 [i_0] [i_2] [i_2 + 1] [i_31 + 1] [i_31 - 2] [9]);
                    }

                    for (int i_32 = 3; i_32 < 18;i_32 += 1)
                    {
                        arr_102 [i_0] [i_2] [i_26] [i_26] [i_32] = ((!(~var_4)));
                        var_64 = (max(var_64, var_3));
                    }
                }
                var_65 = ((var_2 ? ((var_9 ? var_5 : (arr_6 [i_2 - 2] [i_0 + 3]))) : (((((min((arr_20 [i_9] [i_9] [i_9] [i_2] [i_0]), var_1))) ? (!var_4) : (((arr_87 [i_0] [i_0] [7] [i_2 - 3] [18]) ? var_1 : var_0)))))));
            }
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                var_66 = var_12;
                arr_105 [i_0 + 2] [i_2 - 2] &= (arr_96 [i_0] [i_0 - 1] [i_2] [i_2] [18] [i_2 - 3] [i_2 + 1]);

                for (int i_34 = 0; i_34 < 19;i_34 += 1)
                {

                    for (int i_35 = 0; i_35 < 1;i_35 += 1)
                    {
                        arr_110 [i_35] [i_34] [i_0] [i_2] [i_0] = 211825889;
                        var_67 |= 9198140781442344770;
                        var_68 -= ((!(((3 ? 80 : (((arr_10 [i_0] [i_2] [i_33] [i_34]) & var_10)))))));
                    }
                    arr_111 [i_0 + 3] [i_2] [i_33] [i_34] = ((min(var_11, (arr_44 [i_33] [i_33] [i_33] [14]))));
                    var_69 = (min(var_69, -8509));
                }
            }
        }
        /* vectorizable */
        for (int i_36 = 1; i_36 < 18;i_36 += 1)
        {
            var_70 = (((((9223372036854775807 ? (arr_29 [i_0 + 3] [i_0 + 3]) : var_6))) ? var_2 : ((var_5 ? (arr_39 [14] [i_36] [i_0] [i_0 + 2] [i_0 + 3]) : var_11))));
            var_71 = (min(var_71, ((((arr_3 [i_0] [i_36]) / var_8)))));
        }
    }
    var_72 = (max(var_72, 677351724));
    #pragma endscop
}
