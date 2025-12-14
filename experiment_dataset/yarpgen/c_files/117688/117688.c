/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [3] = (arr_2 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [1]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] = -54;
        var_19 = (arr_8 [i_1]);
        var_20 = (max(var_20, (-35 < 1)));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = ((-(max(var_5, (~-35)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_21 = (max(var_21, (max(((((min((arr_8 [i_3]), var_15))) ? var_12 : (arr_18 [i_2] [i_3] [10]))), ((min((arr_12 [i_2]), 45)))))));
                        arr_24 [i_2] [i_3] [i_5] = var_6;
                    }
                }
            }
        }
        var_22 = (arr_13 [i_2]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_23 |= (arr_18 [i_6] [i_6] [i_6]);
        arr_27 [16] = ((-(((arr_25 [i_6]) * var_14))));
        arr_28 [i_6] = ((!((((arr_18 [i_6] [i_6] [i_6]) / var_4)))));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_24 = (((arr_7 [i_7] [i_7]) ? (arr_7 [0] [i_7]) : (arr_7 [i_7] [i_7])));
        arr_32 [i_7] [10] = (arr_6 [i_7] [i_7]);
        arr_33 [i_7] = (((arr_29 [i_7] [i_7]) ? var_14 : ((-(arr_30 [i_7])))));

        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            arr_36 [i_8] [i_8] = 44;
            var_25 = (max(var_25, (arr_6 [i_8 + 3] [1])));
            arr_37 [i_8] [i_8] = var_17;
        }
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_26 += (((arr_42 [i_9 + 1] [i_9 + 1] [i_10]) | (arr_42 [i_7] [1] [i_10])));

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_27 = -65;
                            arr_48 [i_11] [i_11] [i_12] = (((arr_46 [i_12] [i_11] [i_11] [i_9]) * (arr_46 [i_7] [i_11] [i_11] [i_12])));
                        }
                        var_28 = (min(var_28, (arr_29 [i_9 - 1] [i_9 - 1])));

                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_29 = var_10;
                            var_30 = (((((65 ? 67 : 1))) ? (arr_42 [17] [i_10] [i_7]) : (arr_47 [i_10] [i_11] [i_9])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_56 [i_7] [i_7] [i_15] = var_12;
                        arr_57 [i_7] [i_9 + 2] [i_14] [i_15] [i_15] [i_7] = (((arr_7 [i_9 - 1] [i_14 - 2]) ^ var_6));
                    }
                }
            }
            var_31 = var_14;
            arr_58 [14] [4] = ((-(arr_7 [i_9 + 2] [i_9 + 2])));
        }
        arr_59 [i_7] = 79;
    }
    var_32 ^= ((var_11 ? (min(379356974, 51)) : var_2));
    #pragma endscop
}
