/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (arr_5 [i_1] [i_1 - 2] [i_0]);
                arr_6 [17] = (arr_0 [14]);
                var_19 = (arr_3 [8] [i_1 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_20 = (max(0, -6053931456295386078));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_21 = (arr_12 [i_3] [i_3] [i_3]);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_3] = (arr_16 [i_4]);
                        arr_19 [0] [1] [i_3] [i_4] [17] [i_5] = 0;
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_22 = arr_22 [i_2] [15] [i_3] [19];
                        arr_24 [11] [i_3] [i_3] [i_3] [1] = (arr_13 [i_2] [7]);
                        var_23 = (max(var_23, (arr_22 [i_2] [i_2] [i_2] [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_28 [i_3] = arr_16 [i_2];
                        arr_29 [i_3] [i_3] [i_6] [i_8] = (arr_15 [i_3] [6] [i_3]);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_32 [i_3] [i_6] [1] [i_3] = (arr_23 [i_2] [i_3] [i_6] [i_3]);
                        arr_33 [i_3] [i_6] [i_3] [i_3] [i_3] = arr_13 [i_3] [i_3];
                    }
                    arr_34 [i_3] [i_3] [i_3] = (arr_12 [i_3] [3] [i_6]);
                    var_24 = (arr_26 [22]);
                    var_25 = (min(var_25, (arr_20 [i_2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_26 = (arr_14 [1] [1]);
                                var_27 ^= (arr_38 [20] [20] [i_3] [i_6] [1] [i_11]);
                                arr_39 [i_11] [i_11] [i_11] [i_3] [i_11] = (arr_14 [3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
