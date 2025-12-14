/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_2] [0] [i_1] [i_0] [i_0] = var_11;
                            var_12 = (min(var_12, (((arr_10 [i_2] [i_2] [i_1 + 1]) * ((min(var_9, (arr_12 [i_3] [1] [1] [i_1] [4]))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = (((arr_12 [i_3] [i_3 + 2] [i_1 + 1] [i_0 - 1] [i_0 - 1]) ? (((arr_11 [i_1 + 1]) / (arr_5 [i_1 + 1] [i_1 + 1]))) : (((arr_5 [i_1 + 1] [i_1 + 1]) ? (arr_11 [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 + 1])))));
                            var_13 = ((var_4 - 3653511435) ? (((arr_8 [i_0 - 3] [i_1 + 1]) & (arr_8 [i_0 - 4] [i_1 + 1]))) : (((((max((arr_6 [i_3] [i_0]), (arr_0 [i_0])))) ? (arr_9 [i_0]) : (arr_12 [i_0 - 4] [i_1] [i_3 + 2] [i_1 + 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_14 = 641455877;
                            arr_20 [i_4] [i_1 + 1] [i_1] [i_1 + 1] = ((((min((arr_16 [i_5 - 2] [i_4 + 1] [i_0 - 2]), var_8))) ? (arr_9 [i_5]) : (arr_5 [i_0 - 1] [i_0 - 3])));
                            arr_21 [i_4] = ((min(var_11, 0)));
                            arr_22 [i_0 + 1] [i_1 + 1] [18] [i_0 + 1] [i_5] [i_0 + 1] |= ((((min(var_3, (arr_17 [i_0] [i_1] [i_4 - 4] [i_5])))) || (1125899906842623 < var_6)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_28 [i_7] [i_1] [i_6] [i_1] [i_0] = 641455860;
                            arr_29 [i_0] [i_1] = (max(var_1, (((!(arr_5 [i_0 - 1] [i_1 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_42 [i_8] [i_8] [i_8] [11] = (((((max(var_6, (arr_33 [i_8] [i_8]))))) - ((((max(var_6, (arr_36 [i_8] [13])))) ? (min((arr_31 [i_8]), 15396)) : (((((arr_24 [i_10]) <= var_1))))))));
                    arr_43 [i_8] [i_8] [i_8] = ((!(!921408433)));
                    var_15 = (max(var_15, (((20210 ? ((((arr_12 [i_9 + 2] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 1]) ? (arr_12 [i_8] [i_8] [i_9 - 1] [i_10] [i_10]) : (arr_39 [i_10] [i_10] [i_9 - 1])))) : var_7)))));
                    arr_44 [i_10] [i_8] [i_8] = ((((((arr_12 [i_8] [11] [11] [i_8] [i_9 + 2]) ^ (arr_12 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])))) ? ((min((arr_12 [16] [i_9] [i_9] [i_9] [i_9 + 2]), (arr_12 [i_8] [i_8] [i_8] [i_9 + 1] [i_9 + 1])))) : var_7));
                }
            }
        }
    }
    #pragma endscop
}
