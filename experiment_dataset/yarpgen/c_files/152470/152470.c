/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 *= (arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_18 = (min(var_18, (arr_1 [i_1 - 1])));
                            var_19 = (arr_2 [i_4] [4]);
                            arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [6] [i_0] [i_0] &= (arr_8 [i_2 + 1] [i_2 + 2]);
                        }
                        arr_13 [i_1] [i_1] [4] [i_3] = (arr_2 [i_2] [i_3]);
                        arr_14 [i_1] [i_3] = (arr_5 [i_0 - 1] [i_1] [i_0 - 1] [i_3]);
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_20 = (arr_0 [i_0]);
                        var_21 ^= var_10;
                        var_22 = (arr_7 [1] [i_1 - 1] [1] [i_2] [1]);
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_2 + 3] = (arr_1 [i_0 - 1]);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1 - 1] [i_2] [i_1] [i_7] = (arr_11 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 + 4] [i_2 - 1] [i_2 + 1] [i_2 + 2]);
                            var_23 = var_8;
                            arr_23 [i_0 - 1] [i_1] [i_1] [i_6] [i_7] [i_6] [4] &= (arr_21 [i_1 - 1] [i_6] [i_7]);
                        }
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            var_24 = (arr_0 [1]);
                            var_25 ^= (arr_10 [i_0 - 1] [i_1 - 1] [i_2 + 4] [i_6] [i_8 + 1]);
                            arr_26 [i_1] [3] [3] [i_1] [i_1] = (arr_6 [i_1] [4]);
                            var_26 = (arr_17 [i_0 - 1] [i_0 - 1] [i_1]);
                            var_27 = (arr_8 [i_0 - 1] [i_1 - 1]);
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_28 = (arr_7 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]);
                            arr_29 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = var_3;
                            var_29 = (arr_16 [i_0 - 1] [i_1 - 1]);
                            var_30 = var_2;
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_33 [7] [7] [1] [1] [i_10] [i_1] [7] = (arr_3 [i_0 - 1]);
                            var_31 = var_11;
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_32 += arr_11 [i_11] [i_11] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] [i_0 - 1];
                            arr_38 [i_0] [i_0] [i_1] [i_6] [i_0] = (arr_34 [10] [i_1] [i_1] [i_6] [10] [4]);
                            var_33 -= (arr_34 [i_0] [i_1] [i_2] [i_2 + 4] [9] [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_34 = arr_35 [i_2 + 3] [i_2 + 4] [i_2 - 1] [i_2 - 1] [i_2 + 4];
                            var_35 = (arr_9 [i_0] [i_1] [i_2] [i_6] [1]);
                        }
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, (arr_41 [i_13] [i_13] [i_13] [i_0])));

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_46 [i_1] [i_1] [i_2] [i_13] [i_14] = arr_25 [i_14] [i_0 - 1] [9] [i_0 - 1] [i_0 - 1];
                            var_37 = arr_34 [i_0 - 1] [1] [i_13] [0] [i_0 - 1] [i_13];
                            arr_47 [i_14] [i_14] [i_14] [i_1] [i_14] [i_14] [i_14] = var_2;
                        }
                        var_38 += (arr_3 [i_0 - 1]);
                    }
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            arr_52 [9] [i_1] = var_2;
                            var_39 -= var_5;
                            arr_53 [i_1] [i_15] [i_1] = (arr_5 [i_16] [i_15] [i_2 - 1] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            var_40 = var_13;
                            arr_56 [i_1] [i_1] [i_1] [i_15] [i_17] [i_1] = var_13;
                        }

                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_41 -= (arr_10 [i_0] [i_1] [i_1] [i_15] [i_18]);
                            var_42 = (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [8]);
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 12;i_19 += 1)
                        {
                            arr_63 [i_15] [i_1] [i_15] [i_15] [5] [6] = (arr_16 [i_0] [i_1]);
                            var_43 = (max(var_43, (arr_44 [i_0] [i_0] [i_0] [i_15] [i_0] [3])));
                            var_44 ^= var_0;
                            arr_64 [i_15] |= (arr_31 [i_0 - 1]);
                        }
                        for (int i_20 = 2; i_20 < 10;i_20 += 1)
                        {
                            var_45 |= arr_66 [i_20 + 1] [i_2 + 2] [i_1] [i_1 - 1] [i_0 - 1];
                            arr_68 [12] [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_15] [i_20] = var_1;
                        }
                    }
                }
            }
        }
        var_46 |= var_2;
    }
    #pragma endscop
}
