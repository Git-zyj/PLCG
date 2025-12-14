/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 += (arr_3 [i_0] [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0] [1] [i_1] [i_2] [5] = (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = (arr_4 [i_2]);
                        var_18 &= (arr_6 [i_2]);
                        arr_12 [1] [i_2] [i_1] [6] [i_0] = (arr_2 [i_0]);
                    }
                    var_19 = (min(var_19, (arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_2])));
                    var_20 = (min(var_20, (arr_4 [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_21 = (arr_7 [i_0] [i_1] [i_1 + 1] [i_4]);

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_22 = (arr_4 [i_5]);
                            arr_20 [i_4] [i_6] [i_5] [i_4] [i_1 + 1] [i_4] &= (arr_13 [i_0]);
                            var_23 *= (arr_4 [i_0]);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_7] [i_1] [i_4] [i_1] [i_7] [i_1] [i_1 + 1] = (arr_19 [i_0] [i_1] [i_4] [i_5] [i_7]);
                            var_24 = (arr_18 [9] [i_1] [i_4] [i_4] [9]);
                            arr_24 [i_7] = (arr_8 [i_0] [i_1]);
                        }
                        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1 + 1] [i_4] [i_0] [i_8] [i_8] |= 240;
                            var_25 = arr_22 [1] [1] [1] [1] [i_8];
                        }
                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_9] [i_0] [i_0] [i_0] [i_0] = (arr_16 [7] [i_1 - 1] [i_1 - 1] [7] [i_1 - 1] [i_1]);
                            var_26 = (min(var_26, (arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_9])));
                        }
                        var_27 *= (arr_5 [i_0] [1] [i_5]);
                        var_28 = (arr_22 [i_0] [i_0] [12] [3] [i_5]);
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_29 = (arr_30 [i_0] [i_1] [i_4] [i_1 - 1]);
                        arr_35 [12] [0] [i_4] [i_4] [i_0] [i_0] &= (arr_13 [i_4]);
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_30 = (arr_15 [i_0] [i_1] [i_11] [i_12] [i_12]);
                                var_31 |= (arr_5 [i_12] [i_1] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
