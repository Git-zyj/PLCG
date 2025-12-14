/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((min(var_9, var_8))) ? (var_5 || var_6) : ((var_1 ? var_5 : var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (min(var_12, (((var_3 ? var_8 : var_1)))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, var_7));
                        arr_10 [i_2] = var_4;
                        arr_11 [4] [i_1] [4] [i_3] = ((var_5 >> (var_8 - 56182)));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_14 += 55276;
                var_15 = (var_6 <= var_6);
                var_16 = ((var_4 == (var_10 && var_4)));
                var_17 = var_7;
            }
            var_18 *= (var_5 ? var_4 : var_7);
            arr_14 [8] = (((var_9 != var_9) - 222));
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                var_19 = (max(var_19, (var_10 | var_5)));
                arr_20 [i_6] [1] [i_5] = ((var_2 ? var_3 : var_7));
            }
            var_20 = (max(var_20, (((var_5 ? var_6 : var_0)))));
        }
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            var_21 = var_2;
            arr_24 [20] [i_7] &= var_5;

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_22 *= var_5;
                var_23 = var_10;
                arr_27 [i_7] [i_7 + 1] = ((4140863735 ? 8128 : -23915));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_32 [i_8] [i_8] &= (var_0 * var_8);
                            arr_33 [i_10] [3] [i_7] [i_9] [0] [i_7] [i_10] = (var_5 >= var_2);
                            arr_34 [i_0] [i_7] [i_9] [i_9] = ((var_7 ? var_4 : var_2));
                            var_24 = ((var_10 ? var_2 : var_10));
                        }
                    }
                }
            }
            var_25 = var_6;
        }
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            arr_38 [i_0] [i_11] [i_0] = (((((var_6 ? var_7 : var_5))) ? var_4 : var_8));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_26 = ((var_9 / var_7) ? var_6 : var_1);
                            var_27 = var_2;
                            var_28 = (var_5 < ((var_9 ? var_5 : var_8)));
                            arr_48 [6] [i_12] [6] = var_1;
                            arr_49 [i_0] [i_11 - 2] [i_12] [i_13] [i_14] [i_12] = ((var_6 ? var_4 : var_10));
                        }
                    }
                }
            }
            arr_50 [i_0] [i_11] = var_5;
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    arr_56 [i_0] [i_0] [i_0] = var_1;
                    arr_57 [i_16] [i_16] [i_16] = (var_6 & var_5);
                    arr_58 [i_0] = ((var_3 ? (var_5 * var_1) : 6075135182581336509));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 18;i_18 += 1)
            {
                {
                    arr_66 [i_17] [i_17] [i_17] [i_17] = ((var_6 ? var_6 : var_1));
                    var_29 = (var_7 - var_4);
                }
            }
        }
    }
    var_30 = (max(var_30, ((((((((var_1 ? var_4 : var_3))) ? var_3 : var_3)) != ((var_9 ? var_2 : ((255 ? 9054877329381482822 : -799247509503815935)))))))));
    var_31 = (max(var_31, var_3));
    #pragma endscop
}
