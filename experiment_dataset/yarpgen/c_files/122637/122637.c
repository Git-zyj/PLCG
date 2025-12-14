/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [5] [10] [5] [i_2 + 1] = (arr_7 [i_0] [15] [i_2]);
                    var_16 = (arr_8 [17] [i_1] [2]);
                    var_17 = (arr_1 [i_2]);
                    arr_10 [i_2] [i_1] [i_0] = (arr_4 [i_2]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_13 [4] [i_3] [i_3] = (arr_0 [i_3] [i_0]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_18 = arr_18 [i_3] [i_3] [i_3];

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_19 = (arr_16 [i_3]);
                            arr_21 [i_3] [i_6] [i_6] [i_6] [i_6] [i_0] [4] = (arr_6 [i_0] [i_3] [i_3] [i_5]);
                            var_20 = (arr_2 [i_4]);
                            var_21 ^= arr_19 [i_0] [i_5] [i_5] [i_4] [i_3] [i_3] [i_0];
                            var_22 |= arr_17 [3] [i_3] [i_3] [i_3] [i_3];
                        }
                        var_23 = (arr_6 [i_0] [i_0] [i_0] [i_5]);

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_24 = arr_14 [i_3] [i_3] [i_7 - 1];
                            arr_26 [4] [i_3] [i_3] [i_3] [i_5] [i_5] = (arr_16 [i_3]);
                        }
                        var_25 -= (arr_22 [i_0] [i_3] [i_0] [i_5] [i_4]);
                    }
                }
            }
            arr_27 [i_3] [i_3] = (arr_11 [i_0] [i_3] [i_0]);
            arr_28 [i_0] [i_3] = arr_18 [i_3] [i_3] [i_3];
        }
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            arr_32 [i_0] [6] [i_0] = (arr_15 [i_8] [2] [6] [i_8]);
            arr_33 [17] = (arr_3 [i_0] [i_8 - 2]);
            arr_34 [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0] [5]);
        }
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            arr_39 [i_9] [i_9] = (arr_12 [i_9]);
            var_26 = (min(var_26, (arr_18 [i_0] [i_9] [i_0])));
        }

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_27 = (max(var_27, (arr_20 [i_0])));
            var_28 = (arr_7 [i_10] [i_0] [i_0]);
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11] = (arr_36 [4]);
        var_29 ^= (arr_17 [i_11] [i_11] [i_11] [i_11] [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    var_30 = (arr_43 [i_11]);
                    var_31 *= (arr_49 [i_11]);
                }
            }
        }
    }
    var_32 = var_3;
    var_33 = var_4;
    var_34 = var_8;
    #pragma endscop
}
