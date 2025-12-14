/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 || var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        var_11 = (max((arr_3 [i_0] [i_0] [2]), (((arr_8 [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_3 + 4] [i_3]) ? (arr_7 [i_0] [i_2 + 1] [i_2 - 1] [i_2]) : (arr_8 [i_0] [i_2 + 1] [i_2 - 1] [i_0] [i_3 + 4] [i_3 + 4])))));
                        var_12 = (max(((((arr_6 [i_3] [i_3 + 4] [i_3 + 3] [i_3 - 1]) ? var_2 : var_7))), var_6));
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_0] = var_1;
                        var_13 = ((max((arr_1 [i_2 - 2]), (arr_1 [i_2 + 2]))));
                        var_14 *= var_7;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_4] [1] [i_4] [i_4] [1] = var_8;
                        var_15 ^= (((arr_12 [i_2 + 2] [i_2 - 1] [0] [i_2 + 2] [0]) ? (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) : var_3));
                        arr_16 [i_0] [i_1] = ((var_4 ? (var_9 <= var_5) : var_8));
                        var_16 = (min(var_16, (arr_13 [6] [6] [6] [6] [i_4] [3])));
                        arr_17 [i_0] = ((var_5 ? var_4 : (arr_9 [i_1] [i_2 - 1] [i_2 + 3] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [i_1] = -var_2;
                        var_17 = (arr_3 [i_1] [i_2] [i_2]);
                        var_18 ^= (var_0 ? (((arr_0 [i_0] [i_0]) ? var_7 : var_0)) : ((var_0 ? var_0 : var_6)));
                    }
                    var_19 = (((((arr_11 [i_0] [i_1] [i_2 + 2] [i_1] [i_2] [i_1]) && (arr_6 [i_0] [i_0] [i_2] [i_0]))) ? (arr_13 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [4]) : -var_3));
                    var_20 = (max(var_20, ((((((max((arr_12 [i_0] [i_0] [i_0] [i_0] [0]), (arr_4 [i_0] [i_0] [6]))))) & -var_2)))));
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_21 = (min(var_21, var_6));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_3));
                            arr_36 [i_6] [i_7] [i_8] [i_7] [i_9] [i_7] = ((var_1 ? (var_4 != var_0) : var_8));
                            var_23 = -var_5;
                            arr_37 [i_6] [i_6] = (arr_34 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 2] [i_8] [i_8]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_24 = (((arr_43 [i_6 - 2]) ^ var_3));
                            var_25 *= (!(arr_41 [i_6] [0] [i_12]));
                            var_26 += ((-(arr_39 [i_12] [i_7] [i_12])));
                        }
                        var_27 = ((var_0 ? (arr_32 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) : (arr_33 [15] [15] [15] [i_6 - 2])));
                        arr_47 [i_11] = (arr_42 [i_12] [i_11] [i_7] [i_6]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
