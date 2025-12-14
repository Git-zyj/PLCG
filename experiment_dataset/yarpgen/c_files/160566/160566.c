/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(--584970118322254270)));
    var_18 ^= (~123);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_19 = ((~((var_12 ? var_4 : 1))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = ((878894263 ? (arr_2 [i_0 + 4] [i_4]) : (arr_3 [i_2] [i_2 - 1] [i_2])));
                        var_21 = (max(var_21, ((((arr_6 [i_0 + 4] [i_1] [i_2] [i_3]) || (arr_6 [i_0 - 2] [i_1] [i_2] [i_3]))))));
                        var_22 = (max(var_22, (var_7 ^ var_1)));
                    }
                    var_23 = var_5;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_24 -= ((var_13 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 3])));
                    var_25 = (var_6 > var_16);
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_26 = ((1 | (var_7 - var_5)));
                    var_27 = (max(var_27, (~var_3)));
                    var_28 = (arr_15 [i_2 + 1] [i_1] [i_2] [i_6] [i_1] [i_0 - 1]);
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_29 -= (~var_15);
                    var_30 -= var_11;
                }
                var_31 = (min(var_31, 121));
            }
            arr_19 [i_0] [i_1] = (((((arr_0 [i_0 + 2]) ? var_13 : var_8)) >> (((~63) + 126))));
            var_32 ^= var_0;
            var_33 -= 4111943649;
        }
        var_34 = (-4979697306751081119 - var_9);
    }
    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
    {
        var_35 -= (((arr_5 [i_8 + 1] [i_8 + 1]) + (((-2147483647 - 1) & -1874937482))));
        var_36 = -var_7;
    }
    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
    {
        var_37 -= 3250456369;
        var_38 += 73;

        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            var_39 = ((2236056189 ? -5422 : 30809));
            arr_26 [i_9] [i_9] = ((((10596610187844894806 / (arr_13 [i_9 + 2] [i_9 + 1] [i_9 + 3] [i_9 + 2]))) >> ((((~(var_8 <= -31994))) + 55))));

            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {

                for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    var_40 ^= (arr_1 [i_11 + 2]);
                    var_41 = (1044510927 >> (var_1 - 1176755341));
                    var_42 = (min(var_42, var_5));
                    var_43 ^= 2649;
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                {
                    var_44 -= ((28 & 4040527979854637827) && 536870904);

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_45 = (~var_1);
                        var_46 = (min(var_46, 11810529622469757983));
                        arr_39 [i_9] [i_9] [i_11 + 2] [1] [i_14] [i_9] = (((arr_20 [i_9] [i_11 + 2]) - (arr_20 [i_9] [i_11 - 1])));
                    }
                    for (int i_15 = 3; i_15 < 7;i_15 += 1) /* same iter space */
                    {
                        var_47 = (max(var_47, -1));
                        var_48 = (~var_16);
                    }
                    for (int i_16 = 3; i_16 < 7;i_16 += 1) /* same iter space */
                    {
                        var_49 ^= 65534;
                        var_50 += ((arr_41 [0] [i_10] [i_11] [i_13 + 3] [i_13 + 3]) ? var_8 : -118);
                        var_51 -= (((arr_27 [i_10 - 1] [i_11 - 1] [i_11] [i_9 + 1]) & 6226208972149990691));
                        arr_46 [i_9] [i_10 - 1] [i_9] [i_13] [i_16] = (arr_21 [i_9]);
                        var_52 ^= ((var_14 ? (arr_9 [i_16 - 1] [i_13] [i_11] [i_10] [i_9]) : (arr_14 [i_9 + 1] [i_11 + 1] [i_13 + 2])));
                    }
                    for (int i_17 = 3; i_17 < 7;i_17 += 1) /* same iter space */
                    {
                        var_53 = (var_14 % var_15);
                        var_54 = var_11;
                        var_55 += (((arr_17 [i_10 - 1] [i_11 - 1] [i_11 + 2] [i_17]) ? var_2 : (arr_17 [i_10 - 1] [i_11 - 1] [i_11] [i_10 - 1])));
                        var_56 = (max(var_56, (((-var_12 ? (arr_36 [i_10 + 3] [i_10 + 3] [i_10] [i_10] [i_10] [i_11 + 2] [i_17 + 2]) : var_11)))));
                    }
                    var_57 -= -1655630673942004270;

                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        var_58 -= (!3810316564);
                        var_59 = (max(var_59, ((((arr_48 [i_11 + 1] [i_11 + 1] [i_13 - 2]) ? (arr_48 [i_11 - 1] [i_11] [i_13 - 1]) : (arr_48 [i_11 - 1] [i_13] [i_13 + 1]))))));
                    }
                    for (int i_19 = 1; i_19 < 8;i_19 += 1)
                    {
                        var_60 = 126;
                        var_61 = (((arr_41 [i_9] [i_9] [i_9 + 2] [i_13 + 3] [i_19 - 1]) > var_14));
                    }
                    arr_55 [i_9] [i_10 + 2] [i_11] [i_13 + 1] = (((((((arr_40 [i_11]) ? -6226208972149990685 : var_6)) + 9223372036854775807)) >> (((arr_1 [i_9 - 1]) + 2339))));
                }
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {

                    for (int i_21 = 4; i_21 < 10;i_21 += 1)
                    {
                        var_62 = (max((max((arr_45 [i_9] [i_20] [i_11] [i_9] [i_9] [i_9]), ((max(29670, 1))))), (var_16 * -16801)));
                        var_63 = -var_13;
                    }
                    for (int i_22 = 1; i_22 < 7;i_22 += 1)
                    {
                        var_64 = ((((((32767 ? 16384 : var_1))) ? (~var_8) : (~var_15))) << ((((((((arr_33 [i_9] [i_9]) ? 24 : var_14))) ? var_9 : var_7)) - 1865778548)));
                        var_65 = ((var_15 - (min(1, 10596610187844894815))));
                    }
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        var_66 = ((((min(var_12, (min(var_5, var_7))))) ? ((~(var_9 | var_5))) : ((((!(arr_2 [i_11 + 1] [i_10 - 1])))))));
                        var_67 = (arr_54 [i_9]);
                        var_68 = var_12;
                        var_69 = (min(var_4, (!85)));
                    }
                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        var_70 = (max(var_70, var_3));
                        var_71 = (max(var_71, var_0));
                    }
                    var_72 = min((min((arr_47 [i_10 + 2] [i_10 + 3] [i_10 - 1] [i_10 + 2] [i_10 + 1]), var_10)), var_11);
                }
                var_73 = ((-970307075 ? 1311825498 : 12971335958877613533));
            }
        }
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            var_74 = ((-(arr_43 [i_9] [2] [2] [i_9] [i_25] [i_9] [8])));
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 11;i_27 += 1)
                {
                    {
                        arr_76 [i_27] [i_9] [i_9] [i_9] = (((min(var_13, 10596610187844894828))));

                        /* vectorizable */
                        for (int i_28 = 2; i_28 < 9;i_28 += 1)
                        {
                            var_75 -= ((~(arr_4 [i_9 + 2] [i_9 + 2])));
                            var_76 = (7525732814052208300 & 12061700192347105882);
                            var_77 += var_10;
                            var_78 = (((arr_42 [i_9] [i_25] [i_9] [i_27] [i_28 + 1] [i_27]) & (arr_2 [i_28 + 1] [i_26])));
                        }
                        for (int i_29 = 3; i_29 < 8;i_29 += 1)
                        {
                            var_79 = (166 | var_14);
                            arr_83 [i_9] [i_9] = -6903231696651271051;
                            var_80 = var_13;
                            var_81 ^= (max(((var_8 ? var_1 : (arr_81 [i_29 - 2] [i_25] [i_27] [i_25] [i_9]))), (-2147483647 - 1)));
                            var_82 = 978606471;
                        }
                        arr_84 [i_9] [i_25] [i_9] [i_9] = (!3584);
                        var_83 += (arr_52 [i_27]);
                        var_84 = -4564233459132166402;
                    }
                }
            }
            var_85 += 23367;
            var_86 = var_11;
            var_87 = (max(var_87, (203 && 7454727937494013371)));
        }
        var_88 = ((((var_0 ? var_16 : var_3)) & (arr_72 [i_9] [i_9] [i_9])));
    }
    for (int i_30 = 1; i_30 < 8;i_30 += 1) /* same iter space */
    {
        arr_88 [i_30] = (~(((!(arr_0 [i_30 + 1])))));
        /* LoopNest 3 */
        for (int i_31 = 3; i_31 < 9;i_31 += 1)
        {
            for (int i_32 = 2; i_32 < 10;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 11;i_33 += 1)
                {
                    {
                        var_89 ^= (arr_22 [i_30] [i_30]);
                        var_90 = (~-10355);
                    }
                }
            }
        }
        var_91 -= (((0 == var_11) ? (arr_13 [i_30 + 3] [i_30] [i_30] [i_30]) : (var_9 & var_15)));
    }
    var_92 -= var_15;
    var_93 = (max(var_93, (((min((max(var_15, var_1)), (!var_8))) - -1820130675))));
    #pragma endscop
}
