/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_2));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_12 += (arr_1 [i_1]);
                            arr_13 [i_3] [14] [i_2] [11] [14] = (arr_3 [i_2] [8]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_13 = (max(var_13, (arr_6 [i_2] [i_1] [i_1] [i_3])));
                            var_14 = arr_3 [i_2] [i_3];
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_6] [i_0] [i_2] [i_0] [i_0] |= (arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [2] [i_6]);
                            arr_21 [7] [i_3] [7] [7] [i_6] = (arr_3 [7] [12]);
                            arr_22 [i_6] [i_3] [i_2] [i_3] [i_0] = (arr_8 [1] [14] [i_1] [i_1] [1] [1]);
                        }
                        arr_23 [i_3] [i_2] [i_3] [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_24 [i_3] [i_1] [i_1] = (arr_17 [i_0] [i_0] [i_0] [14] [14] [2] [i_3]);
                        arr_25 [i_3] [i_3] [10] [i_3] = (arr_11 [i_3] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_2] [i_0] &= (arr_16 [i_0] [i_0] [10] [i_0] [i_0] [i_7]);
                        arr_31 [i_7] = (arr_7 [i_0] [i_1] [i_2] [i_7]);
                        arr_32 [i_7] [i_7] [i_2] [i_7] = (arr_15 [i_0] [i_0] [7] [i_1] [i_2] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [7] [i_2] [i_8] [i_8] = (arr_6 [i_0] [i_1] [i_2] [9]);
                        var_15 = (arr_5 [i_0] [i_1] [i_2] [i_8]);
                        arr_36 [i_0] [i_0] [i_2] [i_8] [i_8] = (arr_3 [i_0] [i_2]);
                        var_16 = arr_5 [i_0] [i_0] [i_2] [i_8];

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_39 [1] [i_1] [i_2] [i_8] [i_0] &= (arr_5 [i_0] [i_0] [i_2] [i_8]);
                            arr_40 [i_8] = (arr_9 [10] [i_8] [i_2] [i_1] [i_0] [i_0]);
                            var_17 = (arr_11 [i_8] [i_8]);
                            arr_41 [i_8] [i_8] [i_8] [i_8] [i_1] [12] = (arr_17 [i_0] [i_1] [i_0] [i_8] [i_9] [i_1] [i_8]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_18 = (arr_9 [i_2] [i_10] [i_2] [i_2] [i_0] [i_0]);
                                var_19 = (arr_10 [i_0] [i_1] [i_0] [i_10] [i_11]);
                                var_20 = (arr_0 [i_0]);
                            }
                        }
                    }
                    var_21 = (arr_14 [i_0] [i_1] [1] [13] [i_0]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_22 = (arr_15 [i_0] [i_1] [i_0] [i_12] [i_2] [i_2]);
                                var_23 |= (arr_15 [i_0] [i_0] [i_0] [i_2] [i_12] [i_0]);
                                arr_51 [i_0] [i_1] [i_2] [i_1] [i_13] [i_13] [12] = (arr_18 [1] [i_1] [i_2] [i_2] [i_12] [i_12] [i_13]);
                            }
                        }
                    }
                    arr_52 [i_0] [4] [1] = (arr_16 [i_0] [14] [i_0] [i_0] [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
