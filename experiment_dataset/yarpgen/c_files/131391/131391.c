/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_13 ^= (arr_0 [i_1] [i_2]);

                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_10 [10] [10] [i_2] [2] = (arr_1 [i_2] [i_2]);
                    arr_11 [i_0] [i_2] [i_3] = (arr_5 [i_0] [i_2] [i_0]);

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_14 = (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0]);
                        var_15 -= arr_13 [i_3] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0];
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_1 [i_2] [i_2]);
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_16 -= (arr_3 [i_0] [i_1]);
                        var_17 = (arr_0 [i_0] [i_0]);
                        var_18 -= (arr_3 [i_3] [1]);
                        var_19 &= (arr_0 [i_0] [i_5]);
                    }
                }
            }
            var_20 = (max(var_20, (arr_12 [i_0] [i_0] [i_0] [17] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_21 = (arr_7 [i_0] [i_6]);
                            var_22 -= (arr_0 [i_0] [i_0]);
                        }
                        var_23 ^= (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_26 [i_0] [i_0] [9] [i_0] = (arr_2 [i_1]);
                        arr_27 [i_0] &= arr_25 [i_0] [i_1] [i_1] [i_6] [i_6] [i_6];
                    }
                }
            }
        }
        arr_28 [i_0] [1] = (arr_19 [i_0] [i_0]);
        arr_29 [13] = (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_21 [i_10] [i_9] [i_9] [i_0])));
                    var_25 = (arr_25 [i_0] [i_0] [i_0] [i_10] [i_0] [i_9]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    {
                        var_26 = (max(var_26, (arr_31 [i_11] [i_12])));
                        var_27 = (arr_42 [i_11] [i_11]);
                        var_28 = arr_13 [i_14] [i_14] [7] [4] [4] [4] [i_11];
                    }
                }
            }
        }
        arr_44 [i_11] [i_11] = (arr_21 [i_11] [i_11] [i_11] [6]);
    }
    var_29 = (min(var_29, var_1));
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 18;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    arr_53 [i_15] [i_15] [i_16] [i_15] &= (arr_50 [i_15] [i_17] [i_15]);

                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_58 [i_16] [i_16 - 1] [i_16 - 1] [i_18] = (arr_52 [i_16] [i_16] [i_17] [17]);
                        arr_59 [i_16] [8] = (arr_50 [i_16] [i_16] [i_18]);
                        var_30 |= (arr_50 [i_15] [i_15] [i_15]);
                    }

                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        arr_63 [i_15] [i_15] [i_15] [i_16] [i_15] = (arr_61 [i_16] [i_17] [i_17] [i_15]);
                        arr_64 [i_16] = (arr_57 [i_16 - 1] [i_17]);
                        arr_65 [i_16] [0] [i_17] [i_16] = (arr_57 [i_17] [i_17]);
                        arr_66 [i_16] = (arr_54 [i_16] [4] [4] [i_16]);
                    }
                    for (int i_20 = 1; i_20 < 18;i_20 += 1)
                    {
                        var_31 = (arr_67 [13] [i_16] [13] [i_16] [i_20]);
                        var_32 = arr_67 [i_15] [i_16] [i_17] [i_20] [1];
                    }
                    for (int i_21 = 4; i_21 < 18;i_21 += 1)
                    {
                        arr_72 [i_15] [i_16] [i_17] [i_21] [i_16] = (arr_55 [i_16] [i_16] [i_16] [i_17] [1]);
                        var_33 = (arr_70 [i_15] [i_15] [i_16]);

                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            var_34 = (min(var_34, (arr_61 [i_15] [i_16] [12] [12])));
                            arr_77 [i_15 - 2] [6] [1] [i_16] [i_22] = (arr_47 [i_15] [i_15]);
                        }
                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            arr_81 [i_15] [i_15] [i_16] [i_17] [1] [i_16] = arr_45 [i_16] [i_16];
                            var_35 = (arr_62 [i_15] [i_16] [i_15] [i_21 + 1] [i_16]);
                            var_36 = (arr_45 [i_15] [i_16]);
                            var_37 = (arr_70 [17] [i_16 + 1] [i_16]);
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 20;i_24 += 1)
                        {
                            arr_85 [i_24] [i_16] [i_16] [i_16] [i_24] = (arr_45 [i_17] [i_24]);
                            var_38 = (max(var_38, (arr_80 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
                        }
                    }
                    var_39 &= (arr_48 [i_15] [3] [i_16]);
                }
            }
        }
    }
    #pragma endscop
}
