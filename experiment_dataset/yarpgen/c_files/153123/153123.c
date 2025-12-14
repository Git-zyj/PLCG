/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_5 ? var_5 : var_2))) ? var_0 : var_6)) == var_10));
    var_12 = ((var_10 ^ ((((var_1 % var_3) >= var_8)))));
    var_13 ^= (32767 < 695287092);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (((((-6895256614202973769 ? 6895256614202973770 : 1061417195)) * (((var_1 >> (var_8 - 5770406693676735100)))))) * var_10);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_15 = ((var_1 ? var_10 : var_5));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_2] = ((var_2 ? var_7 : var_1));
                            var_16 ^= ((12074 ? -1551713573393232812 : 12074));
                            var_17 -= (1 >= 16);
                            arr_13 [i_0] [i_2] |= (((((var_0 ? var_2 : var_4))) ? var_6 : ((var_4 ? var_6 : var_0))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [3] [i_1] [i_5] [i_1] [i_6] [i_0] = ((var_5 ? var_2 : var_6));
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_6] [i_0] = ((var_2 >= var_8) ? var_9 : var_2);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_0] [23] = var_6;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_0 ? var_8 : var_2))) ? ((var_8 ? var_2 : var_7)) : ((var_1 ? var_7 : var_9))));
                            var_18 *= ((((((((var_10 ? var_2 : var_1))) ? ((var_6 ? var_8 : var_5)) : var_10))) ? ((((((var_7 ? var_2 : var_4)) > (var_7 >= var_6))))) : ((var_3 ? var_6 : (var_8 ^ var_3)))));
                        }
                    }
                }
            }
            for (int i_12 = 3; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_0] [i_12] = ((((var_4 >= var_9) ? (((var_10 ? var_1 : var_1))) : ((var_9 ? var_7 : var_0)))));
                var_19 = (((var_2 < (16352305368250729247 * 1))));
            }
            for (int i_13 = 3; i_13 < 23;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 3; i_14 < 23;i_14 += 1)
                {
                    var_20 = (((((var_6 ^ ((var_8 >> (var_9 - 11982451678053521331)))))) ? (16352305368250729247 == 2147483643) : (49857 < 2128752196)));
                    var_21 = (max(var_21, ((max(((var_2 ? 53461 : 1365792012554887107)), (var_0 * var_6))))));
                    arr_45 [i_0] [i_8] [i_8] [5] [i_8] [i_0] = var_6;
                    arr_46 [i_14] [i_0] [i_0] [i_0] = (var_3 >= var_10);
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_22 = ((((267386880 % (105 % 5658646574108831029))) > (((240 >> (var_7 - 709719365945755863))))));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = var_0;
                        var_23 = var_6;
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                    {
                        arr_57 [i_0] [i_8] [i_15] [i_17] = ((((var_5 ? var_6 : var_10)) % (var_6 >= var_6)));
                        arr_58 [i_0] [i_8] [i_13 - 1] [i_0] [i_17] = (((var_9 && var_5) ? (((var_10 ? var_10 : var_10))) : var_7));
                        arr_59 [i_0] [i_8] [i_13] [i_13] [i_17] [i_15] = ((var_0 ? ((var_0 ? var_1 : var_7)) : var_8));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_8] [i_0] [i_15] [i_18] = (var_10 * var_3);
                        arr_64 [8] [i_8] [i_13] [i_8] [i_18] [i_0] = (((-2147483647 - 1) <= 705233912));
                        arr_65 [i_0] [i_0] [i_0] [i_18] = (var_6 + var_9);
                    }
                    var_24 = (max(var_24, (8367832659327760715 > 6227278491680240822)));
                    arr_66 [i_0] [i_13] [i_0] [i_8] [i_0] [i_0] = (((((var_8 > var_7) || var_3)) ? ((((((var_9 ? var_8 : var_4))) ? ((9223372036854775807 ? 53461 : -4112993721952020992)) : (((var_6 ? var_4 : var_6)))))) : (((43429 / 226) ? (var_10 / var_5) : (var_0 / var_8)))));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        {
                            var_25 = (var_4 <= ((0 ? (2 ^ 2867289172181338554) : 1)));
                            arr_73 [i_0] [i_0] [i_13] [i_19] [i_13 - 2] [i_8] [i_20] = ((((var_5 ? (((var_5 ? var_0 : var_6))) : (var_9 + var_10))) >= (((((var_3 ? var_7 : var_4))) ? (var_1 / var_7) : (var_10 + var_6)))));
                            var_26 = (min(var_26, (((((((var_9 | var_4) ? (var_1 ^ var_5) : ((var_0 ? var_2 : var_0))))) & ((var_3 & ((var_6 ? var_3 : var_0)))))))));
                        }
                    }
                }
                var_27 *= ((((((((var_1 ? var_8 : var_8))) ? (((var_10 ? var_0 : var_0))) : (1 & -3586512674435930021)))) ? ((var_3 ? var_6 : var_5)) : (((((var_3 << (var_10 - 1001264718)))) ? (var_9 > var_7) : (var_0 <= var_4)))));
                var_28 -= ((var_4 & (((((var_5 ? var_1 : var_10)) > ((var_3 ? var_0 : var_2)))))));
            }
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 23;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 22;i_22 += 1)
                {
                    {
                        var_29 = ((((((var_5 * var_2) ? var_3 : (var_7 == var_0)))) > var_8));

                        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                        {
                            var_30 *= (((max(var_2, var_3)) & var_2));
                            arr_83 [1] [1] [i_21] [i_0] [i_23] = (((var_7 ^ var_4) ^ (((var_8 % var_5) ? ((var_1 ? var_5 : var_8)) : (((var_6 ? var_0 : var_6)))))));
                            var_31 = (((((((var_9 ? var_6 : var_1))) ? (var_7 / var_9) : var_10)) - (((((var_2 ? var_3 : var_5))) & ((var_7 ? var_9 : var_1))))));
                            arr_84 [i_0] [i_0] [i_21] [i_21] [i_21] [1] [i_21 - 3] = ((((var_1 ? ((var_7 ? var_9 : var_6)) : var_3)) <= (var_8 % var_1)));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                        {
                            arr_87 [i_0] [i_24] [i_8] [i_21] [i_8] [i_0] = (((((1181713479 ? 867115275 : 8458733740083366282))) ? 536870912 : 1));
                            var_32 = (((var_2 / var_8) >= (((var_7 ? var_2 : var_4)))));
                            arr_88 [i_0] [i_0] [i_21] [i_22] [i_22 + 1] [i_0] [i_24] = var_10;
                            var_33 = var_4;
                            var_34 *= (((var_3 * var_0) >> ((((var_1 ? var_7 : var_2)) - 709719365945755853))));
                        }
                        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                        {
                            arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_8 && var_1) <= ((var_1 ? var_4 : var_6))))) > ((((209 ? 0 : -986473137)) << var_2))));
                            var_35 *= ((var_1 != ((5658646574108831046 ? 5595577577163418675 : 3758096383))));
                            arr_93 [i_0] [i_0] = ((((var_8 ? var_10 : var_9)) >> ((((var_4 ? var_6 : var_2)) * (var_5 < var_5)))));
                        }
                        for (int i_26 = 0; i_26 < 24;i_26 += 1)
                        {
                            var_36 = (max(var_36, ((((((-7920502218250266142 ? 5518842395503770361 : 3589733370))) ? (((((var_10 ? var_4 : var_2))))) : ((((((-32767 - 1) ? 63127 : 63139))) * ((var_1 ? var_8 : var_0)))))))));
                            arr_98 [8] [i_0] [i_8] [23] [23] [i_26] [8] = ((((var_5 >= ((var_5 ? var_5 : var_10)))) ? (((((var_10 ? var_10 : var_8))) ? ((var_4 ? var_9 : var_6)) : ((min(var_10, var_3))))) : 9223372036854775807));
                            var_37 &= (((((var_5 ? var_0 : var_10)) != (var_10 ^ var_10))));
                        }
                        var_38 = (var_0 * var_3);
                        arr_99 [i_0] [i_8] [20] [0] [i_0] = ((((((min(var_6, var_10))) ? (var_4 & var_0) : var_6))) / ((-9223372036854775796 ? var_10 : (var_0 * var_7))));
                        arr_100 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((var_2 & ((var_5 ? var_3 : var_1))))), ((var_9 % ((var_8 ? var_1 : var_9))))));
                    }
                }
            }
            arr_101 [i_0] [i_0] = (((((var_10 ? var_3 : var_6))) > var_0));
        }
        for (int i_27 = 1; i_27 < 23;i_27 += 1)
        {
            var_39 = (max(var_39, var_6));

            /* vectorizable */
            for (int i_28 = 3; i_28 < 21;i_28 += 1)
            {
                arr_108 [i_0] [i_27] [i_27] [i_0] = (((var_6 ? var_10 : var_3)));

                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    arr_111 [i_0] [i_27 + 1] [i_28] [i_0] = ((((var_3 ? var_5 : var_7)) + (var_2 & var_10)));

                    for (int i_30 = 0; i_30 < 24;i_30 += 1)
                    {
                        arr_115 [i_0] [20] [i_28] [i_0] [8] &= (-6809805753191699329 >= 1);
                        var_40 = (((((var_10 ? var_5 : var_7))) ? ((var_8 ? var_6 : var_5)) : (var_10 && var_6)));
                    }
                    var_41 = (var_8 > (var_10 > var_3));
                }
                for (int i_31 = 0; i_31 < 24;i_31 += 1)
                {
                    arr_119 [i_0] = var_10;
                    var_42 = ((-8934408634084965959 ? 63127 : 240));
                    arr_120 [i_31] [i_27] [i_31] &= ((193 ? 41736 : 1));
                }
                for (int i_32 = 0; i_32 < 24;i_32 += 1)
                {

                    for (int i_33 = 1; i_33 < 1;i_33 += 1)
                    {
                        arr_126 [21] [i_28] [i_0] = ((var_10 ? ((var_4 ? var_5 : var_3)) : (((62 ? 224 : 1)))));
                        var_43 = (((((var_6 >> (var_5 + 4515)))) | (var_9 ^ var_3)));
                    }
                    for (int i_34 = 1; i_34 < 22;i_34 += 1)
                    {
                        var_44 = (((((var_7 ? var_5 : var_6))) / ((var_10 ? var_3 : var_1))));
                        var_45 = (max(var_45, ((((var_1 + var_8) + (((var_0 ? var_3 : var_0))))))));
                        var_46 = (max(var_46, ((((((var_2 ? var_8 : var_8))) ? (536854528 | -776611420061247664) : (var_1 - var_6))))));
                        var_47 += (var_9 & var_6);
                        var_48 = (((var_10 % var_1) ? ((-7113374002991936838 ? 7113374002991936845 : 3705090600)) : (var_10 >= var_6)));
                    }
                    for (int i_35 = 0; i_35 < 24;i_35 += 1)
                    {
                        arr_133 [i_32] [i_32] [12] [i_32] |= (((var_6 ? var_1 : var_2)) * (var_1 >= var_2));
                        arr_134 [i_0] [i_27] [i_0] [i_32] [i_35] = (((var_5 > var_5) ? var_7 : (var_8 <= var_9)));
                        arr_135 [i_35] [i_0] [i_28] [i_0] [i_0] = (((var_0 ? var_8 : var_10)) * (((688500734 ? 1 : 1))));
                        arr_136 [i_0] [i_0] [i_28] [i_32] [i_35] = (1649 ? 12788097499600720583 : 0);
                        var_49 = (((((var_4 ? var_8 : var_5))) ? ((1 ? 589876690 : 12788097499600720597)) : var_2));
                    }
                    arr_137 [i_0] [i_27] [i_28] [i_0] = (var_10 * var_3);
                    var_50 = var_10;
                }
                var_51 |= var_0;
            }
            /* vectorizable */
            for (int i_36 = 1; i_36 < 22;i_36 += 1)
            {
                arr_142 [i_0] [6] [i_0] [i_0] = ((var_7 ? var_10 : var_5));
                arr_143 [15] [i_27] [i_0] [i_36] = (((((var_8 ? var_2 : var_9))) ? (var_10 * var_0) : ((var_10 ? var_7 : var_7))));
                arr_144 [i_0] [i_0] [i_36] = (((var_3 >= var_1) ? var_10 : var_8));
            }
        }

        for (int i_37 = 0; i_37 < 1;i_37 += 1)
        {

            for (int i_38 = 0; i_38 < 1;i_38 += 1)
            {
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 1;i_39 += 1)
                {
                    for (int i_40 = 3; i_40 < 20;i_40 += 1)
                    {
                        {
                            var_52 -= ((((((((var_2 ? var_5 : var_10))) ? (var_0 < var_8) : ((var_7 ? var_0 : var_3))))) ? ((((((var_1 ? var_6 : var_8))) ? (var_3 | var_5) : (var_6 > var_4)))) : ((((var_6 ? var_4 : var_8)) - ((var_9 ? var_8 : var_9))))));
                            arr_154 [i_0] [i_0] [i_38] [i_0] [i_39] [i_38] = (((((((var_3 ? var_10 : var_2)) & ((var_7 ? var_4 : var_1))))) ? (((var_2 & var_6) % ((21965 ? 3705090625 : var_5)))) : (((175 ? 226 : 168)))));
                            arr_155 [i_0] [i_37] [i_38] [i_39] [i_0] = ((((var_9 % var_2) >= (var_0 >= var_3))) ? (((var_2 == var_9) ? (var_3 ^ var_2) : (var_8 >> var_0))) : ((((var_5 + 2147483647) >> (var_2 == var_10)))));
                        }
                    }
                }

                for (int i_41 = 0; i_41 < 24;i_41 += 1)
                {
                    var_53 = ((((((var_0 % var_1) ? (var_0 == var_2) : ((var_1 ? var_4 : var_4))))) > ((var_6 % ((var_8 ? var_2 : var_9))))));
                    var_54 = ((((((((var_0 >> (var_6 - 28520943)))) >= ((var_5 ? var_7 : var_2))))) >= var_0));
                    var_55 ^= ((((1960967332 && 9223372036854775807) ? ((var_7 ? var_4 : var_5)) : (var_3 >= var_4))));
                }
                for (int i_42 = 3; i_42 < 23;i_42 += 1)
                {
                    arr_162 [i_0] = (((var_2 & var_9) >> (((var_7 + var_4) - 709719365945772732))));
                    arr_163 [i_42 + 1] [i_0] [i_0] [20] = ((((var_6 ? ((var_4 ? var_7 : var_9)) : var_9))) ? ((((min(var_7, var_10))) ? ((var_8 ? var_8 : var_9)) : ((var_2 ? var_7 : var_0)))) : (var_6 & var_0));
                    arr_164 [i_0] = ((((((min(1, -1010703915))))) < (((var_4 ? var_3 : var_7)))));
                }
                /* vectorizable */
                for (int i_43 = 0; i_43 < 24;i_43 += 1)
                {
                    var_56 = ((var_4 ? var_0 : var_9));
                    var_57 = ((var_1 ? ((var_2 ? var_5 : var_8)) : ((var_6 ? var_7 : var_3))));
                }
                var_58 ^= (((((var_3 ? (var_7 % var_7) : ((var_7 ? var_7 : var_9))))) ? var_2 : ((((var_1 ? var_5 : var_5)) & var_3))));

                /* vectorizable */
                for (int i_44 = 2; i_44 < 23;i_44 += 1)
                {
                    arr_170 [i_37] [i_37] [i_37] [i_0] [i_0] [i_37] = var_9;
                    arr_171 [i_0] [i_37] [i_37] [2] = var_6;
                }
                for (int i_45 = 0; i_45 < 24;i_45 += 1)
                {
                    var_59 = (((var_9 + var_3) ? (((((var_3 ? -1766227916 : -711335343))) ? var_10 : var_7)) : (min((var_5 > var_6), var_8))));
                    var_60 = (max(var_60, (((((((var_2 < var_2) ^ ((var_4 ? var_9 : var_0))))) ? var_1 : (((((var_9 ? var_8 : var_10))) ? var_7 : var_9)))))));
                    arr_175 [i_0] = ((((((13007 < 1) ? ((var_5 ? var_10 : var_3)) : var_5))) >= (var_2 * var_9)));
                }
            }
            var_61 = ((((((((var_1 ? var_4 : var_9))) ? var_6 : ((1937270971 ? 0 : (-9223372036854775807 - 1)))))) ? (min(((min(var_0, 63))), (var_4 + var_5))) : ((var_5 ? ((var_1 ? var_0 : var_2)) : (var_0 + var_4)))));
        }
    }
    #pragma endscop
}
