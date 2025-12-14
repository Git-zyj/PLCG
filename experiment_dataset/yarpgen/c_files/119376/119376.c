/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (max(var_5, var_2));
                    var_10 = (min(((var_1 ? var_1 : var_5)), ((((-407928937497706711 ? 407928937497706711 : -407928937497706711))))));
                    arr_9 [i_2] [i_2] [i_2] = ((max(var_7, var_7)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_23 [i_3] [i_5] = (min(((var_3 ? var_1 : var_6)), (((((var_0 ? var_7 : var_0))) ? var_9 : (min(var_7, var_7))))));
                                var_11 = ((((min(407928937497706710, 0))) ? 21589 : (~13972643925438708097)));
                            }
                        }
                    }
                    var_12 = (max(var_12, (((((((((var_4 ? var_2 : var_2))) ? (((var_0 ? var_5 : var_5))) : ((var_2 ? var_8 : var_2))))) ? ((~((var_6 ? var_2 : var_9)))) : (((-((var_2 ? var_0 : var_5))))))))));
                    var_13 = (((((var_9 ? var_4 : var_8))) ? ((var_0 ? var_4 : var_5)) : var_3));
                    var_14 = var_3;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    var_15 = (((((var_9 ? ((var_8 ? var_2 : var_9)) : var_0))) ? (((var_3 ? var_7 : var_6))) : (((var_4 ? var_5 : var_4)))));
                    var_16 = var_9;
                }
            }
        }
        arr_30 [i_0 - 1] [i_0] = var_9;
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_33 [i_9] = (((((var_6 ? var_6 : var_1))) ? var_9 : ((var_1 ? var_8 : var_4))));

        for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_11 = 4; i_11 < 21;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_44 [i_9] [i_10 + 1] [i_10] [i_11] [i_11] = ((var_9 ? var_7 : var_9));
                    var_17 = ((var_7 ? var_8 : var_2));
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    var_18 = ((-var_5 ? var_7 : var_4));
                    arr_49 [i_13] [i_9] [i_9] [i_9] = -var_9;
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_19 *= var_2;
                    var_20 = var_6;
                    arr_54 [i_9] [i_14] [i_11 + 1] [i_10 + 2] [i_9] [i_9] = ((var_2 ? var_0 : var_4));
                    var_21 = ((var_5 ? var_6 : var_1));
                    arr_55 [i_9] [i_9] [i_11] [i_14] = var_5;
                }
                var_22 = (((((var_2 ? var_3 : var_3))) ? var_8 : (((-391212150 ? -1768 : 1767)))));
                var_23 -= ((!(((var_2 ? var_2 : var_8)))));
                var_24 = var_0;
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    {
                        var_25 = (((~var_6) ? var_3 : var_0));

                        for (int i_17 = 3; i_17 < 23;i_17 += 1)
                        {
                            var_26 = (max(var_26, (((((var_9 ? var_1 : var_8)))))));
                            var_27 = (max(var_27, (((var_0 ? ((var_8 ? var_9 : var_3)) : (((max(var_3, var_0)))))))));
                        }
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            var_28 = ((!((((((var_9 ? var_2 : var_5))) ? ((var_1 ? var_2 : var_1)) : var_0)))));
                            var_29 = (((((var_8 ? var_0 : var_7))) ? ((max(var_1, (((var_1 ? var_6 : var_6)))))) : (((((var_1 ? var_3 : var_6))) ? (((var_3 ? var_4 : var_0))) : ((var_6 ? var_9 : var_6))))));
                            arr_65 [2] [i_10 - 1] [i_9] [i_16] [2] = ((((((!var_2) ? (!var_6) : var_5))) ? ((var_0 ? var_4 : var_9)) : var_8));
                            arr_66 [i_9] [5] [i_9] [i_16] [i_18] = (((((var_4 ? var_3 : var_6))) ? (!var_9) : ((var_4 ? var_5 : var_5))));
                            arr_67 [i_9] [i_9] [i_15] [20] [15] = ((((((var_4 ? var_7 : var_6)))) ? (+-18446744073709551615) : (((((var_9 ? var_4 : var_4))) ? var_0 : var_1))));
                        }
                    }
                }
            }
        }
        for (int i_19 = 1; i_19 < 23;i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 23;i_21 += 1)
                {
                    {
                        arr_77 [i_9] [i_9] [i_9] [i_20] [i_20] [i_9] = (((var_5 ? var_5 : ((var_5 ? var_1 : var_3)))));
                        var_30 = (min(var_30, ((min(var_1, var_9)))));
                        var_31 = ((var_7 ? ((var_3 ? var_3 : var_7)) : ((var_7 ? var_8 : var_1))));
                    }
                }
            }
            arr_78 [i_9] = ((((min(var_9, ((min(var_3, var_4)))))) ? var_9 : (((~((-66 ? -1768 : -1971)))))));
        }
    }

    /* vectorizable */
    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        var_32 = ((var_7 ? var_3 : var_4));
        arr_81 [i_22] [i_22] = var_4;
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 14;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                {
                    arr_86 [14] [i_23] [14] [i_22] |= ((var_6 ? ((var_4 ? var_1 : var_4)) : var_7));
                    arr_87 [i_22] [i_22] = ((var_4 ? var_5 : var_8));
                }
            }
        }
    }
    var_33 = (min(var_5, ((~((var_4 ? var_1 : var_3))))));
    #pragma endscop
}
