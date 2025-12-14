/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = arr_4 [3] [8];

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_0]);
                    var_14 = arr_5 [i_0];
                    arr_10 [i_0] [i_0] = (arr_4 [i_0] [i_1]);
                    var_15 = (arr_1 [i_1] [i_0]);
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_16 = arr_3 [i_0] [i_0] [3];

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 *= arr_6 [i_3] [i_4];
                        arr_16 [6] [i_0] = (arr_13 [11] [11] [11] [11]);
                        var_18 = (arr_3 [i_0] [i_0] [1]);
                        arr_17 [17] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_3] [i_4]);
                        var_19 = (arr_8 [i_4] [12] [6]);
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_20 = (min(var_20, (arr_18 [3] [1])));
                        arr_21 [i_0] [i_0] [18] [i_5] [i_5] [11] = (arr_11 [i_0] [i_0] [i_0] [8]);
                    }
                    arr_22 [i_0] [i_0] [i_3] = (arr_3 [i_3] [i_0] [15]);

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_21 = (arr_5 [i_0]);
                            var_22 &= (arr_1 [i_1] [i_6]);
                            var_23 = (arr_0 [14]);
                            var_24 = (arr_27 [i_0] [i_7] [i_7] [9] [i_7] [4] [i_7]);
                        }
                        var_25 ^= (arr_28 [i_6] [i_6] [12] [i_6] [i_6]);
                    }
                    arr_29 [8] [8] [i_3] [1] |= (arr_23 [i_1]);
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_39 [i_8] [i_0] [i_8] [14] [i_8] [i_0] [i_0] = (arr_24 [13] [i_0] [13] [13] [i_10] [10]);
                                var_26 += (arr_0 [i_10]);
                                var_27 ^= (arr_4 [i_0] [7]);
                            }
                        }
                    }
                    var_28 = (arr_11 [21] [i_0] [i_0] [21]);

                    for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_29 *= (arr_18 [i_0] [i_0]);
                        arr_42 [i_0] [i_0] [i_8] [i_8] [i_1] [14] = (arr_37 [i_0] [i_1]);
                        arr_43 [4] [i_8] [4] [i_8] [4] |= (arr_31 [i_0] [5] [5] [i_11]);
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_0] = (arr_44 [10] [16]);
                        arr_47 [i_0] = arr_28 [i_0] [i_8] [1] [10] [i_8];
                    }
                    arr_48 [i_0] [i_0] [i_0] [5] = (arr_41 [10] [10] [11] [19]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 4; i_14 < 20;i_14 += 1)
                    {
                        var_30 *= (arr_32 [i_0] [i_1] [i_1] [8] [8] [1]);
                        arr_56 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0] = (arr_28 [i_0] [7] [10] [9] [10]);
                        arr_57 [i_0] = (arr_50 [i_0]);
                        arr_58 [i_0] [i_0] [i_0] [i_0] = (arr_35 [i_0] [2] [i_0] [i_14] [i_14]);
                    }
                    var_31 = (arr_41 [4] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
