/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 36893;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((~26273) ? ((26273 ? (arr_3 [i_1 + 2]) : (arr_1 [i_1 - 1]))) : (min((arr_1 [i_1 + 2]), (arr_3 [i_1 - 1])))));
                var_16 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) - (((arr_0 [i_1]) + (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_17 = (min(var_17, (arr_9 [i_1 + 1] [i_1 + 2])));
                                var_18 = (((arr_0 [i_1 + 2]) ? 184 : 65535));
                            }

                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_19 = arr_3 [i_0];
                                var_20 &= ((~(min((arr_4 [i_0]), (arr_6 [i_1] [1] [i_5])))));
                                var_21 += 26273;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_22 *= (max((((arr_2 [i_1] [5]) ? ((((!(arr_3 [2]))))) : (((arr_8 [0] [i_1] [20] [14]) * (arr_2 [i_0] [1]))))), (((((min(39274, (arr_8 [18] [i_1] [i_3] [17])))) ? 21030 : 39274)))));
                                arr_16 [13] [i_0] [1] [13] [i_2] [15] [14] = 2319;
                                arr_17 [12] [i_0] = (((arr_15 [21] [i_3] [i_2] [0] [9] [i_0] [i_0]) && var_8));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                arr_20 [i_0] [10] [6] [1] [i_7] [i_7] [22] = (((arr_6 [i_1 + 1] [i_1] [i_1 - 1]) << (26273 && 26262)));
                                var_23 = (max(((((arr_12 [i_0] [i_1] [18] [i_3] [i_7]) < (((var_5 ? 26045 : (arr_13 [0] [13]))))))), (max(((((arr_6 [8] [1] [i_0]) != var_8))), (arr_0 [i_1])))));
                                arr_21 [i_7] [1] [i_2] [i_1] [i_7] = (arr_6 [12] [10] [1]);
                            }

                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_24 = (min(-29050, ((min((min(24, 26267)), 65535)))));
                                var_25 = (max(var_25, ((min(var_9, (((arr_8 [i_1 - 1] [i_1] [i_1 + 2] [8]) ? (arr_8 [i_1 + 2] [i_1] [i_1 - 2] [i_1]) : (arr_18 [10] [i_0] [i_1 + 2] [i_1] [i_1 - 1]))))))));
                                var_26 = max(26240, 255);
                            }
                        }
                    }
                }
                var_27 = (arr_19 [i_0] [i_1] [22] [i_0] [i_0]);
                arr_26 [10] = (min((((var_0 ? (((arr_15 [10] [5] [i_1] [1] [1] [i_1] [0]) << 2)) : 1))), (((arr_10 [5] [i_1 - 2] [18] [1] [i_1] [i_1 + 1]) ? (arr_14 [14] [i_1] [i_1] [i_0] [i_0] [20] [7]) : ((max(var_9, (arr_3 [i_0]))))))));
            }
        }
    }
    var_28 = var_6;
    var_29 = var_9;
    #pragma endscop
}
