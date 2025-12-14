/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] |= 0;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = (arr_11 [i_0] [3] [8] [i_3] [i_1]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_12 += (((arr_9 [i_2 - 1] [1] [i_2 - 1] [i_2] [i_2] [0]) ? (arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2])));
                            var_13 = (min(var_13, (65526 ^ 8388600)));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [2] &= ((1 % (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])));
                            var_14 = (min(var_14, var_1));
                            var_15 = (((arr_7 [i_1 - 1] [i_1] [i_1] [i_2 + 2]) ? var_9 : var_5));
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] = (arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1]);
                            arr_19 [5] [i_1] [i_1] [16] [i_1] = (arr_8 [i_2 + 1] [10] [i_2] [1]);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_26 [i_7] &= var_10;
                    arr_27 [i_0] [i_0] [0] [i_0] = (((((arr_4 [i_7]) - var_6))) ? (arr_1 [i_6 - 2]) : ((5 ? 2860555926 : var_4)));
                }
            }
        }
        arr_28 [i_0] = var_10;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_42 [i_9] [i_12] = ((var_9 ? ((((var_7 ? var_7 : var_4)) % var_7)) : 1));
                                var_16 = (max(var_16, (((((((max(var_10, (arr_30 [i_8])))) ? 1073741824 : (max((arr_38 [i_8] [i_12] [i_10] [i_11] [i_12]), var_6)))) & 0)))));
                                arr_43 [i_9] [i_10] [i_10] = ((((((var_10 ? (arr_32 [i_9] [i_9]) : var_10))) ? (((arr_36 [i_8] [i_12 - 1] [8] [8]) ? var_4 : 8388600)) : (((0 ? var_5 : 1073741824))))) > ((max(((((arr_36 [i_8] [i_9] [16] [1]) == (arr_37 [i_8] [i_8] [i_8] [i_8] [11] [i_8])))), (max(var_9, 757978653902099309))))));
                                arr_44 [i_11] [i_11] [i_11] [i_9] [i_11] [i_11] = (arr_41 [i_11] [16] [i_11] [i_11] [16]);
                            }
                        }
                    }
                    arr_45 [i_8] [i_10] [i_9] = 757978653902099305;
                    arr_46 [i_8] [i_9] [i_10] = (max((arr_30 [9]), ((~(arr_36 [i_10] [i_9] [i_10] [i_10])))));
                    arr_47 [i_8] [i_9] = (arr_39 [i_8] [i_8] [i_9] [i_8] [i_8] [1]);
                }
            }
        }
    }
    #pragma endscop
}
