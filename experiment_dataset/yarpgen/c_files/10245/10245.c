/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_10, ((var_17 ? (~var_5) : ((9223372036854775807 ? var_13 : var_14))))));
    var_21 &= ((max(var_11, ((max(222, var_1))))));
    var_22 = ((((((var_7 * var_5) / var_9))) ? var_7 : var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 ? (1099962157 && 12688027641996310851) : (((((var_7 ? (arr_0 [i_0] [i_0]) : var_0))) ? (arr_1 [i_0]) : ((min(var_6, var_17)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_23 = (max(var_23, (((var_5 ? (((168 ? ((var_17 ? (arr_5 [i_0] [i_1] [14]) : var_4)) : (arr_4 [i_0])))) : (((arr_12 [i_0] [i_1 + 1] [i_3 - 1] [i_3] [i_4 - 1]) ? (arr_12 [i_0] [i_1 + 1] [i_3 - 1] [22] [i_4 - 1]) : 3751606206659558017)))))));
                            var_24 = (max((arr_0 [i_1 + 1] [i_3 - 1]), (min(var_12, var_4))));
                            arr_14 [i_1] [i_1] [10] [9] [i_4 + 1] = var_12;
                        }
                        arr_15 [7] [i_1] [i_2] [16] = (min((((1 ? 213 : 28))), var_18));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (((min(var_2, (arr_10 [i_5] [i_5] [i_5] [3] [i_5])))));
        arr_19 [15] = (min(var_0, (arr_1 [i_5])));
        arr_20 [i_5] = ((~(((min(2148729721, var_15)) >> (((min((arr_6 [19] [i_5] [i_5]), var_11)) - 64347))))));
        arr_21 [i_5] = (min((min(((var_6 ? var_4 : (arr_3 [i_5]))), (((arr_0 [i_5] [i_5]) ? (arr_4 [i_5]) : var_16)))), (arr_12 [8] [i_5] [i_5] [i_5] [i_5])));
        arr_22 [i_5] [i_5] = (9666745636805434324 ? (((arr_12 [12] [i_5] [1] [i_5] [4]) ? (((arr_7 [16] [16] [6]) - (arr_7 [10] [i_5] [10]))) : ((((arr_0 [i_5] [i_5]) ? (arr_3 [i_5]) : (arr_6 [i_5] [i_5] [i_5])))))) : var_14);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_25 = (arr_8 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_26 = ((var_3 ? 0 : (arr_24 [i_6] [i_10])));
                                arr_39 [i_6] [i_6] [i_7] [i_7] [i_9] [i_10] = var_2;
                                arr_40 [i_6] [i_6] |= ((-((((max(var_15, (arr_38 [13] [i_7] [i_8 - 1] [13] [15])))) ? (var_12 - var_2) : (arr_6 [i_7] [i_9] [i_9])))));
                            }
                        }
                    }
                    arr_41 [i_7] [i_7] [i_7] [i_7] = (((((((var_13 ? (arr_26 [i_8] [i_7]) : var_8)) ^ (arr_10 [i_6] [i_6] [i_8] [i_8 + 1] [i_8])))) ? ((max(922446338, -803838238))) : (((arr_24 [i_8 + 2] [i_8 - 2]) ? (~89) : (arr_35 [i_8] [i_8 + 1] [i_8] [18])))));
                }
            }
        }
    }
    #pragma endscop
}
