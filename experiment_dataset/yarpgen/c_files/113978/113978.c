/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_1] [10] [1] = 1;
                        arr_13 [12] [i_1] [1] [i_1] = 22389;
                    }
                }
            }
        }
        arr_14 [i_0] = var_12;
        var_17 += var_9;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_18 = (arr_10 [i_4]);

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_19 ^= var_13;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = (min(var_20, -92));
                var_21 -= var_14;
            }
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_22 = (arr_18 [i_7 + 1] [i_7 - 1] [i_7 - 1]);
                var_23 = (arr_17 [i_4] [i_7 - 1] [i_7]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_24 = var_1;
                            var_25 = (max(var_25, var_14));
                            var_26 = var_5;
                        }
                    }
                }
                arr_30 [i_7] = (arr_9 [14] [14] [i_5]);
            }
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                var_27 = -22402;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        {
                            arr_39 [i_4] [1] [i_4] [i_4] [i_4] = 0;
                            arr_40 [i_4] [i_4] [i_5] [i_5] [1] [i_11] [i_12] = 13;
                        }
                    }
                }
                arr_41 [i_4] [i_5] [i_5] [i_4] = (arr_29 [2] [i_10 + 1] [i_10 - 2] [i_4] [2]);
                arr_42 [i_4] [i_4] [i_10 - 2] = (arr_8 [i_10 + 2]);
            }
            for (int i_13 = 4; i_13 < 20;i_13 += 1)
            {
                var_28 = var_6;
                var_29 = (arr_29 [1] [1] [i_13 - 3] [i_13 - 3] [i_13 + 2]);
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_51 [i_4] [1] [18] [18] [1] &= 1;

                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_30 = (max(var_30, 1626260295));
                            arr_56 [i_15] [i_5] [16] [i_5] [i_5] = var_0;
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            arr_60 [i_15] [17] [i_15] [i_15] = (arr_32 [i_4] [i_5]);
                            arr_61 [i_5] [i_15] = var_0;
                            var_31 = (max(var_31, (arr_10 [i_4])));
                        }
                    }
                }
            }
        }
        var_32 = var_12;
        var_33 = var_3;
        var_34 += 33292288;
    }
    #pragma endscop
}
