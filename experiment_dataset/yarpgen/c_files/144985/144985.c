/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_11 & var_3) ? 1 : (!var_3)))) ? var_9 : ((((max(1, var_1))) ? var_14 : (~var_14))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 - 2]) / (arr_1 [i_0] [i_0])));
        var_16 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = ((((max(-1118344578, (min(10, 255))))) ? ((((((21 ? 1 : 1))) ? 39289 : 1))) : -9223372036854775803));

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (min((min((((arr_9 [i_1 + 1] [i_1 + 1] [i_3]) ? 1 : 1)), (~18))), (arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_5 + 4])));
                            arr_14 [i_4] [i_5] [i_4 + 1] [i_3] [i_2] [i_4] = ((-(arr_5 [i_5 - 1] [i_5 + 3])));
                            var_19 = (((((~(arr_4 [i_1 + 3])))) * ((1 ? 2726221011 : 242))));
                            var_20 = (arr_12 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 4] [i_1] [i_1]);
                        }
                        arr_15 [i_1 + 3] [i_2] [i_4] = (((((arr_7 [i_2] [i_2]) ? (arr_4 [i_1]) : (arr_3 [i_1 + 2]))) - ((((arr_4 [i_1 + 3]) ? (arr_7 [i_1 + 2] [i_3]) : (arr_4 [i_3]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((((arr_8 [i_8] [i_8 + 1] [i_7 - 1]) * (arr_19 [i_8 - 1] [i_8] [i_8 - 1] [i_7 - 1]))) * (((arr_18 [i_8 - 1] [i_8 + 1] [i_7 - 1]) ? (arr_8 [i_8] [i_8 - 1] [i_7 + 1]) : (arr_18 [i_8 - 1] [i_8 - 1] [i_7 - 1]))))))));
                        var_22 &= ((((((((-(arr_13 [10] [i_6] [10])))) ? ((((arr_6 [i_1]) ? (arr_13 [12] [i_7 - 1] [12]) : (arr_22 [i_6] [i_7 + 1])))) : (max((arr_7 [i_1] [i_1]), (arr_6 [i_1])))))) ? ((min((arr_19 [i_6] [i_7] [i_6] [0]), (min(1, (arr_19 [i_1] [i_1 + 3] [i_1 + 3] [i_1])))))) : ((((max(1, 124))) ? ((-(arr_17 [i_6] [8] [i_6]))) : (~631106754)))));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_23 = (max(var_23, ((((((min(21, 17505791841731378956)) ? -1996733119 : 127)))))));
            var_24 = ((!(((((max((arr_21 [i_1] [i_1] [13] [i_9]), (arr_4 [i_9])))) % (arr_17 [4] [12] [i_9]))))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_28 [i_10] [i_10] = ((((((136 ^ 11) >> (((max((arr_11 [i_1 + 2] [i_10] [i_1] [i_10] [i_1] [i_10]), (arr_5 [i_10] [i_10]))) - 113))))) ? (arr_25 [i_1 + 2]) : (~94)));
            arr_29 [i_10] [i_10] = ((-1 ? 20 : 1118344575));

            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_32 [i_11] [i_11 - 1] [4] [i_11] &= ((((-(((arr_24 [i_11 - 1] [i_10] [i_1]) & (arr_12 [i_10] [i_11 - 1] [i_10] [i_1 + 3] [i_1] [i_10] [i_10]))))) ^ ((((((arr_17 [i_1] [2] [i_1]) ? (arr_3 [i_1]) : 0)))))));
                var_25 ^= (arr_7 [i_10] [i_11 - 1]);
            }
        }
    }
    var_26 = (max(((~(~20939))), (~var_4)));
    #pragma endscop
}
