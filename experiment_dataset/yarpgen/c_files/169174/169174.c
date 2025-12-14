/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_18 = arr_2 [i_0];
                    arr_10 [i_2] [i_1] [i_0] [i_0] = (arr_4 [1] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_2] [8] [i_4] = (arr_12 [i_0] [i_0] [i_3] [i_0] [i_0]);
                            arr_18 [i_0] [i_3] [i_1] [i_2] [i_3] [i_4] = (arr_11 [i_0] [i_4] [18] [i_2] [i_1] [i_0]);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = (arr_9 [i_2]);
                            arr_20 [i_0] [1] [i_2] [i_3] [i_3] [i_3] = (arr_16 [1]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_3] [i_0] [i_0] = (arr_13 [i_3] [i_3] [i_0]);
                            arr_24 [i_0] [8] [i_2] [i_0] [16] [i_3] [i_5] |= (arr_13 [i_0] [1] [i_0]);
                            var_19 = (max(var_19, (arr_15 [i_0] [i_0] [i_2] [2] [i_3 + 3] [23] [i_3 + 3])));
                        }
                        var_20 = (arr_0 [5]);
                        var_21 = (arr_6 [i_0] [i_2] [2]);
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_33 [i_1] [i_1] [i_1] [i_1] [i_6] = (arr_2 [i_7]);
                                arr_34 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = (arr_4 [10] [10]);
                                var_22 = (max(var_22, (arr_32 [i_0])));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_23 = (arr_38 [i_0] [7] [7] [7] [i_9]);
                        var_24 = (min(var_24, (arr_27 [i_0] [i_1] [i_1])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        var_25 = (arr_29 [i_0]);

                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            var_26 = (arr_29 [i_0]);
                            var_27 = (arr_28 [9] [i_1] [i_1] [i_1]);
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] [i_6] [i_1] [i_1] = (arr_36 [5]);
                            arr_48 [i_6] [i_6] [i_6] [i_6] = (arr_38 [1] [1] [1] [i_12] [i_6]);
                        }
                        arr_49 [8] [i_6] [i_6] [i_6] = (arr_28 [i_0] [i_1] [i_6] [15]);
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_6] = (arr_41 [i_10] [i_6]);
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {

                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            arr_57 [i_0] [i_6] [i_1] [i_6] [i_13] [i_14 - 1] = (arr_43 [17] [i_14] [i_6] [i_14] [i_14] [i_14] [i_14]);
                            arr_58 [1] [1] [i_6] [15] [i_6] [i_6] [i_6] = (arr_29 [i_0]);
                            var_28 = (arr_27 [i_6] [i_6] [i_13]);
                        }
                        var_29 += (arr_55 [6] [i_1] [i_13] [i_6] [i_13]);
                    }
                }
                arr_59 [i_0] [i_1] = (arr_8 [i_0] [i_1]);
            }
        }
    }
    var_30 |= var_15;
    #pragma endscop
}
