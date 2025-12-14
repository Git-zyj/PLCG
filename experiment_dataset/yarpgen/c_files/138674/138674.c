/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 ? (((-(var_7 * var_9)))) : var_4));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            var_17 ^= ((4095 ? (arr_3 [10] [i_1]) : -var_4));
            arr_6 [1] [10] &= (var_2 ^ var_5);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] = 1;
                        arr_14 [i_1] [i_1] [i_2] [i_3] = (((((var_9 || var_3) < (var_11 / var_11))) ? (var_8 != 2147483647) : (arr_1 [3])));
                        var_18 += ((-16999 ? (~1061642356) : var_10));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0 + 1] [i_0 - 1] [i_4] = var_0;
            arr_19 [i_0] [i_0] [i_0] = (((~(min(var_6, (arr_9 [i_4] [i_0] [8]))))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_19 = (max(var_19, ((((var_10 >= var_6) >> (((1071012161 * 2047) - 2192361893545)))))));
                        var_20 = (min(0, 1));
                        var_21 |= (min((((var_6 || (((arr_21 [i_0] [6] [8]) || var_2))))), (min(var_3, (!var_7)))));
                    }
                }
            }
            arr_24 [i_0] [i_0] = var_6;
        }
        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_22 ^= ((((~((var_5 ? 94 : var_13)))) + ((var_15 ? ((6 ? 7238763465129850314 : 1460707649)) : (var_4 != var_10)))));
            var_23 = ((((-9223372036854775807 - 1) & 876199437230681003)));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_24 -= ((!(((((min(var_0, var_14))) ? var_10 : (var_2 || var_11))))));
                            var_25 = ((!((min(24015, var_2)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_26 *= ((var_14 + (((((((arr_5 [i_0] [i_0]) ? var_0 : var_11))) ? (var_6 ^ var_1) : (min((arr_26 [i_0 - 1]), var_3)))))));
                            var_27 = (min(var_27, (((-((min(((!(arr_34 [i_0] [i_7] [i_11] [i_0]))), (!var_6)))))))));
                            var_28 = ((((min((~-809128123), (var_1 >> var_2)))) * var_0));
                            arr_44 [7] = ((~(((var_12 ^ var_9) ? var_8 : var_12))));
                        }
                    }
                }
            }
        }
        var_29 = (min(var_29, var_10));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_30 = (max(var_30, (arr_21 [i_15] [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 9;i_16 += 1)
                    {
                        var_31 *= ((var_10 != var_5) != var_13);
                        var_32 = (var_11 ? var_5 : (arr_35 [i_0 - 1]));
                    }
                    for (int i_17 = 2; i_17 < 12;i_17 += 1)
                    {
                        var_33 = ((2047 ? ((0 ? -1 : (arr_52 [i_15] [i_15]))) : 1598107666));
                        var_34 = ((-((((var_8 ? (arr_51 [i_15] [1] [i_14] [i_0 - 1] [i_15]) : var_4))))));
                    }
                    var_35 = (max(var_35, ((min((((((var_1 ? (arr_27 [1] [i_14]) : var_7))) ? (((((arr_17 [i_0] [10]) + 9223372036854775807)) >> (-28224 + 28260))) : (((arr_52 [i_14] [i_14]) ^ (arr_23 [i_0] [i_0]))))), (min(((var_5 ? var_11 : var_5)), var_1)))))));
                    var_36 = (min(var_2, ((!(((var_14 ? (arr_42 [i_0] [1] [i_0 + 1] [2] [i_14] [2]) : (arr_43 [i_0] [i_0 + 1] [i_14] [i_14] [i_15] [i_15]))))))));
                    var_37 = (max(var_37, (((-((var_9 ? ((~(arr_33 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))) : (~var_0))))))));
                }
            }
        }
        var_38 *= (arr_25 [2] [2]);
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_57 [i_18] &= -5564350525314519486;
        var_39 ^= 1587208193663267142;
    }

    /* vectorizable */
    for (int i_19 = 4; i_19 < 22;i_19 += 1)
    {
        var_40 = 153;
        var_41 ^= (var_12 * var_0);
        var_42 = (((((var_7 ? var_9 : var_4))) ? ((((arr_58 [i_19] [i_19]) == var_4))) : ((var_8 ? (arr_58 [15] [i_19]) : var_9))));

        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            var_43 |= -1061642362;
            var_44 = (min(var_44, (((-(arr_62 [i_20] [i_19 - 4] [i_19 - 3]))))));
        }
    }
    for (int i_21 = 3; i_21 < 24;i_21 += 1)
    {
        var_45 = (max(var_45, ((min(var_12, (arr_63 [i_21 + 1] [22]))))));
        var_46 = (min((!179), (!var_6)));
        var_47 = (min(var_47, var_15));

        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            arr_69 [i_21] [i_21] [i_21] = ((var_15 ? var_6 : (min(var_0, var_14))));
            var_48 = ((!((((!var_12) | ((var_4 ? var_12 : (arr_66 [16] [i_21] [i_21]))))))));
            arr_70 [i_21] [i_21] [i_21] = ((((min(var_4, var_0))) ? ((min((arr_67 [i_21 + 1] [i_21 - 1] [i_21 - 3]), (arr_66 [i_21 - 1] [i_21 - 1] [i_21])))) : var_7));
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 23;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 1;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    {
                        var_49 = (max(var_49, (((-(var_9 % -30457))))));
                        arr_78 [i_21 - 2] [7] [i_21] [i_21 - 2] = (~1071012144);
                        var_50 -= (((var_6 <= var_13) * (var_2 != var_7)));
                        var_51 = (max(var_51, var_15));
                    }
                }
            }
            var_52 -= (arr_73 [i_21 - 3] [i_23 + 2] [i_23]);
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {
            var_53 ^= ((-(((var_4 != (arr_68 [i_26]))))));
            var_54 = (((arr_72 [i_21]) != ((-(arr_75 [19] [19] [i_21] [i_26])))));
            var_55 -= (var_2 ? var_7 : var_3);
            arr_81 [i_21] = ((~(arr_72 [i_26])));
        }
        for (int i_27 = 0; i_27 < 25;i_27 += 1)
        {
            var_56 = (arr_84 [i_27]);
            var_57 = (min(var_57, ((((((((((arr_80 [i_21] [1] [i_27]) ? var_12 : (arr_77 [i_21] [i_21] [23] [1])))) || var_2)))) % ((5564350525314519498 ? (var_10 * 16859535880046284474) : (arr_64 [0])))))));
            var_58 += ((((var_5 - 268434432) == (arr_68 [6]))) ? var_11 : (((((min(var_2, (arr_68 [22])))) ? (8850 && var_7) : (arr_76 [i_27] [i_27] [2])))));

            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                var_59 = min(1, ((876199437230681003 ? 1 : 9170484082721285451)));
                var_60 = (var_13 - var_10);

                /* vectorizable */
                for (int i_29 = 1; i_29 < 21;i_29 += 1)
                {
                    var_61 = var_15;
                    arr_90 [i_21] [i_27] [i_27] [i_27] [i_27] [i_29] = var_12;
                }
            }
            arr_91 [i_21] = (min((min(var_5, ((var_2 ? (arr_66 [i_21 - 3] [i_21] [i_21]) : (arr_84 [i_21]))))), var_2));
        }
    }
    #pragma endscop
}
