/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] = 27250;
                                arr_12 [i_0] = (((arr_0 [i_1 - 2] [5]) ^ (arr_8 [i_2])));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = (((((((arr_0 [i_0] [i_2]) && (arr_5 [i_4] [i_4] [i_2] [i_1]))) || 27250)) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) : 32704));
                            }
                        }
                    }
                    var_20 = (((~(arr_5 [i_2] [i_2] [i_1] [i_0]))));
                    arr_14 [i_1] [i_2] = (17 | 1);
                    var_21 = (min(var_21, (arr_0 [i_0] [i_2])));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = (((max(var_14, (arr_15 [i_5] [i_2] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1]))) ^ ((~(arr_9 [i_0] [i_1] [i_1] [i_1 - 2] [i_0] [i_1 - 2] [i_0])))));
                        var_23 = (max(var_23, var_18));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_6] [i_6] [i_0] [7] [i_0] [i_0] = (!(arr_2 [3] [i_1 - 2] [i_2]));
                        var_24 = ((var_12 ^ (arr_0 [i_1 + 1] [i_1 + 1])));
                        var_25 ^= -var_9;

                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_6] = (arr_18 [i_1 + 1] [i_1] [i_1]);
                            var_26 = ((var_18 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_17 [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2])));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [7] [i_6] = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 + 1]) > (arr_9 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])));
                            var_27 = ((-1 > (arr_0 [7] [i_1])));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_28 -= ((!((((arr_22 [i_0] [i_1] [i_2] [5] [i_9] [i_9] [8]) ? (arr_26 [i_1 + 1] [i_9] [i_6]) : var_15)))));
                            var_29 = (2386147041 ? (((arr_2 [i_0] [i_0] [1]) ? (arr_0 [i_1] [i_1]) : (arr_22 [i_0] [i_9] [9] [i_0] [i_0] [i_0] [i_0]))) : (arr_19 [i_0] [i_1 - 1] [i_2] [i_6] [i_9] [i_1 - 1]));
                            var_30 = ((0 && (arr_26 [i_0] [i_1] [i_1 - 2])));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_10;
    #pragma endscop
}
