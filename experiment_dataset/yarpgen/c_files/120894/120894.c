/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((var_16 || (((((1 ? var_1 : 14854)) << (var_2 - 1203))))));
        arr_3 [i_0] = max((min((min(var_7, var_15)), (arr_1 [i_0]))), ((var_16 & (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 ^= ((var_8 ? -9325 : (max((((var_10 ? var_13 : var_14))), var_16))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 = (((max((arr_9 [i_2] [i_1] [i_0]), (arr_8 [i_0] [21] [i_1]))) >= (((arr_9 [10] [i_1] [i_2]) | var_12))));
                var_22 = (((arr_4 [i_2]) ? ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) : (((arr_4 [i_0]) ? (arr_4 [i_0]) : var_11))));

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((min((arr_1 [i_0]), var_11))) || (var_4 && var_15))) ? (max((((var_18 ? var_7 : var_0))), ((var_0 ? var_1 : var_9)))) : (((((((var_16 ? var_16 : (arr_5 [i_2] [4] [4])))) && (var_17 && var_8)))))));
                    var_23 = var_6;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_17 [1] [1] [1] [i_4] = var_13;
                    var_24 = ((((arr_9 [i_0] [i_0] [i_0]) || var_3)) ? (arr_4 [i_0]) : ((var_17 << (var_17 - 2158903300))));
                }
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    var_25 = var_4;
                    arr_21 [i_5] [i_2] [i_1] [15] = (max(((min(var_9, var_13))), (max((~var_4), var_14))));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_25 [i_1] = var_18;
                    var_26 = ((((max((((arr_15 [16] [i_1] [i_0]) ? var_14 : var_7)), (~var_14)))) ? -var_18 : ((-(((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_23 [7] [i_1] [i_2] [i_6] [i_1]) : var_5))))));
                    var_27 = ((((!((max(29634, -239099212))))) ? (((((var_11 >> (var_12 - 4276787762)))) ? (!var_7) : (~var_11))) : var_15));
                }
            }
            var_28 = (max((var_0 && var_13), (((arr_8 [i_0] [1] [i_1]) ? ((var_4 ? (arr_16 [15] [i_1] [i_1]) : var_4)) : var_17))));
            var_29 = var_9;
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            var_30 = (((var_7 / var_10) != (~14831)));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_31 [i_0] [i_7] [i_0] = var_9;
                var_31 ^= ((((((~var_11) ? (arr_10 [i_0] [i_0]) : var_7))) ^ (max(var_18, ((var_12 ? var_13 : var_16))))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_32 = ((var_7 ? var_5 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [7])));
            var_33 = ((-(var_11 - var_2)));
            arr_36 [i_9] [i_9] = (var_15 > var_14);
        }
        var_34 = ((var_14 | ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_6 : var_3))) ? ((var_15 ? var_10 : (arr_1 [i_0]))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_35 = (max((max(var_10, var_17)), ((((arr_32 [i_0]) ? (arr_32 [i_0]) : (arr_29 [i_0]))))));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_36 ^= (arr_29 [i_10]);
        var_37 ^= (max((((!(arr_1 [i_10])))), ((-(arr_1 [i_10])))));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_41 [i_11] [i_11] = ((var_15 ? var_8 : (((arr_5 [i_11] [i_11] [i_11]) << var_10))));
        arr_42 [i_11] = ((var_14 ? (!-9325) : var_15));

        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            var_38 = (min(var_38, ((max(var_8, ((-((max((arr_11 [i_11] [i_11] [12] [i_12 - 2] [i_12 + 1]), var_9))))))))));
            var_39 = var_17;
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    var_40 ^= ((var_12 ? ((var_7 >> (var_15 - 11066809077461965864))) : ((((arr_48 [5] [i_13] [i_13]) || var_10)))));
                    arr_56 [i_15] [8] = ((~((var_6 ? var_8 : var_7))));
                }
                arr_57 [i_14 + 2] [i_13] [i_13] [i_11] = var_18;
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {

                /* vectorizable */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    var_41 = ((arr_8 [18] [i_16] [i_17]) || var_2);
                    var_42 = (-(var_12 <= var_2));
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    arr_64 [i_11] [i_18] [i_16] [4] [1] [4] = (((((((var_17 < (arr_8 [i_13] [i_16] [i_16]))) ? -var_9 : (var_13 & var_0)))) / (max((arr_63 [i_18] [i_16] [i_13] [i_13] [i_11]), ((var_10 ? var_15 : var_15))))));

                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        var_43 = ((((max(11, -9223372036854775806))) || ((min(var_11, var_15)))));
                        var_44 = (((min(((var_2 | (arr_48 [i_11] [1] [i_11]))), (((arr_43 [i_11] [i_11] [i_11]) ? (arr_32 [i_19]) : var_14))))) ? ((((arr_5 [i_11] [i_13] [i_11]) * (((arr_45 [9]) ? var_17 : var_13))))) : (((var_15 < var_8) ? -var_0 : (var_1 - var_6))));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_45 = (max(var_45, (max(var_9, ((max(var_0, var_2)))))));
                        var_46 = (min(((~(arr_9 [i_11] [i_13] [i_16]))), ((((var_14 * var_9) >= -var_3)))));
                    }
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_47 = (((arr_46 [i_21]) ? (~var_16) : (((var_5 & (arr_24 [i_16] [i_13] [i_21]))))));
                        arr_73 [i_11] [i_11] [i_11] = ((arr_66 [i_11] [i_13] [i_16] [i_13]) ? (((((((arr_40 [i_11] [i_13]) ? var_4 : var_10))) ? (arr_19 [i_13] [i_13] [i_13] [i_13]) : (min(var_17, var_10))))) : ((((!(arr_12 [i_21]))) ? (var_16 % var_2) : (((((arr_24 [i_11] [i_18] [i_16]) > var_16)))))));
                        var_48 = (max(var_48, var_1));
                        var_49 = ((~(max((arr_66 [5] [i_13] [i_13] [i_13]), (arr_66 [i_11] [i_13] [i_16] [i_18])))));
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        var_50 = (min(var_50, (arr_23 [i_11] [i_11] [i_16] [i_18] [i_11])));
                        arr_76 [i_13] [i_13] [i_16] [i_18] [i_22] = (var_17 - (~24));
                        var_51 -= var_7;
                    }
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                {

                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        arr_82 [i_11] [i_13] [4] [4] [i_24] = var_12;
                        var_52 *= ((var_11 < (arr_81 [i_11] [i_24] [i_16] [i_23] [i_24] [i_24] [i_24])));
                        var_53 = (min(var_53, ((((arr_0 [i_24]) ? (arr_7 [i_24]) : (((arr_54 [i_23] [i_23] [i_11] [1]) ^ (arr_62 [i_13] [i_13] [i_13] [i_11]))))))));
                        var_54 = (arr_30 [i_13] [i_16] [i_23] [i_11]);
                    }
                    for (int i_25 = 0; i_25 < 12;i_25 += 1)
                    {
                        var_55 = ((((arr_20 [i_11]) >= var_15)) ? var_11 : ((((arr_74 [i_11] [i_13] [i_16] [i_23] [i_25]) ? var_18 : var_5))));
                        var_56 = (((var_3 < var_8) | ((((arr_9 [i_11] [i_11] [i_11]) || var_6)))));
                        var_57 ^= var_2;
                        var_58 = (((((var_15 ? var_4 : var_3))) ? ((((!(arr_55 [i_11] [i_11] [i_11] [i_11]))))) : (arr_72 [i_11] [i_11] [i_11])));
                        arr_85 [i_25] [i_23] [i_11] [i_13] [i_11] = var_8;
                    }

                    for (int i_26 = 0; i_26 < 12;i_26 += 1)
                    {
                        var_59 = (min(var_59, var_2));
                        var_60 ^= ((~var_0) >= ((2505493436 ? -9223372036854775784 : 12264)));
                        arr_89 [i_26] [i_23] [i_16] [4] [i_11] [i_11] = (var_1 | var_4);
                    }
                    var_61 = ((~(~var_13)));
                }
                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {
                    var_62 = (((~var_2) / ((var_15 ? (arr_20 [i_27 - 1]) : var_1))));
                    var_63 = (var_18 % var_17);
                    var_64 = (((var_7 - var_7) && (~var_11)));
                    var_65 = ((var_17 ? ((((~var_0) ? (~var_13) : (min(var_18, (arr_15 [i_11] [6] [i_11])))))) : (((var_9 & var_5) ? (max(var_15, var_3)) : ((max(32758, 2433139097)))))));
                }

                for (int i_28 = 2; i_28 < 10;i_28 += 1) /* same iter space */
                {
                    arr_96 [i_11] = ((!(((min(var_6, (arr_63 [i_11] [i_13] [i_16] [i_16] [8])))))));
                    var_66 = ((-(((arr_84 [i_28] [8] [i_28] [i_28 - 2] [i_28 - 2] [i_28 - 2] [6]) ? (max((arr_51 [i_11] [i_11] [0] [i_11]), (arr_35 [i_11] [i_13] [i_11]))) : var_15))));
                    var_67 = ((var_3 | (((arr_58 [i_11] [i_11] [i_11] [i_11]) ^ var_15))));
                    var_68 = (max(var_16, ((((var_1 - var_14) || (2505493437 || 1197420725725352727))))));
                    arr_97 [i_28 + 1] [1] [i_11] [i_11] = (((((max((arr_15 [15] [14] [i_16]), (arr_7 [i_11]))) << ((((var_17 ? var_1 : var_0)) - 14087400769865215117)))) % ((min((arr_59 [11] [i_13] [i_16]), ((max(var_9, var_2))))))));
                }
                /* vectorizable */
                for (int i_29 = 2; i_29 < 10;i_29 += 1) /* same iter space */
                {

                    for (int i_30 = 3; i_30 < 9;i_30 += 1)
                    {
                        arr_103 [i_30] [i_29 - 1] [i_11] [i_11] [i_13] [i_11] = var_12;
                        arr_104 [9] [i_13] [i_16] [i_29] [3] &= var_16;
                        var_69 = var_1;
                    }
                    for (int i_31 = 2; i_31 < 9;i_31 += 1)
                    {
                        var_70 = (arr_15 [17] [i_16] [i_16]);
                        var_71 = ((var_2 && (((var_7 ? (arr_32 [i_29]) : var_9)))));
                        var_72 *= var_15;
                    }
                    var_73 *= ((((var_0 ? var_10 : var_9)) ^ (((arr_99 [i_11] [i_11] [i_11]) ? var_2 : (arr_34 [i_11] [i_13] [i_13])))));
                }
                var_74 = ((((~(arr_50 [i_16] [i_13] [i_11] [0]))) != ((((var_5 >= (arr_33 [i_16]))) ? ((var_8 & (arr_100 [i_11]))) : ((var_14 << (((var_4 + 8119453715053674163) - 8))))))));
            }
            var_75 ^= (arr_90 [i_11] [i_11] [i_13] [i_11] [i_13] [11]);
        }
        var_76 -= min((max(var_11, (var_12 & var_1))), (((var_0 ? (arr_79 [i_11] [i_11] [6] [i_11]) : (arr_79 [i_11] [i_11] [i_11] [i_11])))));
    }
    #pragma endscop
}
