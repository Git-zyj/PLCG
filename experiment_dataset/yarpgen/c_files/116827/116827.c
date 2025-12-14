/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-8154217561256735096 ? ((((((746902950 ? 35946 : var_10))) || ((max(var_4, 0)))))) : -8376937784440329983));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_18, ((1499509975 ^ (0 >> 5)))));
                                var_22 = (max(var_22, var_1));
                                var_23 = (max(var_23, 3223614355));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_24 = (arr_3 [i_0] [i_0]);
                        var_25 = (((((arr_5 [i_5] [i_5] [6]) != 5)) ? (((arr_0 [i_5]) ? 4602140589021215867 : (arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2]))) : 9));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_17 [5] [i_1] = -1;
                            arr_18 [i_0] [i_1] [2] [i_5] [i_1] [i_6] = 18446744073709551606;
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [1] = ((1 ? (arr_19 [i_7 + 1] [0] [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (84 ^ 1)));
                            arr_23 [1] [i_1] [i_1] [i_1] = 18446744073709551597;
                        }
                    }
                    arr_24 [i_1] [15] = (10710220955059019185 || 0);
                }
            }
        }
        arr_25 [i_0] = ((((~0) ? ((1 ? (arr_20 [i_0] [i_0] [i_0] [12] [i_0] [i_0]) : 0)) : 32747)));
    }
    var_26 = (1 / var_3);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_38 [i_9] [i_9] [16] [i_9] = ((~(arr_26 [i_8])));
                    arr_39 [i_8] [i_9] [5] [i_10] = ((1 && (arr_35 [i_10] [i_9] [10])));
                }
                var_27 = (max((arr_35 [9] [i_9] [i_9]), ((1 ? (-9223372036854775807 - 1) : 47551))));
                var_28 = (arr_37 [i_8]);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_29 = 2413614774;
                            var_30 = (((!16620559207957265676) * (min(64735, (0 >> 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
