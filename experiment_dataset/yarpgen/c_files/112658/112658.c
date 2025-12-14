/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_13 = var_4;
                        arr_12 [i_0] [7] [0] [i_3] [7] = (arr_7 [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, (arr_6 [i_0] [6])));
                        arr_17 [i_0] = (arr_11 [i_0] [i_0] [5] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_15 |= (arr_22 [i_0] [8] [i_6 + 2] [i_0] [i_6]);
                            var_16 = (max(((((((arr_4 [i_5]) ? var_4 : (arr_21 [i_0] [i_2] [i_6 + 2])))) ? (arr_22 [7] [i_1] [4] [i_1] [i_1]) : (max(var_10, var_11)))), (arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_17 += ((((arr_19 [i_5] [i_5] [i_2] [i_5] [i_7]) ? (((arr_23 [i_0] [8] [i_2] [i_7]) % var_5)) : -348801676)));
                            var_18 = (arr_10 [i_0] [i_0] [i_0] [i_2] [7] [i_7]);
                            var_19 = (max(var_19, (arr_19 [i_0] [i_1] [i_1] [i_5] [i_5])));
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            arr_29 [i_0] = min((arr_11 [i_0] [i_0] [i_0] [i_0]), 348801691);
                            arr_30 [i_0] [i_0] [i_2] [0] [0] [i_0] = (max(((((arr_1 [i_0]) % (arr_1 [i_8 + 1])))), (max((arr_27 [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (max(var_0, (arr_15 [3] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] = 17666;
                            arr_32 [i_0] [i_0] [i_0] [i_5] [5] = (max(((min(var_8, var_2))), (((((arr_26 [i_0] [i_8 - 1] [i_8 + 1] [i_8 + 3] [i_8 + 1]) + 9223372036854775807)) << (((((arr_8 [i_5] [i_1] [i_8 - 1] [i_5] [i_8] [i_1]) + 8554305896642023952)) - 57))))));
                        }
                        var_20 ^= (((min((arr_8 [i_0] [i_1] [4] [i_2] [4] [i_5]), var_0)) - (arr_8 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0])));
                        var_21 = (((max((arr_20 [i_5] [8] [8] [i_0]), (arr_20 [i_5] [2] [2] [i_0]))) - ((max((((arr_9 [9] [10] [10] [10] [i_5]) / var_2)), (arr_25 [i_0] [i_0] [i_1] [6] [i_5]))))));
                        var_22 = max(var_7, var_0);
                        var_23 = var_1;
                    }
                    arr_33 [i_0] [7] = (min(var_7, ((max(348801675, 32767)))));
                }
            }
        }
    }
    var_24 = -662427324193614867;
    #pragma endscop
}
