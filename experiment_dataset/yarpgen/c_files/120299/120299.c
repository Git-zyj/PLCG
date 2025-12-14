/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 253;
        arr_4 [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_12 = (-8497 | var_2);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_13 = -var_7;
                    var_14 ^= (((((var_0 ? var_0 : 253))) ? (arr_13 [i_3] [i_2]) : ((-(arr_10 [i_1])))));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_15 = (!36143);
        arr_16 [i_4] = ((-8487 ? (((((8496 ? var_0 : 21))) ? var_4 : (((var_1 ? var_6 : (-2147483647 - 1)))))) : (max(var_9, 29317))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_19 [11] [6] = (max((arr_7 [i_4 - 1] [9]), ((0 % (arr_7 [i_4 - 2] [i_5])))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_16 = (((((arr_17 [i_4]) > var_5)) ? var_0 : var_0));
                var_17 = var_1;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_18 = (max(var_18, (((!((((arr_25 [i_7] [i_5]) ? var_2 : var_10))))))));
                arr_27 [i_7] [i_4] = ((var_8 ? (arr_5 [i_5] [i_5]) : -var_4));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_32 [16] [4] [i_8] [1] = (~0);
                    arr_33 [4] [i_5] [i_9] [i_9] = (!511);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_19 = (max((((((max((arr_18 [i_8] [i_5]), 0))) / var_8))), var_11));
                    arr_38 [i_4] = max((arr_9 [i_4 + 1] [i_4] [i_4 - 2]), -1);
                    arr_39 [i_4] [9] [i_4] [6] [14] [i_10] = (var_8 + 7);
                }
                var_20 = ((-(arr_20 [i_4 + 2] [i_8] [i_4 + 2] [i_8])));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_21 = ((-29302 ^ (arr_13 [i_4] [i_4])));
                            arr_49 [i_13] [i_13] [16] [i_5] [i_11] [i_5] [i_4] = ((var_3 ? (arr_5 [1] [i_13]) : 535));
                            arr_50 [i_4] [i_5] [i_11] [i_11] [i_5] = var_9;
                            arr_51 [i_5] [i_5] [i_5] [2] [3] [i_5] = ((~(arr_2 [i_4 - 2])));
                        }
                    }
                }
                var_22 = (((arr_7 [i_4 - 2] [i_5]) ? (arr_10 [i_11]) : var_10));
                arr_52 [i_5] [i_5] [i_5] [i_5] = var_0;
                arr_53 [i_4] [i_4] [i_4] [i_11] = (((!36153) || (((10 ? var_2 : (arr_29 [i_4] [i_5] [i_11] [i_11]))))));
            }
            arr_54 [i_4] = ((((((var_3 ? var_6 : var_6))) != (max(var_10, var_11)))));
        }
    }
    var_23 = ((var_3 >> (!1886000240078615218)));
    #pragma endscop
}
