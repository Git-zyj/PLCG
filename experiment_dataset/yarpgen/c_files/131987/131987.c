/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_20 = (arr_6 [i_0] [i_1 - 1] [8] [i_1]);
                            arr_12 [i_0] [i_0] [i_0] = (((var_6 + var_13) ? ((((arr_0 [i_0]) - (arr_5 [i_1] [i_0] [i_1])))) : ((var_4 ? (arr_10 [i_4] [i_0] [i_3] [i_2] [i_2] [i_0] [4]) : (arr_3 [i_0] [i_0])))));
                        }
                    }
                }
            }
            var_21 = (min(var_21, (arr_7 [2] [0])));
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            arr_15 [8] [i_0] = var_9;
            var_22 = (min(var_22, (arr_3 [i_0 + 1] [10])));
            var_23 = (min(var_23, (((((!(arr_3 [0] [6]))) ? (((arr_11 [i_0] [i_0] [2] [i_0 - 3] [i_0]) ? var_10 : (arr_7 [0] [0]))) : var_10)))));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_24 = (min(var_24, ((((arr_13 [i_6 - 1]) == (arr_13 [i_6]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((arr_24 [i_0 - 2] [i_0] [i_0 - 3] [i_9] [i_0 + 2]) ? ((((arr_18 [i_0]) ^ var_6))) : var_1)))));
                            arr_30 [i_0] = ((var_7 ? (arr_6 [i_0] [i_6] [i_6 - 1] [i_8]) : var_8));
                            arr_31 [i_0] [i_9] [i_6] [i_7] [i_6] [i_0] = (((arr_16 [i_0 - 3] [i_6 + 3] [6]) * ((-25 ? 63 : (arr_9 [i_0 - 1] [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_37 [13] [i_0] [i_11] = arr_24 [i_0 - 1] [i_10] [i_0 - 3] [i_0] [i_11];
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_26 = arr_21 [i_0 + 2] [i_0] [11];
                            var_27 = arr_21 [i_10] [i_0] [i_12];
                            arr_42 [2] [i_11] [i_11] [i_12] [8] &= var_15;
                        }
                    }
                }
                var_28 = (((arr_28 [i_0] [i_0]) & (arr_28 [i_0] [i_10])));
            }
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_29 = ((var_2 ? (arr_24 [i_0 - 2] [i_14 - 1] [i_15] [i_0] [i_15]) : (((!(arr_34 [i_0] [i_0] [i_0 + 1] [i_0]))))));
                        var_30 = var_4;
                    }
                }
            }
        }
        arr_48 [i_0] [i_0] = ((-((-(arr_6 [i_0] [i_0] [13] [i_0 + 2])))));
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        arr_51 [i_16] = (((var_12 ? 6323174928448764489 : var_7)));
        var_31 = ((min(121, (arr_50 [i_16] [i_16]))));
        var_32 = var_15;

        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_33 = ((((!(arr_53 [i_16]))) ? ((((((-(arr_53 [i_17])))) ? var_4 : var_17))) : ((-(arr_49 [i_16])))));
            var_34 = arr_50 [i_16] [13];
            /* LoopNest 3 */
            for (int i_18 = 3; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        {
                            arr_62 [i_16] [i_20] [i_16] [i_16] [i_16] = (((-((var_9 * (arr_52 [19] [i_17]))))));
                            var_35 = (min(var_35, (((~((((((arr_61 [i_16]) / (arr_50 [i_16] [i_16]))) < (arr_56 [i_18 - 3] [i_17])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
