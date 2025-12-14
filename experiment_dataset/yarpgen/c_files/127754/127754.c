/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [0] = -var_0;
                        arr_11 [i_1] [i_1] = (var_2 ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : var_9);
                        var_20 &= arr_6 [i_0 + 1] [i_0 + 1] [i_3];
                    }
                }
            }
        }
        var_21 = (arr_4 [i_0 - 2] [i_0 - 2] [6]);
        arr_12 [i_0] = -157;
    }
    var_22 = var_12;
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] [i_6] = (arr_20 [5] [10] [i_6] [10]);
                            var_23 = (max(var_23, (arr_13 [i_4])));
                            arr_26 [i_4] [i_6] [15] = (((((!(~424683547)))) & ((-(arr_20 [i_4 + 3] [3] [i_6] [i_4 - 1])))));
                        }
                    }
                }
                var_24 = var_0;
                arr_27 [i_4 - 3] [i_5] [i_4 - 3] = var_5;
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_25 ^= ((((((~(arr_20 [i_10 + 2] [i_9] [i_9] [i_5]))) + 2147483647)) << (((var_6 + 4789752729653974881) - 5))));
                                arr_38 [i_10] = (max((min((min(var_4, (arr_22 [9] [i_5] [i_8] [i_10] [15]))), var_14)), (((!(185 - 9982))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_41 [i_11] [i_11] = ((!(((-(arr_6 [i_11] [i_11] [i_11]))))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_48 [i_12] [2] [i_14] [i_12] = ((((max(var_14, (arr_24 [i_13 + 4] [i_13 - 1] [i_13 - 1] [i_13 - 1])))) ? var_5 : ((((arr_8 [i_11] [i_12] [2] [i_13] [i_13 - 1] [i_14]) ? var_3 : var_0)))));
                        var_26 = (((((arr_30 [i_13 + 4] [i_13 + 1] [i_13 - 1] [i_13 + 4]) || 157)) || ((((!(arr_22 [i_11] [i_11] [i_11] [i_14] [i_11]))) || ((max(var_6, (arr_7 [i_14] [i_14] [7] [i_14]))))))));
                        var_27 = ((!(((2201506875 ? var_3 : var_2)))));
                        arr_49 [i_11] [i_12] [i_12] [i_13 + 4] [11] [i_14] = (((min(1630309713, 25876)) > (arr_32 [i_11] [i_12] [i_13] [i_12])));
                    }
                }
            }
        }
        var_28 = (min(var_28, (!var_19)));
    }
    #pragma endscop
}
