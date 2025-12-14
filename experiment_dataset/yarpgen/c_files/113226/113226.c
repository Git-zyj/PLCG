/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, var_10));
        var_17 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [3] [i_2] [i_3 + 2] [i_4] = (!var_7);
                                var_18 = (arr_9 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_0 - 1]);
                                var_19 ^= ((((max(((((arr_11 [i_2] [i_2]) ? (arr_11 [i_3] [i_2]) : var_2))), (arr_13 [i_0] [i_0 - 2] [i_3] [i_3] [i_3 - 1])))) ? (arr_6 [i_2] [i_3] [i_4]) : (((~(arr_7 [2] [i_2] [i_3 - 1] [i_4]))))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_2] = max((max((min(1910929556, 1)), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (arr_2 [i_0 - 1] [i_0 - 1]));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [6] [9] = ((((max((min((arr_5 [i_0] [i_2] [i_2]), var_1)), (arr_9 [i_0] [i_1] [i_2] [i_0])))) ? (max((arr_2 [i_0] [i_5]), (((arr_2 [i_5] [i_2]) ? (arr_7 [i_1] [i_2] [i_1] [i_0]) : (arr_13 [i_5] [i_1] [1] [i_5] [i_0]))))) : (arr_13 [i_5] [i_2] [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [i_0] [i_2] [i_2] = (arr_8 [i_0] [i_1] [i_0]);
                    }
                    var_20 -= (arr_11 [i_0] [i_1]);
                }
            }
        }
        arr_20 [i_0] |= (arr_0 [i_0] [i_0]);
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        arr_24 [i_6] = (((arr_21 [i_6 + 1] [i_6 + 2]) ? ((((min((arr_22 [i_6]), (arr_22 [i_6])))) ? (arr_23 [i_6 - 1]) : (((min(var_9, (arr_21 [i_6] [8]))))))) : (arr_23 [i_6])));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_7] [i_10] &= arr_31 [i_6 + 3] [i_6 + 2];
                            var_21 = (max(var_21, (arr_26 [i_6 - 1])));
                            arr_34 [i_7] [i_6] [i_8] [i_7] [i_6] = arr_29 [i_6 + 1];
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_6] [i_7] [i_7] [8] [6] [i_11] = (arr_29 [i_6 + 2]);
                            var_22 ^= (-(max(var_8, (arr_28 [i_6 + 3]))));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_23 &= ((-(arr_29 [i_8])));
                            var_24 *= (min((((arr_22 [i_6]) ? (arr_40 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_9] [i_9] [i_12]) : (arr_40 [i_12] [7] [i_8] [i_6 - 2] [i_6 + 2] [i_6 - 2]))), (arr_31 [i_8] [9])));
                            var_25 = (max(((max((arr_30 [i_6 + 4] [i_8] [i_12] [i_12]), (arr_36 [i_6 + 4] [i_6 + 1] [i_6 - 1])))), var_8));
                        }
                        var_26 = (arr_22 [i_9]);
                    }
                }
            }
            arr_41 [i_6] [1] [i_7] |= arr_23 [i_6];
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_27 *= arr_39 [i_13] [i_6] [i_13] [i_6] [i_6] [i_6];
            var_28 = (max((arr_27 [14] [i_13] [i_13]), (arr_40 [i_6] [i_6 + 2] [i_6] [i_13] [i_13] [i_6])));
        }
        arr_44 [11] = (max((min((max((arr_22 [13]), (arr_39 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 2]))), (arr_21 [i_6] [i_6 + 3]))), (min((arr_27 [i_6] [i_6] [i_6]), (max((arr_28 [i_6 + 2]), (arr_40 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])))))));
    }
    #pragma endscop
}
