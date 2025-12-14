/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((~((var_19 ? 7336 : ((var_11 ? var_16 : var_3))))));
    var_21 = (max(1290188291, 0));
    var_22 = (max(var_7, ((max(((var_19 ? var_10 : var_2)), (var_9 - var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = 1290188276;
                var_24 = ((((max(10920027957268937129, 19))) ? var_15 : var_11));
                arr_7 [i_1] [i_1 - 1] = ((((max((((arr_0 [i_0] [9]) * 10273420424008598999)), (~16060230559439156079)))) ? ((65535 * ((15658006133026254413 / (arr_4 [i_1] [i_1]))))) : var_15));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_11 [i_1] = (((((1968445446 ? 0 : 84))) ? (((((max(25, var_4)) == 61931)))) : ((var_19 * ((255 ? var_2 : 245))))));
                    var_25 = (max(var_25, 1));
                    var_26 = (+(((5698 ^ 19) ? var_13 : (((575334852396580864 ? var_9 : 244))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((((~var_1) ? (11 & var_2) : ((var_19 ? 3048891018 : var_3))))) ? ((~(((arr_13 [i_0] [i_3] [i_2] [i_1] [i_0]) ? 36028797018963967 : 8783539371895287457)))) : (((1 | 10) ? 59971 : (65526 & 9222938170109457670))))))));
                                var_28 = (max(var_28, var_15));
                            }
                        }
                    }
                    var_29 = (min(var_29, (((((((max(var_8, var_9)) | (((var_19 ? 285 : var_4)))))) & (-32743 & 9858779730449488368))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_25 [i_1] = -var_19;
                                arr_26 [i_0] [i_1] [i_6] [i_6] [2] &= ((-2690 ? 49336 : 3794497609));
                                var_30 = 35938;
                                var_31 &= var_4;
                            }
                        }
                    }
                    var_32 = (min(var_32, ((max((max(var_16, (arr_4 [i_0] [i_0]))), 1343230644)))));
                    var_33 = (min(var_33, (((max((arr_21 [i_0] [i_5] [i_0] [i_5]), (var_5 / var_0)))))));
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    arr_30 [i_1] [i_1] = ((var_9 ? var_18 : ((3863114320 ? 63069 : var_5))));
                    var_34 = var_6;
                    var_35 = var_15;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_36 = var_13;
                                var_37 = 3048891026;
                            }
                        }
                    }
                }
                arr_37 [i_0] [i_0] [i_0] &= ((-(((var_6 | var_0) ? 3048891020 : var_14))));
            }
        }
    }
    var_38 |= ((-var_7 ? 1 : 254));
    #pragma endscop
}
