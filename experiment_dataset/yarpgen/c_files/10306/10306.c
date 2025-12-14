/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 &= var_3;
    var_20 = (max(((var_6 ? var_10 : (var_12 && var_14))), var_14));
    var_21 = (((min(2199019061248, (-9223372036854775807 - 1))) < (((-29844 ^ ((max(-32767, var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_0] [i_0] = (min((((var_5 || (var_12 + var_13)))), var_7));
                arr_7 [i_0] [i_0] = min((~var_0), (2 - -1));
                arr_8 [i_0] = min(var_0, var_10);

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_3] [i_2] [i_3] [i_1] [i_3] = var_11;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-var_5 | (((var_9 & var_7) ? var_12 : var_8))));
                                arr_19 [4] [4] [i_3] = var_12;
                                arr_20 [i_0] [11] [16] [i_3] [i_3] [i_2] [i_2] = var_6;
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] |= var_10;
                            }
                        }
                    }
                    arr_22 [i_0] = var_15;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_27 [i_0] [i_6] [i_1 - 1] [i_6] [i_0] = var_10;
                                arr_28 [i_6] [i_6] [i_0] = max(var_12, (var_17 & var_10));
                                arr_29 [i_0] [i_6] [i_0] = (288230376151711744 ^ var_5);
                                arr_30 [i_0] [i_0] [18] [i_0] [i_5] [10] [i_6] = var_17;
                            }
                        }
                    }
                    arr_31 [9] [i_1] [13] = (var_1 ? var_14 : ((-288230376151711745 ? -5 : -21276785)));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_35 [i_1 - 2] [i_2] [i_1 - 2] [i_0] = var_9;
                        arr_36 [i_1] &= var_0;
                        arr_37 [i_0] [i_0] [i_1] [i_0] [9] [17] &= -var_6;
                        arr_38 [i_0] [i_1] [i_2] [i_7] = var_2;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_42 [i_0] [i_0] [i_2] [i_2] [i_8] [i_8] = (var_11 * var_3);

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_47 [i_0] [i_8] [i_0] = var_16;
                            arr_48 [i_0] [i_0] [i_0] [18] [i_0] [6] [i_0] &= ((var_9 ? (var_1 / var_17) : var_11));
                            arr_49 [i_0] [i_1] [i_8] [i_1] [i_9] = (var_5 > var_3);
                            arr_50 [i_0] [1] [i_2] [i_8] [i_2] = ((var_11 ? var_14 : var_11));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_54 [i_0] [i_2] [i_1] [i_2] [i_8] [i_8] = var_5;
                            arr_55 [i_8] [i_2] [i_8] = (var_17 + var_1);
                            arr_56 [6] [i_10] [i_8] [i_8] &= ((var_3 ? var_16 : var_5));
                            arr_57 [14] [i_2] [14] [14] [i_2] &= ((var_14 <= ((var_12 ? var_1 : var_0))));
                        }
                        arr_58 [i_2] = var_10;
                        arr_59 [i_0] [i_8] [i_2] [i_8] = ((var_17 ? var_1 : var_5));

                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            arr_64 [i_0] [i_8] [i_2] [i_2] [i_11 - 1] = ((var_11 || (var_2 > var_5)));
                            arr_65 [i_0] [i_0] [i_8] [i_0] [i_8] [i_8] = (-var_1 & var_15);
                        }
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            arr_72 [i_12] [i_1 - 1] [2] [i_12] [i_13] = (var_5 / var_5);
                            arr_73 [i_0] [i_2] [i_2] [0] [0] [i_0] = (~(~288230376151711744));
                            arr_74 [i_1] [i_1] = var_1;
                        }
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            arr_77 [i_1] [i_1 + 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1] = ((((min(var_13, var_11))) ? (((var_12 ? (~var_13) : ((var_6 ? var_14 : var_17))))) : ((~(((-2147483647 - 1) ? 4655794950070344942 : 288230376151711730))))));
                            arr_78 [i_12] [i_12] [i_12] [i_12] [6] = (((var_8 + 9223372036854775807) >> (var_17 + 29443)));
                            arr_79 [i_0] [15] [i_2] [i_12] [i_14] = (var_3 ? var_11 : var_6);
                            arr_80 [i_14 - 1] [i_12] [i_12] [i_0] [i_12] [i_0] = ((((-(!1))) != ((max(var_2, var_14)))));
                            arr_81 [i_0] [i_0] [i_0] [i_12] &= ((!var_9) ^ -var_4);
                        }
                        for (int i_15 = 2; i_15 < 16;i_15 += 1)
                        {
                            arr_85 [i_0] [i_0] [i_0] [i_2] [i_12] [10] = ((var_13 ? var_0 : (((((var_14 ? var_7 : var_13))) ? var_6 : var_3))));
                            arr_86 [i_0] [i_0] [i_2] [i_12] [i_15] = var_17;
                        }
                        arr_87 [i_0] [i_2] [14] = (((((var_13 ? (var_3 == var_8) : var_8))) || var_5));
                        arr_88 [i_0] [i_12] = var_12;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                        arr_93 [5] [i_1] [3] [9] &= var_4;
                    }
                }
                for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                {
                    arr_97 [i_0] = -var_13;
                    arr_98 [i_17] [i_0] [i_1] [i_0] = ((((((((var_6 ? var_16 : var_11))) && (((var_9 ? var_6 : var_8)))))) & var_15));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 17;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            {
                                arr_109 [i_0] [i_1] [i_19] = var_3;
                                arr_110 [i_0] [i_1 + 1] [i_18] [i_19] [i_19] [12] = var_4;
                                arr_111 [i_0] [i_18] [i_18] [i_18] [i_0] = (var_15 == var_9);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 3; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 16;i_22 += 1)
                        {
                            {
                                arr_116 [i_0] [i_0] [i_18] [i_21] [i_21] [i_22] = (~var_2);
                                arr_117 [i_18] [i_1 - 1] = (((((var_13 ? var_8 : var_5))) ? var_4 : ((var_8 ? var_14 : var_0))));
                                arr_118 [i_0] [i_0] [i_1] [i_1] = -var_16;
                                arr_119 [i_1] [i_1] [12] [i_18] = (((-5847 != 32749) <= var_4));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        {
                            arr_124 [i_24] [i_0] [i_0] [i_0] = max(var_8, var_17);
                            arr_125 [i_23] [i_1] = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
