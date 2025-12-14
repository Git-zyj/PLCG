/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += var_6;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((!((((arr_7 [i_0] [i_0] [i_0] [i_1 - 2]) ^ var_0))))))));
                        var_19 = (min(var_19, (arr_4 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_20 = (min(var_20, (((((((arr_5 [i_2] [i_2 + 1] [i_2 - 2]) ? (arr_5 [i_2] [i_2 - 2] [i_2 + 1]) : (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1])))) && (arr_8 [i_2] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 2]))))));
                        arr_11 [i_1] [i_1] [i_1] [i_1 - 1] = (((arr_9 [i_1] [i_1] [i_1 + 1] [i_2 + 1] [6]) ? (arr_2 [i_2 + 2] [i_2 - 2]) : (!var_2)));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] |= (min((max(52822, var_10)), -24));
                            var_21 |= (arr_1 [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = (((arr_3 [6] [i_1]) ? (arr_10 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_1 - 2] [i_6]) : (arr_12 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1 - 2])));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = (((arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_6]) | (arr_16 [i_0] [i_1] [i_1] [i_1 - 2] [i_6])));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] = ((!(arr_9 [i_1 - 1] [i_2 - 1] [i_2] [i_7] [i_7 - 1])));
                            var_22 = max(((((arr_4 [i_1]) ? var_1 : (arr_19 [i_1] [i_1] [i_1 - 1] [i_4] [i_7] [i_2])))), (max((arr_4 [i_1]), var_5)));
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_23 = (min(var_23, (((-(((1184280378973687826 / -92) ? (arr_3 [i_0] [i_1 - 1]) : (1 - -1184280378973687826))))))));
                        var_24 = var_13;
                        var_25 += (((((arr_2 [i_1 - 2] [i_2 - 1]) >> (arr_2 [i_1 + 1] [i_2 + 1]))) << (((arr_2 [i_1 + 1] [i_2 - 2]) ? (arr_2 [i_1 + 1] [i_2 + 1]) : var_1))));
                        var_26 &= (max((((arr_15 [i_8] [i_8 - 1] [i_2] [i_2] [i_2]) | (arr_25 [i_2] [i_8 - 1] [i_8] [i_8] [i_2]))), (arr_5 [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            {
                arr_33 [i_9] = ((-(arr_27 [i_9 - 1])));
                var_27 = ((!((max((((arr_32 [i_9] [i_10] [i_10]) ? (arr_28 [i_9]) : (arr_26 [i_9]))), ((1 / (arr_28 [i_10]))))))));
            }
        }
    }
    #pragma endscop
}
