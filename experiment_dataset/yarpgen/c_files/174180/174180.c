/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 -= ((max((0 | 16441), ((-21596 ? 21595 : 1)))) == ((max(((max(var_11, var_15))), (min(var_2, var_4))))));
                                arr_11 [i_0] [i_3] [i_2] [i_1] [i_0] = (~var_6);
                            }
                        }
                    }
                    var_21 = var_15;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = ((max(((var_16 ? var_10 : var_4), var_4))));
                    arr_16 [i_0] [i_5] [i_0] [i_0] = var_17;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_23 = (((((var_11 || var_16) || (1 || -1173283795))) || var_7));
                    var_24 = (min(var_24, ((max((max((~var_12), (min(var_9, var_5)))), var_10)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {

                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_25 = (max(-1, ((max(0, 21596)))));
                            var_26 *= (((var_3 && var_19) + (((31 | 0) ? ((var_7 ? var_1 : var_9)) : var_11))));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            arr_37 [i_0] [i_11] [i_10] [i_9] [i_0] = (min((((max(var_7, var_18)) * (var_9 * var_18))), (var_6 * var_16)));
                            var_27 -= ((var_19 ? (~28816) : (((var_1 || (var_8 ^ var_19))))));
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_28 = (max((((((var_0 ? var_7 : var_19))) ? ((max(var_15, var_1))) : (var_5 || var_0))), ((((max(var_12, var_4))) ? (max(var_9, var_13)) : var_7))));
                            var_29 = max(((var_1 ? (max(var_6, var_7)) : ((min(var_12, var_11))))), (max((min(var_18, var_5)), (!var_19))));
                            var_30 -= var_1;
                            arr_40 [i_0] [i_0] [i_10] [i_0] [i_10] [i_0] [i_9] = var_2;
                        }

                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            var_31 = (max(var_31, var_12));
                            var_32 = (max(var_32, var_18));
                            var_33 = (((var_15 | var_4) ? var_7 : (((var_14 + 2147483647) >> var_11))));
                            var_34 *= (var_13 - var_1);
                        }
                        arr_45 [i_0] [i_9] [i_10] [i_0] [i_11] [i_11] = var_12;
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_17 & var_9);
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_50 [i_16] [i_0] [i_10] [i_0] [i_0] [i_0] = (min(((max(28810, 31))), (1 / 2147483647)));
                        var_35 = (min((!var_19), (min((var_16 & var_14), ((var_16 ? var_19 : var_7))))));
                        arr_51 [i_0] [20] [i_0] [i_16] = (max((((199 / 1) + -var_17)), (((!((max(var_18, var_11))))))));
                    }
                    arr_52 [i_0] [i_0] = (199 >> (-28839 == -28839));

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        arr_57 [i_0] [i_0] [i_9] = var_11;
                        var_36 = ((((min(((var_1 >> (var_1 - 4651))), (var_1 != var_12)))) ? ((min(((min(var_4, var_15))), (min(var_9, var_2))))) : (min(((var_17 ? var_11 : var_13)), ((var_6 ? var_16 : var_19))))));
                        arr_58 [i_0] [i_10] [i_0] [i_0] = var_16;
                    }
                    var_37 *= (min((((var_12 | var_4) ? (var_8 * var_8) : var_5)), var_7));
                    arr_59 [i_0] [i_9] [i_0] = (((((var_12 / var_3) * (min(var_19, var_18)))) * (var_3 * var_9)));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                {
                    var_38 = (((((!(max(var_19, var_15))))) | (max(((max(var_8, var_4))), var_13))));
                    var_39 = (max((min(((min(var_1, var_3))), (var_6 / var_2))), -var_11));

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        arr_71 [i_21] [i_21] [i_21] [i_21] [i_18] [i_18] = var_9;
                        var_40 = (min(var_40, (((2147483647 << (((-780557351 + 780557370) - 19)))))));
                        arr_72 [i_21] [i_21] [i_21] [i_18] = var_0;
                        var_41 -= 1;
                    }
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        var_42 = (max(var_42, ((max(((((min(var_18, var_8)) > (max(var_13, var_8))))), var_5)))));

                        for (int i_23 = 2; i_23 < 19;i_23 += 1)
                        {
                            arr_80 [i_18] [i_19] [i_19] [i_23 + 3] = min(var_10, (max(var_9, ((var_9 ? var_5 : var_8)))));
                            var_43 = (max(var_43, var_6));
                            arr_81 [i_23 - 2] [i_22] [i_20 - 1] [i_18] [4] [i_18] = (max(((max(var_2, var_2))), 1));
                        }
                    }
                    for (int i_24 = 1; i_24 < 21;i_24 += 1)
                    {
                        var_44 -= (min((((!var_14) ? (var_6 & var_15) : (min(var_13, var_4)))), var_19));
                        arr_84 [16] [16] [i_24] = ((var_2 ? (((~var_7) | ((min(var_12, var_8))))) : ((~((var_0 << (var_7 + 5405)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 1; i_25 < 18;i_25 += 1)
                    {
                        for (int i_26 = 2; i_26 < 18;i_26 += 1)
                        {
                            {
                                var_45 = (min(((var_15 ? (var_5 ^ var_9) : (var_13 | var_0))), ((((max(255, 28838))) ? (max(var_10, var_13)) : ((max(var_16, var_15)))))));
                                arr_93 [i_18] [i_25] [i_20] [i_25 + 2] [i_26] = ((-((max((var_10 || var_3), (!var_16))))));
                            }
                        }
                    }
                    var_46 = var_13;
                }
            }
        }
        var_47 = (~var_5);
        arr_94 [i_18] [i_18] = var_2;
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 1;i_27 += 1)
    {
        arr_98 [i_27] = var_8;
        arr_99 [i_27] [i_27] = (((~var_6) & (~var_10)));
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 12;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 0;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 1;i_31 += 1)
                    {
                        {
                            arr_110 [i_30] [i_29] [i_28] = max((min(-21593, var_5)), (max((var_17 >> var_0), (var_15 != var_2))));
                            var_48 = (max(var_48, ((max(((~(~var_18))), ((~(~var_11))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 12;i_32 += 1)
                {
                    for (int i_33 = 1; i_33 < 10;i_33 += 1)
                    {
                        {
                            var_49 = (max(var_49, ((((min((min(var_6, var_12)), ((var_0 ? var_3 : var_1)))) + (min((max(var_6, var_3)), ((var_0 ? var_4 : var_6)))))))));
                            arr_116 [i_29] [i_29] = (max(1, 28839));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
