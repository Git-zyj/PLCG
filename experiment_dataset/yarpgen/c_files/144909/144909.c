/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((-16 - -8) ? ((1 ? var_12 : var_12)) : var_15)))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 1] = 11853987708031176200;
        var_19 = (1 & 29);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((6592756365678375415 ? (arr_1 [i_1]) : (arr_1 [i_1])));
        arr_7 [i_1] = (((arr_4 [10] [10]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 3])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_1] = (((arr_11 [i_1] [i_1] [i_1] [10]) & (arr_11 [i_1 + 3] [i_2 - 1] [i_1 - 3] [i_1 - 3])));

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_20 = (((arr_8 [i_2 + 1]) ? (arr_8 [i_2 - 2]) : 16));
                            var_21 = (((arr_9 [i_5 + 2]) ? (arr_9 [i_5 - 1]) : (arr_9 [i_5 + 2])));
                        }
                        var_22 = ((arr_2 [i_2 - 1]) >= -2867195883674132326);
                        arr_17 [i_1] [8] [i_2 - 1] [i_1] = (((-22 | 115) ? 3028912406 : (((11853987708031176200 ? -16 : 201326592)))));
                    }
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        var_23 ^= (arr_2 [i_1]);

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_24 = (arr_15 [1] [i_6 + 1] [i_6] [1] [i_6 - 1] [i_6 - 4]);
                            var_25 = (((((arr_22 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_2] [i_2 + 1] [i_6 - 1]) + 2147483647)) >> (((arr_22 [i_1] [i_1 - 3] [i_2] [i_1] [1] [i_2 - 2] [i_6 - 2]) + 31442))));
                        }
                        var_26 = 14279773147283564605;
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_27 [i_1] [i_2] [i_8] [i_1] = ((-11 ? (((arr_10 [17]) << (((arr_10 [i_2 - 1]) - 8587324158986841063)))) : (arr_13 [i_1 - 2])));
                            var_27 ^= (arr_24 [i_2 - 3] [i_2 - 2]);
                            var_28 = (max(var_28, 1));
                            arr_28 [i_1] [i_2] [i_2] [i_8] [i_1] = (((arr_1 [17]) <= (arr_13 [i_1 - 2])));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_29 = (arr_12 [i_2] [8] [3] [i_8]);
                            var_30 = (((arr_24 [i_1 + 2] [i_2 - 2]) ? (arr_24 [i_1 - 2] [i_2 - 2]) : (arr_24 [i_1 + 2] [i_2 - 2])));
                        }
                        var_31 = ((3028912392 / ((((arr_19 [i_1] [0]) / (arr_18 [i_2] [15] [i_3] [i_8]))))));
                    }
                    arr_31 [i_1] [i_2] [i_3] = ((((arr_22 [i_1] [i_1] [12] [i_1] [i_1] [i_1] [i_1]) ? (arr_25 [i_1] [i_1] [i_1]) : 1266054866)));
                    arr_32 [i_1] = ((-(((!(arr_5 [1]))))));
                    var_32 = (((arr_18 [i_1 - 3] [i_1 - 3] [i_1] [i_2 - 3]) ? (arr_30 [i_2 - 2] [i_2 - 3] [i_1 + 1] [i_1] [i_1] [i_1]) : 34));
                }
            }
        }
    }
    #pragma endscop
}
