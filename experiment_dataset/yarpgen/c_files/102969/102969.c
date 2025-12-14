/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_6);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 &= ((((((arr_2 [i_0]) ? -2442319516087530108 : (var_6 / 3423631463)))) ? (max(18446744073709551615, 10320553363626934329)) : 6307554165133816316));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] &= (((min(var_7, (((arr_5 [i_1] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_6 [i_0]))))) >= var_16));
            var_22 = (max(var_22, (((((min(8126190710082617287, 1862587249)) - (((var_6 ? var_4 : var_3)))))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_23 *= ((var_9 > (((var_18 > var_13) ? (1148417904979476480 ^ 2983387728) : (((max(var_16, var_3))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_16 [i_0 - 3] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] |= -var_19;
                            var_24 = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_22 [0] [i_1] [i_1] [12] [i_6] = (((((var_0 << (var_12 - 3436407157)))) >= (((-(~var_8))))));
                            var_25 = (((3423631463 < 0) ? (((-((min(var_10, var_6)))))) : (min((~var_15), (arr_13 [i_6] [11] [i_1] [i_1] [11])))));
                            arr_23 [i_2] [i_0] [i_5] = var_10;
                        }
                    }
                }
                var_26 = ((max(var_18, (max(var_15, var_12)))));
                arr_24 [i_2] [i_2] = ((!(((-50 | (~var_0))))));
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_27 -= (((~0) % ((((arr_6 [i_0]) ? var_12 : (arr_27 [i_7] [i_7] [i_7]))))));

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            arr_35 [i_9] = var_5;
                            var_28 = (min(var_28, var_1));
                            var_29 = (max(var_29, var_10));
                        }
                        var_30 = ((((max(var_7, (max(254, 16777216))))) ? (((~(~var_3)))) : var_11));
                    }
                }
            }
            var_31 = (max(var_31, (((-329783334955177925 ? ((((var_1 / var_18) < var_0))) : ((-var_8 ? (~-83) : var_7)))))));
        }
        var_32 = ((((!((min(255, 0))))) ? (!3293903559960726294) : 511));
    }
    for (int i_11 = 3; i_11 < 8;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    var_33 = var_16;
                    arr_44 [i_12 - 4] [i_13] [i_13] [i_11] = (((!(!255))));
                    arr_45 [7] [i_13] [i_12 + 2] [7] = var_12;
                }
            }
        }
        arr_46 [i_11 - 3] [i_11 - 3] = ((((max((max((arr_33 [i_11] [11] [12] [i_11 + 2] [i_11]), var_0)), (!16924)))) >= (!var_7)));
        var_34 = (min(var_34, ((max(((-var_19 ? var_4 : 18446744073692774399)), var_11)))));
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 19;i_15 += 1)
        {
            {
                var_35 = (252 ? 1638100562204516048 : 1);
                /* LoopNest 3 */
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            {
                                arr_61 [i_14] [i_14] [i_14 - 1] [i_14 + 2] [i_14 + 3] = (max(((10320553363626934306 ? 7 : -31262)), 1743833862));
                                var_36 = (var_3 / 16922);
                            }
                        }
                    }
                }
                var_37 = (min(var_37, ((min(var_16, var_12)))));
            }
        }
    }
    var_38 = (var_12 ^ var_11);
    #pragma endscop
}
