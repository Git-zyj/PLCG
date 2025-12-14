/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = ((~(var_10 | var_0)));
        var_12 = ((((((var_9 != ((max(var_3, var_2))))))) / (((var_9 ^ var_4) ? var_0 : var_2))));
    }
    var_13 = (min((90 != 94807844), var_0));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [4] [i_1] = (var_8 != var_3);
        arr_5 [6] [6] = ((-(~var_6)));
        arr_6 [i_1] = (var_1 - var_1);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_14 = ((-(-var_5 || 49)));

            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                arr_14 [i_3] [i_3] = (max((((~var_6) != (var_9 / var_1))), (4200159452 || 123)));
                arr_15 [i_3] [i_3] [i_3] = 1121393501;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_18 [i_2] [i_3] [i_5] [i_5] = ((-(var_6 != var_7)));
                arr_19 [i_3] [i_3] [i_5] = ((var_3 ? var_8 : var_9));
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_26 [i_7] [i_2] = (((max((!var_3), var_0))) ? (((!((max(var_0, var_3)))))) : ((-(var_8 / var_3))));
                arr_27 [i_2] [i_2] [i_2] [i_7] = ((((-var_5 ? var_3 : (var_9 - var_1))) * -var_2));
                var_15 = (max(((((var_10 ? var_10 : var_6)) + var_6)), var_2));
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_16 = (min(var_16, ((max(3984496145471668996, 3629366051397198892)))));
                var_17 = ((((((var_4 * var_3) < var_2))) * (~-1121393501)));
                arr_31 [i_2] = ((((max((~var_8), (var_6 & var_9)))) ? ((~(-127 - 1))) : (((~var_0) ? (~var_4) : ((min(var_8, var_8)))))));
                arr_32 [i_6] = (max(((min(((var_9 ? var_2 : var_4)), (max(var_7, var_8))))), ((var_8 - (min(var_7, var_10))))));
            }
            var_18 = (min(var_18, (~1623425112)));
            arr_33 [i_2] = (((((~var_10) || (~var_3))) ? (562949953421311 / var_6) : (((var_3 >> ((((var_5 ? var_5 : var_3)) + 261661547322758250)))))));

            for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
            {
                arr_36 [i_2] [6] [i_9 + 1] = (var_4 ^ var_5);

                for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_19 = var_6;
                    arr_39 [i_2] [i_2] = (max((var_4 ^ var_10), (((-(~var_2))))));
                    arr_40 [i_2] [i_6] [i_9] [i_2] = (max((((0 * 49) ? ((94807859 ? 1 : 4200159436)) : (var_3 - var_4))), (((var_10 ? var_9 : var_6)))));

                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        arr_44 [i_9] = (((((var_8 ? 65 : (~var_3)))) || (var_6 == var_8)));
                        arr_45 [20] [20] [i_9 + 1] [i_10] [20] = ((((((var_5 ? var_10 : var_9)) - (((var_2 ? var_5 : var_9))))) % ((max(1121393528, var_7)))));
                        var_20 = ((~(((var_9 || var_3) ? (min(13730291035661037010, -3)) : ((var_9 ? var_10 : var_3))))));
                    }
                }
                for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    var_21 = var_3;
                    arr_48 [i_2] [i_12] [i_6] [i_9] [i_9] = (94807844 == 3472252653);
                    arr_49 [i_12] [13] [13] [18] [i_12] = ((94807859 ? 65 : 0));
                }
                for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (((-(((~var_6) ? (~var_8) : ((var_5 ? var_4 : var_10)))))))));
                    arr_52 [i_13] [i_13] [i_6] = ((((min((var_1 || var_3), ((var_2 ? var_8 : var_10))))) ? var_6 : (((~var_10) % (var_6 != var_10)))));
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_59 [i_15] [i_14] [i_14] [i_2] [i_9] [i_14] [i_2] = var_8;
                            arr_60 [i_2] [i_14] [i_9 - 1] [i_6] [i_2] |= ((!((((var_5 == var_10) ? ((833028988 ? 13730291035661037010 : 56)) : (((max(var_9, var_8)))))))));
                            arr_61 [10] [i_14] [i_9] [i_14] [i_14] [i_2] = ((~((((max(var_4, var_7))) | (var_5 | var_0)))));
                        }
                    }
                }
                arr_62 [i_9] [i_6] [i_2] = var_0;
                arr_63 [i_2] [i_6] [i_9] [i_9] = (((1 && var_8) && (!4200159452)));
            }
            for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
            {
                var_23 = (((((var_0 >> (var_4 - 205)))) ? (var_0 == var_8) : -var_1));

                /* vectorizable */
                for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 1; i_18 < 18;i_18 += 1)
                    {
                        arr_72 [i_17] [i_6] [12] = ((var_10 * (((var_7 ? var_1 : var_2)))));
                        arr_73 [i_17] [i_17] = var_5;
                        arr_74 [i_17] [i_2] [i_6] [16] [i_17] [i_6] [i_18 + 1] = var_6;
                        var_24 = ((var_5 ? var_7 : var_7));
                    }
                    var_25 = (min(var_25, (~var_0)));
                    arr_75 [i_17] = -var_4;
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
                    {
                        arr_81 [i_20] [i_19] [i_16] [i_6] [i_20] = (var_8 / var_4);
                        arr_82 [i_20] [i_20] [i_6] = ((var_4 >> (var_9 - 47)));
                    }
                    for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
                    {
                        arr_85 [i_2] [i_2] [i_16 + 1] [i_19] [i_21] |= 2136;
                        arr_86 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((var_5 > var_6) ? (var_6 * var_1) : (var_0 ^ var_1)));
                    }
                    arr_87 [i_2] [i_6] [i_2] [6] = (1121393500 / 80);
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        {
                            arr_95 [i_22] [i_6] [i_22] [i_22] [i_22] [i_16] [i_23] = -var_1;
                            arr_96 [i_22] = (83 == 233);
                            var_26 = (((((71 ? (((min(0, 119)))) : 16813214725713829191))) ? (((max(var_1, var_6)) ^ (((var_8 ? var_3 : var_0))))) : (((~var_6) << (((var_1 | var_1) - 45811))))));
                            arr_97 [i_2] [i_22] [i_2] [i_2] [i_2] [i_2] = ((var_10 || (var_10 - var_5)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 19;i_25 += 1)
                    {
                        {
                            var_27 = (((((min(var_3, (~var_1))) + 2147483647)) >> ((((var_9 | var_5) || var_0)))));
                            arr_102 [i_2] [i_6] [i_6] [i_16] [i_24 + 1] [i_16] [i_16] = (max(var_3, -var_10));
                            var_28 = (((((var_10 / var_7) - (((min(var_3, var_1)))))) << (((!((max(var_10, var_2))))))));
                            var_29 = (((0 * var_4) != (((((var_2 << (var_9 - 38)))) ? var_7 : (var_1 * var_2)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 21;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 19;i_27 += 1)
                    {
                        {
                            arr_109 [i_2] = ((!((min(4200159451, ((var_0 ? var_7 : var_0)))))));
                            var_30 = min((((var_9 - (((min(var_1, var_3))))))), var_10);
                            var_31 ^= (max((max(1633529347995722409, 18)), (1 != 246)));
                        }
                    }
                }
            }
        }
        for (int i_28 = 0; i_28 < 21;i_28 += 1) /* same iter space */
        {
            arr_113 [i_28] [i_28] = (max(((var_4 << ((((80 ? 190 : 1633529347995722409)) - 172)))), ((var_4 ^ ((max(var_1, var_9)))))));

            for (int i_29 = 0; i_29 < 21;i_29 += 1)
            {
                var_32 = -var_6;
                var_33 = (max(var_33, var_10));
            }
            arr_117 [i_28] = ((var_7 + (var_1 - var_9)));
            arr_118 [i_2] [i_28] [i_2] = ((+((((!var_6) >= (var_8 - var_3))))));
        }
        arr_119 [i_2] = var_4;
        var_34 = (min(var_34, ((((min(var_8, var_6)) + ((((((var_5 + 9223372036854775807) >> (var_7 + 1270051456))) * var_2))))))));
    }
    for (int i_30 = 1; i_30 < 21;i_30 += 1)
    {
        arr_122 [i_30] = (((((!(((var_9 ? var_7 : var_4))))))) ^ ((var_6 ? var_1 : var_5)));
        var_35 -= (max(((max(-var_1, var_8))), (((((var_4 ? var_6 : var_9))) ? (((min(var_8, 0)))) : (max(var_1, var_0))))));
        arr_123 [i_30] = 2694805359;
    }
    /* vectorizable */
    for (int i_31 = 1; i_31 < 21;i_31 += 1)
    {
        arr_126 [7] [i_31] = (var_0 % var_9);
        arr_127 [i_31 + 1] = ((14720787452087626722 ? 14720787452087626716 : 175));
        arr_128 [i_31] = (46717 ? (0 * -68) : (var_4 % var_4));

        for (int i_32 = 2; i_32 < 21;i_32 += 1)
        {
            arr_132 [i_31 + 1] [i_31 + 1] = (var_8 + var_9);
            arr_133 [i_32] = ((var_3 ? var_0 : 118));
            var_36 = ((var_2 ? -16813214725713829201 : var_9));
            arr_134 [i_31] = (((var_7 & var_9) ? (var_8 / var_7) : (!var_2)));
            arr_135 [i_31] [i_32 + 1] = var_1;
        }

        for (int i_33 = 1; i_33 < 1;i_33 += 1)
        {
            arr_138 [i_33] [i_33] [i_33] = (~3725956621621924866);
            arr_139 [1] [i_33] [i_31] = (((-9223372036854775807 - 1) ? 873002600 : 118));
            arr_140 [18] |= ((-var_2 ? var_6 : (var_10 << var_2)));
        }
        for (int i_34 = 2; i_34 < 19;i_34 += 1)
        {
            arr_143 [i_31] = var_7;
            /* LoopNest 3 */
            for (int i_35 = 1; i_35 < 21;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 22;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 22;i_37 += 1)
                    {
                        {
                            arr_152 [i_31] [i_34] [i_35] [i_36] [i_37] = var_9;
                            var_37 = var_8;
                            var_38 = ((((var_8 ? var_0 : var_8)) - ((var_7 ? var_1 : var_0))));
                            var_39 = var_8;
                            arr_153 [4] [i_34] [i_35 - 1] [i_36] [i_37] = var_7;
                        }
                    }
                }
            }
        }
        for (int i_38 = 2; i_38 < 21;i_38 += 1)
        {

            for (int i_39 = 1; i_39 < 21;i_39 += 1)
            {
                arr_158 [i_39] [i_38] [i_39 + 1] = ((-var_8 ? (256 % 645014474) : (var_2 >> var_2)));
                arr_159 [i_31] [i_31] [i_38 - 1] [i_39] = ((var_5 != (~var_5)));

                for (int i_40 = 0; i_40 < 22;i_40 += 1) /* same iter space */
                {
                    arr_163 [i_39] [i_40] [i_39] [i_38] [i_38] [i_39] = (((var_6 != var_8) * (var_2 ^ var_2)));
                    var_40 = (((var_10 || var_8) ^ var_1));
                }
                for (int i_41 = 0; i_41 < 22;i_41 += 1) /* same iter space */
                {
                    arr_166 [i_39] [i_39 - 1] [i_38] [i_39] = (var_5 | var_10);
                    arr_167 [i_39] [i_38] [i_38] [19] = ((-932070143 ? ((var_10 ? var_0 : var_9)) : (var_1 != var_0)));
                    var_41 = (~var_2);
                    var_42 = (~var_0);
                }
            }
            for (int i_42 = 1; i_42 < 20;i_42 += 1)
            {
                arr_170 [i_42] [i_42] [i_31] [i_42] = (((var_1 / var_5) || (var_8 - var_1)));
                arr_171 [i_42] [i_38] [i_38 - 1] [i_42] = var_4;
            }
            for (int i_43 = 0; i_43 < 22;i_43 += 1)
            {
                arr_174 [i_38] [i_43] [i_38] = (((var_1 ? var_0 : var_9)));
                arr_175 [i_43] = ((~(var_8 % var_1)));
                arr_176 [i_43] [i_38 - 1] [i_43] = (!(~var_5));
                arr_177 [i_31] [i_43] [i_43] = ((var_9 ? ((var_6 ? var_2 : var_10)) : var_5));
                arr_178 [i_43] = (~var_10);
            }
            for (int i_44 = 1; i_44 < 21;i_44 += 1)
            {
                arr_182 [i_38] = (((var_2 % var_0) == (var_1 % var_6)));
                arr_183 [i_44] [i_38] [i_31] = ((var_10 ? var_8 : var_10));

                for (int i_45 = 2; i_45 < 21;i_45 += 1)
                {
                    arr_186 [i_31] [i_38] [i_44] = (var_9 * var_2);
                    arr_187 [4] [19] [i_38] [i_31] = (((var_1 ? var_7 : var_3)));
                }
                var_43 = (18819 || 2694805359);
            }
            arr_188 [i_38] = ((var_0 ? var_7 : (var_1 || var_0)));
            /* LoopNest 3 */
            for (int i_46 = 2; i_46 < 21;i_46 += 1)
            {
                for (int i_47 = 1; i_47 < 19;i_47 += 1)
                {
                    for (int i_48 = 2; i_48 < 21;i_48 += 1)
                    {
                        {
                            arr_196 [i_38] [i_46] = (((var_4 % var_7) - (var_6 % var_1)));
                            var_44 = ((var_10 ? var_5 : var_10));
                        }
                    }
                }
            }
            var_45 = ((var_2 ? var_8 : var_5));
            arr_197 [3] [i_38 - 1] [i_38 - 1] = ((((-8655282421914629565 ? var_5 : 1600161950)) | 1600161937));
        }
    }
    #pragma endscop
}
