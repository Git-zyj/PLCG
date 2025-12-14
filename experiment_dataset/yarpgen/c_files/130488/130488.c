/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((var_0 - ((4294967295 ? var_9 : var_12)))), var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] = (62643 + -1300762767);

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_2] [i_1 - 3] [i_2] [i_3] [i_4] = (((arr_3 [i_0] [i_4]) ? var_3 : var_9));
                            var_17 = ((var_14 ? ((2893 ? (-2147483647 - 1) : (arr_3 [i_0] [i_1]))) : (arr_5 [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 1])));
                            var_18 = (arr_2 [i_3] [i_2]);
                            var_19 = (((arr_3 [6] [i_1]) ? var_10 : (arr_3 [i_1 + 4] [i_1 + 4])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [9] = 80;
                            var_20 = ((~(arr_8 [i_0] [0] [i_2] [i_3] [i_2] [i_3])));
                            var_21 += ((((!(arr_3 [i_0] [i_3]))) ? (arr_13 [i_2] [i_1] [i_2] [i_3] [10]) : (arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 2])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_8 [i_1 - 3] [16] [i_1] [i_1 + 1] [16] [i_0]) + (arr_8 [i_1 - 3] [0] [i_1] [i_1 + 1] [0] [i_1]))))));
                        arr_23 [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [7] = (((arr_16 [i_2] [i_1] [i_1 + 4] [i_1] [i_1 + 3]) | (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_23 ^= (arr_2 [i_7 + 2] [i_7]);
                                var_24 = (arr_19 [6] [i_1] [i_7] [i_8]);
                            }
                        }
                    }
                    var_25 = (min(var_25, (((arr_12 [18]) ? (arr_27 [2] [i_1 + 2] [i_1 + 4] [i_2] [2]) : (arr_1 [i_1 + 4] [i_1 - 1])))));
                    var_26 = (arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((arr_8 [i_10] [12] [i_10] [i_2] [12] [i_1 + 4]) && -2147483636)))));
                                var_28 = (max(var_28, 17618));
                            }
                        }
                    }
                }
            }
        }
        var_29 = (((arr_34 [i_0] [i_0] [8] [i_0] [i_0] [i_0]) ? (arr_20 [i_0] [4] [4]) : ((10755345407916275613 ? var_11 : var_6))));
        var_30 = (((var_1 ? (arr_11 [i_0] [i_0] [i_0] [18] [i_0] [i_0]) : (arr_25 [i_0] [4] [i_0] [i_0]))));
        var_31 = (arr_20 [i_0] [16] [i_0]);
    }
    #pragma endscop
}
