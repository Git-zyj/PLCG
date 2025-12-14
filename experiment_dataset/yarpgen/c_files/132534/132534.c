/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-1, (min((~var_12), var_10))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 3] [i_1] [i_0] = (((arr_5 [i_0 - 3]) ? (arr_5 [i_0 - 1]) : (arr_4 [i_0 + 2])));
                    var_15 = (((120 ? var_9 : (arr_1 [i_2] [i_1]))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_16 |= ((-(arr_11 [i_0 + 1] [i_0 - 3] [i_2])));

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_17 += ((~(arr_7 [i_4 - 1] [i_3] [4] [i_4 + 1])));
                            var_18 = ((((((arr_5 [i_4]) >> var_11))) ? (arr_3 [i_0 - 3]) : (arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0])));
                            arr_17 [i_0] [4] [i_1] [i_0] [i_0] [i_0 - 1] [i_0] = (((arr_13 [i_0 + 2] [0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]) >> (arr_13 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [2])));
                            var_19 = (36140 == -18743);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_20 &= var_4;
                            arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1] = ((29482 == (((arr_7 [i_2] [i_1] [i_2] [i_2]) ? var_9 : -26928))));
                            var_21 = var_5;
                            arr_21 [i_0 + 1] [i_1] [i_0] = ((9 ? -26948 : -4));
                        }
                        var_22 = (arr_16 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 1] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_24 [i_0 + 1] [i_1] = (((arr_10 [i_0 - 2] [i_2] [i_1]) ? (((!(arr_12 [1])))) : ((1 ? 1 : -16))));
                        arr_25 [i_0] [i_0 + 2] [i_1] [3] [i_6] = (~123);
                    }
                }
            }
        }
        arr_26 [i_0] = ((((((arr_23 [i_0] [0] [i_0] [i_0] [i_0 - 2] [i_0]) % var_5))) ? (((arr_19 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0]) ? (arr_14 [9] [i_0] [i_0] [i_0 + 2] [i_0]) : 7909)) : (arr_3 [i_0 - 3])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_23 = (((arr_4 [i_8]) / (~16)));
                    var_24 = arr_16 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 + 2];
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 7;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (max(((-(arr_15 [i_9 - 1] [i_9] [i_9 + 3] [i_9] [i_9]))), (((~26930) ? 26967 : var_7))));
        arr_36 [i_9] [i_9] = (arr_23 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9]);
        var_25 = (((((arr_0 [i_9]) + 2147483647)) << (((((~1020) ? ((1 ? (arr_33 [i_9 + 3] [i_9 - 2]) : var_5)) : ((min(65535, (arr_14 [i_9] [i_9] [i_9] [i_9 - 1] [3])))))) - 43592))));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_39 [i_10] = (((arr_38 [i_10]) ? (!4) : ((~(arr_38 [i_10])))));
        var_26 = (((((-(arr_38 [i_10])))) ? (((arr_38 [i_10]) ? (arr_38 [i_10]) : (arr_38 [i_10]))) : ((-(arr_38 [i_10])))));
    }
    var_27 = (((max((!var_1), -var_2)) + (~var_6)));
    #pragma endscop
}
