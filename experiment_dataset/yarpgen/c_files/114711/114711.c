/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min(var_9, (((((var_9 ? var_9 : var_3))) ? (((var_9 ? var_2 : var_3))) : ((var_8 ? var_6 : var_2)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 ^= var_5;
        arr_3 [i_0] = (((((var_8 ? var_2 : var_1))) ? ((var_8 ? var_1 : var_3)) : (((var_4 ? var_0 : var_1)))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_12 = (((((var_4 ? var_5 : var_7))) ? var_9 : (((((var_9 ? var_8 : var_1))) ? ((var_5 ? var_7 : var_7)) : var_1))));
        var_13 &= var_6;
        var_14 = (min(var_1, var_2));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = var_1;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_4] [15] [i_2] [i_5] = var_6;
                        arr_17 [i_4] [12] = var_8;
                        var_15 = (var_5 ? var_1 : ((((max(var_6, var_8))) ? ((var_2 ? var_8 : var_3)) : var_1)));
                        var_16 += ((var_9 ? (((((var_8 ? var_7 : var_7))) ? (((var_0 ? var_9 : var_0))) : ((var_2 ? var_0 : var_5)))) : (((((max(68719476735, -68719476742))) ? var_8 : var_0)))));
                        var_17 = (min(var_4, (((((var_7 ? var_7 : var_8))) ? var_3 : ((var_3 ? var_5 : var_6))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            arr_21 [i_2] [i_2] = (((((var_1 ? var_9 : var_2))) ? (((var_1 ? var_9 : var_2))) : ((var_5 ? var_6 : var_5))));
            var_18 = (((((var_0 ? var_1 : var_3))) ? ((var_9 ? var_6 : var_7)) : var_4));
            arr_22 [i_2] [i_2] [i_2] = var_9;
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((((((max(var_9, var_2))) ? var_2 : var_8))) ? var_9 : var_9)))));
                            var_20 = var_8;
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_21 = var_2;
                                var_22 = ((var_2 ? ((var_3 ? var_4 : var_1)) : var_9));
                                arr_41 [i_7] [5] [i_11] [i_12] [i_7] = var_3;
                            }
                        }
                    }
                    arr_42 [i_7] [i_8] [i_11] [i_7 - 2] |= var_3;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_23 = (((((var_5 ? var_0 : var_0))) ? (((var_1 ? var_0 : var_7))) : ((var_2 ? var_3 : var_2))));
                                arr_50 [i_7] [i_7] [i_11] [7] [i_11] [i_15] = ((var_0 ? ((var_6 ? var_7 : var_1)) : var_4));
                                arr_51 [i_7] [i_8] [8] = ((var_9 ? ((20 ? 68719476740 : var_6)) : 7507539849941822312));
                            }
                        }
                    }
                    var_24 = (((((var_5 ? var_0 : var_1))) ? var_6 : ((var_0 ? var_4 : var_6))));
                }
            }
        }
    }
    var_25 = (((((((var_7 ? var_3 : var_0))) ? ((max(var_4, var_9))) : ((var_0 ? var_2 : var_2))))) ? var_5 : (((((var_7 ? var_4 : var_1))) ? (max(var_5, var_6)) : var_5)));
    #pragma endscop
}
