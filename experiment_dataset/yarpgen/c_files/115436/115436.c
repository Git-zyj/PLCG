/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [6] [i_0] = var_17;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [7] [i_0] = ((((var_14 ? var_14 : var_6))) ? (min(var_4, var_4)) : var_14);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_3] [i_4] [1] [i_3] [1] = (((((var_3 ? var_17 : var_16))) ? var_17 : ((min(0, var_16)))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [1] = ((var_0 ? var_17 : var_12));
                            var_19 += ((var_0 ? (((var_3 ? var_8 : var_0))) : ((var_12 ? var_4 : var_1))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_5] = ((var_12 ? var_17 : var_13));
            var_20 *= var_3;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_21 = (var_7 ? var_6 : var_10);
                            var_22 = var_1;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_30 [12] [i_5] [i_9] [i_7] [i_7] [i_0] = ((var_15 ? var_10 : var_17));
                            var_23 = var_5;
                            arr_31 [i_7] [i_5] [4] = var_14;
                            var_24 = var_12;
                            arr_32 [i_6] [i_5] [i_6] [i_5] [i_6] |= ((var_10 ? var_6 : var_15));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] [i_7] [i_0] = var_16;
                            arr_36 [i_0] [i_7] [1] [i_6] [i_7] [i_10] = ((var_7 ? var_18 : var_5));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_25 ^= var_12;
                            arr_40 [i_0] [i_7] [i_7] [i_7] [i_11] = var_2;
                            var_26 += var_18;
                            arr_41 [i_0] [i_7] [i_6] [i_7] [i_11] [i_7] = ((var_16 ? var_1 : var_11));
                        }
                        var_27 = (min(var_27, var_11));
                        arr_42 [i_7] = var_12;
                        arr_43 [i_7] [1] [i_7] [i_7] [i_0] [i_0] = var_16;
                    }
                }
            }
            var_28 ^= var_1;
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            {
                arr_50 [i_12] [i_12] = ((((min(var_7, var_5))) ? (min(var_3, var_18)) : var_7));
                arr_51 [i_13] [i_13 - 1] = ((((min(var_13, var_6))) ? var_5 : var_7));
            }
        }
    }
    var_29 = var_12;
    var_30 = var_6;
    #pragma endscop
}
