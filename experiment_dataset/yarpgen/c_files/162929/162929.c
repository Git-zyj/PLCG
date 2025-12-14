/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 2442555851232538373));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (((arr_4 [i_0] [i_0] [i_1] [9]) ? 2442555851232538373 : 18));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (!(((var_12 ? (arr_2 [i_0] [i_2]) : 7089453363897548933))));
                                var_19 = (min(var_19, ((((((((min(var_1, 3830820251102669268))) ? (min(var_8, (arr_7 [i_0] [0] [i_0] [i_0] [i_0] [i_0]))) : ((max((-2147483647 - 1), var_7)))))) ? var_11 : ((51889 ? (((arr_9 [i_2]) ? (arr_9 [i_1]) : -22552)) : 0)))))));
                                var_20 = (max(var_20, ((var_4 | ((((arr_1 [12]) - ((0 ? 22552 : 1)))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_21 |= ((var_1 ? (arr_8 [i_5] [i_2] [i_1] [i_1] [i_1] [i_0]) : (((arr_9 [i_0]) / (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_13 [1] [i_0] = (arr_9 [i_1]);
                        var_22 = (max(var_22, 3231262869));
                        arr_14 [i_0] [2] [i_0] [i_2] [12] [i_0] = (arr_7 [i_0] [i_0] [i_1] [i_2] [i_0] [8]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_19 [i_0] = 198;
                        arr_20 [i_2] [i_2] [i_0] [i_6] [i_2] = ((~(arr_16 [i_2] [i_6])));
                        arr_21 [i_0] [i_0] = -8080;
                    }
                }
            }
        }
    }
    #pragma endscop
}
