/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (((((((min(var_2, var_5))) * var_3))) ? var_0 : var_9));
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (var_6 <= var_1);
                        arr_10 [i_0] [i_0] = (((~var_4) >= var_4));
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_2] = var_6;
                    }
                }
            }
            arr_12 [12] [14] [i_0] = -var_3;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_0] [i_1] [i_0] = (~var_6);
                            arr_24 [0] [6] [0] [6] = var_7;
                            arr_25 [i_0] [i_1] [i_4] [i_0] [i_1] = (((var_3 + var_4) && var_2));
                            arr_26 [i_0] [i_0] [18] [i_5] [i_6] [i_1] = ((-(var_7 % var_0)));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_7] |= var_8;
            arr_30 [i_0] [i_0] = (~var_5);
            arr_31 [i_7] [i_7] [i_7] = ((((max(((max(var_5, var_2))), -var_6))) ? var_0 : var_2));
            arr_32 [i_0] [i_0] [i_0] = (((((var_0 ? var_2 : var_5))) | (!var_0)));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_42 [i_9] [i_9] = ((var_10 ? ((var_2 ? ((var_10 ? var_8 : var_11)) : var_10)) : ((var_2 ? (max(var_11, var_8)) : var_2))));
                        arr_43 [10] [i_8] [i_0] [i_10] [i_0] = var_11;
                        arr_44 [i_9] [i_0] [i_9] [i_0] [i_0] [i_0] = var_11;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_49 [i_0] [i_8] [i_8] [i_0] = ((var_1 ? ((((((var_7 ? var_10 : var_4))) ? (var_5 % var_4) : (var_8 - var_1)))) : var_2));
                        arr_50 [i_0] [i_8] [1] [i_12] = (((((var_5 ? ((var_4 << (var_8 - 202307365))) : ((max(var_5, var_4)))))) ? (((((var_11 ? var_10 : var_1))) ? var_11 : var_5)) : (var_5 + var_9)));
                        arr_51 [i_0] [20] [i_8] [i_8] [i_12] = var_8;
                    }
                }
            }
            arr_52 [1] [i_0] [i_8] = var_10;
            arr_53 [i_8] [i_0] [i_0] = var_7;
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_62 [2] [i_15] [i_14] [i_0] [i_0] [3] = var_1;
                    arr_63 [i_0] = var_7;
                    arr_64 [i_0] [i_0] = ((var_7 ? ((var_0 ? var_10 : var_9)) : (~var_5)));
                }
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    arr_67 [i_0] [i_0] = (~var_2);
                    arr_68 [i_0] [i_0] [i_0] [i_0] = var_3;
                    arr_69 [i_16] [i_14] [i_0] = (((var_9 ? var_4 : var_7)));

                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        arr_72 [i_0] [16] [i_14] [4] [i_0] = ((var_8 ? var_2 : ((var_9 ? var_2 : var_5))));
                        arr_73 [i_0] [i_0] [7] [i_0] [i_0] = var_2;
                        arr_74 [i_0] [i_0] = ((var_4 ? (var_8 ^ var_0) : var_3));
                        arr_75 [i_0] [i_14] [17] [i_0] = var_0;
                        arr_76 [i_0] [i_14] [i_16] [i_0] = var_10;
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                    {
                        arr_79 [i_13] [i_13] [i_14] [8] [i_0] [i_13] [22] = ((!(((var_1 ? var_5 : var_1)))));
                        arr_80 [i_16] = var_0;
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        arr_83 [i_0] [1] [i_0] [0] [i_0] [i_0] [1] = ((var_7 ? (~var_6) : ((var_9 ? var_0 : var_0))));
                        arr_84 [i_13] [i_16] [10] [i_13] [i_13] |= var_5;
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
                    {
                        arr_88 [i_0] [i_0] [4] [3] [i_20] [i_16] [i_13] = (!var_2);
                        arr_89 [i_0] [i_13] [i_0] [i_13] [i_13] [i_13] = (((var_1 + var_2) ? (var_5 - var_4) : var_3));
                        arr_90 [i_0] [i_13] = var_1;
                        arr_91 [i_20] |= (((var_9 ? var_0 : var_0)));
                    }
                }
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    arr_94 [i_0] [i_0] [i_0] [1] [15] [i_0] = var_4;
                    arr_95 [i_13] [i_13] [i_14] [i_21] = ((var_11 >> ((var_5 ? var_6 : var_4))));
                    arr_96 [i_0] [17] [i_0] [i_21] [i_21] [i_14] = ((var_0 ? var_6 : var_6));
                    arr_97 [5] [5] [i_0] [i_21] = (((var_3 + 2147483647) >> (var_1 - 369855837)));
                }
                arr_98 [i_0] [i_13] [i_0] = (var_2 % var_11);
                arr_99 [i_0] [i_0] = var_8;
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 22;i_23 += 1)
                {
                    {

                        for (int i_24 = 2; i_24 < 22;i_24 += 1)
                        {
                            arr_107 [i_0] [i_23] [21] [i_0] [i_0] [i_0] = (max(var_3, (~var_7)));
                            arr_108 [i_0] [i_24] [17] [i_22] [1] [i_0] [i_0] = (((var_7 | var_2) ? (((var_3 + 2147483647) << (var_8 * var_9))) : (((((var_2 ? var_9 : var_1))) ? ((min(var_5, var_9))) : var_7))));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            arr_111 [i_25] [i_13] [10] [i_13] [i_13] [i_0] = ((var_4 ? var_2 : var_0));
                            arr_112 [i_25] [i_0] [i_22] = var_1;
                        }
                        arr_113 [i_13] [i_13] [i_22] [i_0] [i_13] |= (var_6 ? var_4 : var_5);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_26 = 2; i_26 < 20;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    {
                        arr_118 [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] = (((var_0 + 2147483647) >> ((((-var_6 + ((max(var_7, var_11))))) - 63))));
                        arr_119 [i_0] = var_0;
                    }
                }
            }
            arr_120 [i_13] = ((min(var_9, var_1)));
        }
        arr_121 [8] [10] = var_11;
        arr_122 [i_0] [1] |= var_4;
        arr_123 [16] |= (max(((var_11 ? var_9 : var_7)), var_7));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 23;i_28 += 1) /* same iter space */
    {
        arr_126 [8] = (((((var_10 ? var_11 : var_6))) && var_6));
        /* LoopNest 2 */
        for (int i_29 = 2; i_29 < 22;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 23;i_30 += 1)
            {
                {

                    for (int i_31 = 0; i_31 < 23;i_31 += 1)
                    {
                        arr_135 [2] [i_30] [2] [i_30] [6] [i_30] = var_4;
                        arr_136 [i_29] [6] [i_30] [i_31] = var_1;
                    }
                    arr_137 [i_30] [i_29] [i_28] = (((var_5 ? var_6 : var_1)));
                }
            }
        }
        arr_138 [i_28] = ((((var_8 ? var_9 : var_8)) >> (!var_4)));
    }
    /* vectorizable */
    for (int i_32 = 0; i_32 < 23;i_32 += 1) /* same iter space */
    {

        for (int i_33 = 0; i_33 < 23;i_33 += 1)
        {
            /* LoopNest 2 */
            for (int i_34 = 3; i_34 < 22;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 23;i_35 += 1)
                {
                    {
                        arr_150 [19] [i_32] [i_34] = var_6;
                        arr_151 [3] [i_32] [i_32] [i_32] = var_8;
                        arr_152 [i_34] [i_32] [1] = ((var_2 ? var_10 : var_6));
                    }
                }
            }
            arr_153 [10] [8] = ((var_8 >= ((var_2 ? var_11 : var_7))));

            for (int i_36 = 0; i_36 < 23;i_36 += 1)
            {
                arr_158 [14] [i_33] [10] [i_32] = (~var_0);
                arr_159 [i_32] [i_36] = (var_2 != var_6);
            }
            for (int i_37 = 1; i_37 < 22;i_37 += 1)
            {
                arr_162 [i_32] = ((var_4 || (((var_8 ? var_1 : var_10)))));
                arr_163 [1] [1] = var_7;
            }
            for (int i_38 = 0; i_38 < 23;i_38 += 1)
            {
                arr_166 [i_32] = ((var_4 ? var_9 : var_3));
                arr_167 [i_32] [i_33] [i_32] = (var_3 || var_1);
            }
            /* LoopNest 3 */
            for (int i_39 = 1; i_39 < 21;i_39 += 1)
            {
                for (int i_40 = 1; i_40 < 20;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 23;i_41 += 1)
                    {
                        {
                            arr_176 [i_41] [i_32] [i_39] [i_32] [i_32] = var_8;
                            arr_177 [i_32] = ((var_0 ? var_9 : ((var_2 ? var_0 : var_4))));
                            arr_178 [20] [i_32] [6] [2] [10] [4] [20] = var_0;
                        }
                    }
                }
            }
        }
        for (int i_42 = 0; i_42 < 23;i_42 += 1)
        {
            arr_181 [19] [i_32] [21] = var_2;
            arr_182 [i_32] = var_4;
            /* LoopNest 2 */
            for (int i_43 = 0; i_43 < 23;i_43 += 1)
            {
                for (int i_44 = 0; i_44 < 23;i_44 += 1)
                {
                    {
                        arr_188 [i_32] [i_44] [i_43] [i_32] = (!var_5);
                        arr_189 [i_32] [21] [i_43] [i_32] = ((var_3 ? (var_8 > var_10) : ((var_3 ? var_5 : var_10))));
                        arr_190 [i_32] [i_42] [i_42] [i_44] [i_44] |= var_3;
                    }
                }
            }
            arr_191 [i_32] [22] [i_32] = ((var_3 ? var_5 : var_1));

            for (int i_45 = 2; i_45 < 22;i_45 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_46 = 0; i_46 < 23;i_46 += 1)
                {
                    for (int i_47 = 0; i_47 < 23;i_47 += 1)
                    {
                        {
                            arr_198 [i_32] [i_45] [i_42] [i_32] = (~var_2);
                            arr_199 [20] [i_46] [i_45] [i_42] [20] = (var_10 ^ var_3);
                            arr_200 [i_32] [3] [i_42] [i_32] = var_9;
                            arr_201 [i_32] [i_42] [1] [4] [8] [10] [i_32] |= ((var_8 ? var_1 : var_2));
                        }
                    }
                }
                arr_202 [i_32] [12] [i_32] [i_42] = var_1;
                /* LoopNest 2 */
                for (int i_48 = 1; i_48 < 22;i_48 += 1)
                {
                    for (int i_49 = 0; i_49 < 23;i_49 += 1)
                    {
                        {
                            arr_209 [i_49] [i_45] [8] [8] [i_32] [i_32] = ((var_10 ? var_9 : var_8));
                            arr_210 [1] [1] [i_32] [9] [i_32] [i_45] = var_3;
                        }
                    }
                }
                arr_211 [i_32] [i_32] = (var_5 + var_2);
                arr_212 [i_32] [i_32] [i_32] [i_42] = ((var_2 ? var_10 : (((var_0 ? var_8 : var_1)))));
            }
            for (int i_50 = 2; i_50 < 22;i_50 += 1) /* same iter space */
            {
                arr_216 [i_32] [i_50] [i_42] [i_32] = var_4;
                arr_217 [i_50] [i_32] [i_32] = var_7;
            }
            for (int i_51 = 2; i_51 < 22;i_51 += 1) /* same iter space */
            {
                arr_221 [i_32] = (((((var_3 ? var_5 : var_8))) ? var_4 : var_11));
                arr_222 [i_42] [i_32] [i_51] [i_32] = var_7;
            }
        }

        for (int i_52 = 0; i_52 < 23;i_52 += 1)
        {
            arr_225 [4] [4] |= ((var_6 ? var_7 : var_8));
            arr_226 [i_32] [i_32] [i_32] = var_1;

            for (int i_53 = 0; i_53 < 1;i_53 += 1)
            {
                arr_230 [i_32] = ((var_8 ? var_10 : var_10));
                /* LoopNest 2 */
                for (int i_54 = 2; i_54 < 21;i_54 += 1)
                {
                    for (int i_55 = 2; i_55 < 20;i_55 += 1)
                    {
                        {
                            arr_237 [i_32] [22] = (var_1 | var_8);
                            arr_238 [i_32] [i_52] [16] [i_53] [i_55] [10] = ((-var_8 ? ((var_4 ? var_5 : var_2)) : var_0));
                            arr_239 [i_32] [7] [i_32] = var_7;
                            arr_240 [i_32] = (((((var_3 ? var_8 : var_4))) ? var_9 : var_1));
                        }
                    }
                }
                arr_241 [i_32] = (((((var_1 ? var_6 : var_7))) ? ((var_5 ? var_3 : var_2)) : var_3));
            }
            for (int i_56 = 0; i_56 < 23;i_56 += 1)
            {
                arr_244 [i_32] [13] [i_52] [i_32] = ((var_4 ? var_9 : var_2));
                /* LoopNest 2 */
                for (int i_57 = 0; i_57 < 23;i_57 += 1)
                {
                    for (int i_58 = 0; i_58 < 23;i_58 += 1)
                    {
                        {
                            arr_251 [i_58] [i_58] [4] [18] [i_56] [i_58] [1] |= var_8;
                            arr_252 [16] [i_56] [i_32] |= var_0;
                            arr_253 [i_56] [i_32] = var_6;
                        }
                    }
                }
            }
            arr_254 [i_32] [22] = (var_4 ? (((var_2 ? var_2 : var_8))) : var_3);
        }
        for (int i_59 = 0; i_59 < 23;i_59 += 1)
        {
            arr_257 [i_32] [i_32] = ((var_9 ? var_10 : (((var_1 ? var_9 : var_9)))));
            /* LoopNest 2 */
            for (int i_60 = 0; i_60 < 23;i_60 += 1)
            {
                for (int i_61 = 0; i_61 < 23;i_61 += 1)
                {
                    {
                        arr_262 [12] [12] [i_60] [i_59] = var_7;
                        arr_263 [i_32] [i_59] [i_59] [i_61] |= (((((var_1 ? var_10 : var_4))) ? ((var_4 ? var_4 : var_2)) : var_1));
                    }
                }
            }
        }

        for (int i_62 = 0; i_62 < 23;i_62 += 1)
        {

            for (int i_63 = 0; i_63 < 23;i_63 += 1)
            {
                /* LoopNest 2 */
                for (int i_64 = 0; i_64 < 23;i_64 += 1)
                {
                    for (int i_65 = 0; i_65 < 23;i_65 += 1)
                    {
                        {
                            arr_279 [8] [1] [i_62] [1] [i_32] [i_65] = (var_3 * var_9);
                            arr_280 [i_32] [i_32] [i_63] [i_64] [i_65] = var_5;
                            arr_281 [i_32] [i_32] [i_63] [i_32] [i_32] = (var_4 ? var_4 : (var_5 - var_10));
                        }
                    }
                }
                arr_282 [i_63] [i_63] [i_63] [i_32] = var_0;
                /* LoopNest 2 */
                for (int i_66 = 0; i_66 < 23;i_66 += 1)
                {
                    for (int i_67 = 0; i_67 < 23;i_67 += 1)
                    {
                        {
                            arr_287 [i_32] [i_66] [i_63] [8] [i_32] = var_4;
                            arr_288 [i_67] [i_32] [i_63] = (var_3 ? var_9 : var_6);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_68 = 0; i_68 < 23;i_68 += 1)
                {
                    for (int i_69 = 0; i_69 < 23;i_69 += 1)
                    {
                        {
                            arr_293 [6] [i_62] [4] [i_32] [i_68] [i_62] = var_4;
                            arr_294 [19] [19] [i_32] [i_32] [i_32] = var_3;
                        }
                    }
                }
            }
            arr_295 [i_32] [i_32] [i_62] = ((-var_9 ? (((var_3 ? var_0 : var_9))) : var_8));
            arr_296 [i_32] = (var_5 * var_0);
            /* LoopNest 2 */
            for (int i_70 = 0; i_70 < 23;i_70 += 1)
            {
                for (int i_71 = 0; i_71 < 23;i_71 += 1)
                {
                    {
                        arr_303 [i_71] [17] [i_32] [i_62] [0] = ((var_6 << (((~var_0) - 90))));
                        arr_304 [i_70] [i_71] [i_32] [i_71] = var_4;
                        arr_305 [i_32] [i_32] [7] [10] [i_71] = (((((var_4 ? var_9 : var_9))) ? var_2 : (var_10 ^ var_8)));
                    }
                }
            }

            for (int i_72 = 0; i_72 < 23;i_72 += 1)
            {
                /* LoopNest 2 */
                for (int i_73 = 0; i_73 < 23;i_73 += 1)
                {
                    for (int i_74 = 0; i_74 < 1;i_74 += 1)
                    {
                        {
                            arr_316 [i_32] = var_3;
                            arr_317 [i_62] [i_32] [i_62] [7] [i_62] = (~var_7);
                            arr_318 [i_62] [2] [0] [0] [i_62] = var_0;
                            arr_319 [i_32] [i_62] [i_72] [i_72] [i_32] [i_73] [i_73] = var_6;
                        }
                    }
                }
                arr_320 [i_32] [18] [i_32] [i_32] = ((var_4 ? var_1 : ((var_4 ? var_7 : var_11))));
                arr_321 [i_72] [i_62] [i_32] |= var_0;
            }
        }
        /* LoopNest 2 */
        for (int i_75 = 0; i_75 < 23;i_75 += 1)
        {
            for (int i_76 = 0; i_76 < 23;i_76 += 1)
            {
                {
                    arr_326 [i_32] [i_76] [i_76] = ((var_0 ? ((var_11 ? var_5 : var_4)) : ((var_5 ? var_9 : var_4))));
                    arr_327 [i_32] [i_32] [i_32] = var_7;
                    arr_328 [i_76] = ((var_0 >> (var_1 - 369855811)));
                }
            }
        }
    }
    #pragma endscop
}
