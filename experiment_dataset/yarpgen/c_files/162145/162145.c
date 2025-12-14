/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = var_7;
                    arr_7 [i_2] [i_1] [i_0] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 ^= var_5;
                                var_19 = (min(var_19, var_8));
                                var_20 = (arr_9 [i_3] [i_3 - 3] [i_1] [i_4 - 2] [i_4]);
                                var_21 = (max(var_21, (arr_4 [i_1] [i_4])));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [i_1] = (arr_11 [i_5 - 1] [i_1] [i_2] [i_1] [i_5] [i_0] [i_0]);
                        arr_16 [i_1] [i_1] [i_2] [i_5 + 1] [3] = var_2;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_22 *= var_6;
                            var_23 &= 8938952164451191511;
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_24 = (arr_2 [i_8 - 1] [i_8 - 1]);
                            var_25 = var_4;
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_26 -= var_7;
                            var_27 *= var_3;
                            arr_26 [i_1] [i_1] [i_9] = (arr_9 [i_1] [i_1] [i_1] [i_1] [i_9]);
                            var_28 = (arr_5 [i_0] [i_0]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_29 = var_2;
                        var_30 = (max(var_30, (arr_25 [i_2] [i_0] [i_2] [i_0] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            arr_37 [i_0] [i_11] [14] &= var_2;
                            arr_38 [7] [i_11] [i_1] [i_1] [i_0] = var_7;
                            var_31 ^= var_7;
                            var_32 &= var_7;
                        }
                        arr_39 [10] [i_1] [i_2] [i_1] = var_0;

                        for (int i_13 = 2; i_13 < 20;i_13 += 1)
                        {
                            var_33 = var_15;
                            var_34 -= var_15;
                            var_35 -= (arr_8 [i_0] [i_2] [i_0] [i_13 + 1]);
                            var_36 ^= var_8;
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_37 = var_10;
                            arr_46 [i_0] [i_1] [i_2] [i_0] [i_14] |= arr_13 [20] [i_1] [i_1] [i_2] [i_11] [i_14];
                            var_38 |= arr_20 [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_39 ^= arr_2 [i_0] [i_1];
                        }
                    }
                    var_40 -= var_7;
                }
            }
        }
    }
    var_41 = (max(var_41, var_1));
    var_42 = (min(var_42, var_8));
    #pragma endscop
}
