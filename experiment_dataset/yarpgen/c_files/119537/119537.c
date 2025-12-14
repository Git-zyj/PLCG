/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((var_8 ? ((var_6 ? (arr_1 [i_0]) : 268435456)) : var_14));
        var_18 = (!(arr_0 [i_0]));
        var_19 = (max(var_19, (((!(arr_3 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = var_13;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = (arr_11 [i_1] [3] [i_1] [i_1]);
                    var_22 = var_14;
                    var_23 = 1693833371;
                    var_24 = (min(var_24, var_6));
                    var_25 &= ((-1908061948 && (((min(var_8, var_7)) != var_2))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_26 = (var_7 ^ var_3);
                    var_27 = ((~((~(arr_18 [i_6] [i_5])))));
                    var_28 = var_2;
                }
            }
        }
        arr_20 [i_4] = (arr_6 [i_4] [i_4] [i_4]);
        arr_21 [i_4] = var_6;
        arr_22 [i_4] &= (((2089014359 && 11623412580011124585) < (((arr_9 [i_4] [i_4]) % (arr_17 [14] [i_4] [i_4])))));
        var_29 = (!var_5);
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_37 [i_7] [i_8] = (((~(arr_11 [i_10] [i_10] [i_10 - 2] [i_10]))));
                            var_30 = arr_27 [i_8];
                            var_31 = arr_17 [i_9] [i_7] [i_7];
                            var_32 -= (~(~var_3));
                        }
                    }
                }
            }
            arr_38 [i_8] [1] [i_7] = ((var_16 ? var_13 : var_5));
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_33 = ((-10668681878868331337 >= ((var_1 / (arr_9 [i_7] [i_12])))));
                var_34 = (max(var_34, (arr_5 [i_13])));
                var_35 += var_2;
                arr_44 [i_7] [i_13] = 1908061948;
            }

            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                arr_48 [i_12] &= (((!var_11) >> (var_6 + 88)));
                var_36 *= 1908061952;
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                arr_51 [i_15] [i_12] [i_15] = ((var_5 ? var_3 : 4234));
                arr_52 [i_15] = (((~(arr_0 [i_12]))));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                arr_55 [i_12] = (12359223904455375224 + -233318837);
                var_37 = -var_12;
                var_38 = (var_9 * var_7);
            }
        }
        for (int i_17 = 2; i_17 < 9;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
            {
                var_39 = 14;

                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    var_40 = ((((~(((arr_28 [i_7] [i_7] [i_19]) & 12359223904455375222))))) ? var_8 : (((((((arr_17 [i_7] [i_17] [i_18]) >> (var_8 - 120592686)))) ? 2147483647 : (((arr_34 [2] [i_17]) ? var_6 : 1908061954))))));
                    var_41 = (min(var_41, ((((~1343204407) ? (arr_1 [i_19]) : (arr_45 [i_18]))))));
                    var_42 = (min(var_42, (((arr_6 [i_7] [13] [i_18]) - ((var_15 + (var_14 - 7773288014040168344)))))));
                    var_43 *= (var_14 ? (1242123609905544936 - 34098) : 7);
                }
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_44 = (min(var_44, 16340684166871023117));
                    var_45 = ((-((var_3 ? var_2 : (((arr_13 [i_17]) ? var_14 : var_9))))));
                    arr_66 [i_7] [i_7] [i_17] [i_20] [i_17] [i_7] &= (arr_2 [i_17]);
                }
            }
            for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
            {
                var_46 = ((-(((((arr_14 [i_7]) && (arr_67 [i_7] [i_17] [i_21])))))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            var_47 = (min(var_47, (((-var_6 - var_4) ? (arr_11 [0] [i_21] [i_22] [12]) : (((18446744073709551615 - var_11) - 1))))));
                            var_48 *= ((!(arr_17 [i_21] [i_17 - 1] [i_17 - 1])));
                            var_49 = (max(var_49, 65523));
                        }
                    }
                }
                arr_74 [i_7] [5] [i_21] = ((var_14 >> (1 >= 19)));
                var_50 = (arr_49 [i_7] [i_17]);
            }
            var_51 = -var_9;
        }
    }
    for (int i_24 = 0; i_24 < 21;i_24 += 1)
    {
        arr_77 [7] [7] = (~((-(((arr_76 [i_24]) / var_13)))));
        var_52 = ((var_2 * (var_9 > var_6)));
    }
    var_53 += var_15;
    var_54 = (max(var_54, var_12));

    for (int i_25 = 3; i_25 < 12;i_25 += 1)
    {
        arr_81 [i_25] [i_25] &= var_12;
        var_55 -= (((2147483647 && 18446744073709551615) ? (min(var_12, (arr_6 [i_25] [7] [i_25 + 1]))) : var_7));
        /* LoopNest 3 */
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            for (int i_27 = 2; i_27 < 12;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    {
                        var_56 = ((var_7 == (max(1908061954, 19))));
                        var_57 += var_9;
                        var_58 = -var_8;
                        var_59 += var_7;
                    }
                }
            }
        }
    }
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {

        for (int i_30 = 1; i_30 < 16;i_30 += 1)
        {
            var_60 += ((0 ? (arr_15 [i_29] [1] [i_29]) : var_11));
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 18;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    {
                        var_61 = (min(var_61, ((((arr_12 [i_29] [i_30 + 1]) >> (((var_14 || (arr_11 [i_29] [i_30 - 1] [i_30 - 1] [i_32])))))))));
                        arr_102 [i_30] [i_31] [i_31] = (var_12 ^ (arr_10 [i_30 + 1] [i_30 + 2] [i_30 + 2] [i_30 + 2]));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 18;i_33 += 1)
            {
                for (int i_34 = 1; i_34 < 15;i_34 += 1)
                {
                    {
                        var_62 = ((((max((arr_12 [i_34 + 1] [i_30 - 1]), (arr_12 [i_29] [i_29])))) ? (((arr_12 [i_29] [i_29]) ? 14 : (arr_12 [i_29] [3]))) : -var_11));
                        arr_108 [2] [i_30] [i_30] [i_33] [16] = ((~(~var_6)));
                    }
                }
            }
            var_63 ^= (((arr_15 [i_29] [i_30] [3]) ? (arr_103 [i_29] [i_30 + 2]) : ((var_2 ^ (var_12 & var_5)))));
        }
        for (int i_35 = 0; i_35 < 18;i_35 += 1)
        {
            var_64 &= ((~((19 ? (arr_104 [10] [i_35] [i_35] [i_29]) : (-2147483629 / -1908061954)))));
            var_65 = ((!(arr_106 [i_35] [i_35] [i_35])));
        }
        for (int i_36 = 0; i_36 < 18;i_36 += 1)
        {
            arr_114 [i_36] = (((0 / (arr_103 [i_36] [i_29]))));
            arr_115 [i_29] = var_2;
        }
        /* LoopNest 2 */
        for (int i_37 = 0; i_37 < 18;i_37 += 1)
        {
            for (int i_38 = 2; i_38 < 15;i_38 += 1)
            {
                {
                    var_66 = (min(var_66, (((0 ? var_2 : (var_4 - -219849242))))));
                    var_67 = ((var_12 ? var_5 : (((var_4 ? var_1 : var_8)))));
                    var_68 = ((63 > ((var_2 ? (arr_94 [i_29]) : var_5))));
                    var_69 = (min(var_69, (((((!(arr_92 [i_29] [i_38]))) && ((min((((arr_7 [i_29]) ? (arr_119 [i_29] [i_37] [i_38] [1]) : var_12)), ((((arr_103 [i_29] [i_29]) > var_3)))))))))));
                    /* LoopNest 2 */
                    for (int i_39 = 3; i_39 < 17;i_39 += 1)
                    {
                        for (int i_40 = 0; i_40 < 18;i_40 += 1)
                        {
                            {
                                arr_125 [i_29] [i_37] [i_38] [i_29] [i_39 - 3] [12] [i_40] = ((((((((arr_110 [i_29]) ^ 16776704))) | ((253 ^ (arr_107 [i_40] [i_38 + 2] [i_38 + 2] [i_29] [i_29]))))) & ((((min(-1908061956, 92))) | 18446744073709551615))));
                                var_70 += ((!(921484103416882478 >= var_6)));
                                var_71 = (18446744073709551614 ^ var_2);
                            }
                        }
                    }
                }
            }
        }
        var_72 = (!921484103416882479);
    }
    #pragma endscop
}
