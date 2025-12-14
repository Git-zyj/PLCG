/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(((max((arr_1 [i_0]), (arr_1 [i_0])))), (max((arr_2 [i_0]), (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_17 [1] [i_4] [i_3] [i_2] [i_4] [i_0] = arr_15 [i_1] [i_3] [i_1] [i_1] [1];
                            var_14 ^= (max(((min((arr_13 [i_0] [i_0] [i_1] [5] [i_3] [i_4] [i_4]), (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_3])))), (arr_14 [i_4] [9] [i_2] [3] [i_0] [i_0])));
                        }
                    }
                }
            }
            var_15 = (min(((min((arr_5 [i_0] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_0] [i_0])))), (min(0, 518481395))));
            var_16 *= (min((arr_16 [i_0] [i_0] [i_0] [i_1] [2]), (arr_1 [i_1])));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_17 = (max((max((max(18446744073709551605, (arr_16 [i_5] [0] [i_5] [i_5] [i_5]))), (arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 3] [i_5 + 1] [i_5 - 1]))), (arr_14 [i_6] [8] [i_5] [i_1] [i_1] [i_0])));
                        arr_23 [i_0] [i_0] [i_0] [i_6] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
            var_18 = (min((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_1])))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_26 [i_7] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = (arr_12 [i_0]);
            var_20 *= (arr_8 [i_0] [i_7] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                        var_22 = (min(var_22, (arr_12 [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_23 = (arr_40 [i_0] [i_0]);
                        var_24 = (min(var_24, (arr_0 [i_0])));
                        var_25 = (arr_12 [i_11]);

                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            arr_45 [i_0] [i_0] [i_8] [i_11] [i_0] [i_12] [i_13] = (arr_16 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13]);
                            var_26 &= (arr_2 [i_0]);
                        }
                    }
                }
            }
            var_27 *= (arr_39 [i_0] [i_8]);
            arr_46 [i_0] [i_8] [i_0] = (arr_30 [i_0]);
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_28 = (arr_28 [i_14] [i_14]);
        var_29 += (min((min(3, 18)), (arr_11 [i_14] [i_14] [i_14] [i_14])));
        arr_49 [i_14] = (max(((min((arr_25 [i_14]), (arr_25 [i_14])))), (max((min((arr_37 [i_14] [i_14]), (arr_36 [6] [i_14] [i_14] [i_14]))), (max((arr_2 [i_14]), (arr_27 [2] [i_14])))))));
    }
    var_30 = var_10;
    var_31 = (max(var_5, var_0));
    #pragma endscop
}
