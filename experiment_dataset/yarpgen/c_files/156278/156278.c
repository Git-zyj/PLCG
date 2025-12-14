/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (arr_11 [i_1] [i_1] [i_1]);
                                var_17 *= ((((arr_12 [i_1 + 1] [i_1 - 4] [i_1 + 1] [i_1] [i_4 + 1] [i_4 - 1]) * var_2)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] = (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_1 - 4] [i_1]) + (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2])));
                    var_18 = var_3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_25 [i_6] [i_6] = var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_19 &= var_6;
                                var_20 = (((((var_11 & (arr_27 [i_8] [i_6 - 3])))) ^ ((var_7 | (arr_27 [i_5 - 1] [i_5 - 1])))));
                                var_21 = (min(var_21, (arr_22 [1])));
                            }
                        }
                    }
                    var_22 = (arr_26 [i_6 + 1] [i_6] [i_5 + 1]);
                    arr_32 [i_6] [i_5 - 2] [i_7] = var_0;
                }
            }
        }
    }
    var_23 = (min(var_23, var_8));
    var_24 = var_15;

    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_25 = (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_26 = (arr_15 [i_10] [i_10]);
    }
    for (int i_11 = 1; i_11 < 21;i_11 += 1)
    {
        arr_38 [i_11] = (arr_36 [i_11 - 1] [i_11 + 2]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 22;i_13 += 1)
            {
                {
                    arr_44 [i_11] [i_12] [i_11] = (8126464 || var_2);
                    var_27 &= ((var_0 % (((arr_43 [i_12] [i_12] [6] [i_12]) >> var_14))));
                }
            }
        }
        arr_45 [i_11] = ((((arr_41 [i_11 + 1] [i_11] [i_11 - 1]) - (arr_41 [i_11 + 2] [i_11 - 1] [i_11 - 1]))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_49 [i_14] = var_11;
        arr_50 [i_14] = (var_15 - var_9);
        var_28 = var_0;
    }
    #pragma endscop
}
