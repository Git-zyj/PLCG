/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (arr_0 [11] [9]);
        arr_4 [i_0 - 1] = (arr_3 [i_0]);
        var_15 += (arr_3 [13]);
        var_16 = arr_3 [i_0];
    }

    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_5 [i_2])));
                                var_18 = (arr_12 [i_1] [1] [i_1] [i_2] [i_1]);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_19 *= (arr_9 [i_6] [i_6]);
                        var_20 = 27179;
                        var_21 = (max(var_21, (arr_7 [i_1] [i_2])));
                        var_22 = (arr_1 [i_1]);

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_19 [3] [8] [i_3] [i_1] [3] [i_1] = (arr_18 [i_1] [i_2 - 2] [i_2 - 2] [i_6] [i_7]);
                            var_23 ^= arr_15 [i_7] [i_6] [i_2] [i_2];
                            var_24 = (min(var_24, 103));
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            arr_22 [i_1] = 32767;
                            var_25 ^= (arr_0 [i_1] [i_6]);
                        }
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_26 = (max(var_26, (arr_1 [i_1])));
                            arr_25 [i_6] &= (arr_17 [i_2]);
                            var_27 = arr_24 [i_1] [i_2] [i_1] [i_6] [i_9];
                            var_28 = (arr_14 [i_6] [i_6] [i_6] [i_1] [i_6] [i_6]);
                            arr_26 [i_9] [i_1] [i_3] [14] [i_3] [i_1] [i_1] = (arr_23 [i_1] [9] [i_1] [i_6] [10]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_29 = (arr_24 [i_1 - 1] [i_2 - 2] [i_3] [i_10] [i_1]);
                        var_30 ^= (arr_12 [i_10] [0] [i_3] [i_10] [i_10]);
                        arr_29 [i_1] [i_2] = (arr_17 [i_1]);
                    }

                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        var_31 = (arr_23 [i_2] [1] [1] [4] [i_2 - 2]);
                        var_32 = (max(var_32, (arr_31 [i_1] [i_1] [i_2 + 1] [i_3] [i_11])));
                        var_33 = -27179;
                        var_34 = (arr_8 [9]);
                        arr_32 [i_1] [i_2] [i_1] [i_1] = (arr_31 [i_1] [i_2 - 2] [i_1] [i_3] [i_11]);
                    }
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        var_35 = (arr_14 [4] [3] [i_3] [i_1] [i_2] [i_1]);
                        arr_35 [i_1] [i_2] [i_3] [i_12 + 1] |= (arr_31 [12] [i_2 + 1] [i_3] [i_3] [12]);
                        var_36 &= (arr_9 [i_2] [i_2]);
                    }
                    var_37 = (arr_31 [i_3] [i_2] [i_1] [i_2] [i_1]);
                }
            }
        }
        var_38 ^= arr_2 [i_1] [i_1 + 2];
        var_39 = (min(var_39, (arr_2 [i_1] [i_1 - 1])));
    }
    var_40 = (max(var_40, var_7));
    var_41 = var_0;
    #pragma endscop
}
