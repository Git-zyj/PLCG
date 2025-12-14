/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_14);
        var_17 = ((~((var_1 ? (arr_0 [i_0]) : var_14))));
        var_18 = (((((var_8 ? var_12 : 4611686014132420608))) ? var_12 : 1));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_4] [i_2] [i_2] [i_1] = (var_10 ^ var_3);
                                var_19 = (55095 ^ 4411);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_2] [i_3] = (i_2 % 2 == 0) ? (max(((((arr_11 [1] [i_3] [i_7]) >> (((arr_17 [i_2 - 4] [i_2 - 4] [i_6 - 1] [i_2] [i_7 + 3] [i_7 + 2] [i_2 - 4]) - 53))))), (arr_16 [i_1] [7] [i_1] [i_1] [4]))) : (max(((((arr_11 [1] [i_3] [i_7]) >> (((((arr_17 [i_2 - 4] [i_2 - 4] [i_6 - 1] [i_2] [i_7 + 3] [i_7 + 2] [i_2 - 4]) - 53)) + 173))))), (arr_16 [i_1] [7] [i_1] [i_1] [4])));
                                arr_25 [i_6] [i_7] [i_1] [i_1] [4] [i_2] [i_2] = (((((((arr_22 [i_7 - 2] [i_7] [i_6] [i_6 - 1]) + 9223372036854775807)) >> (((arr_22 [i_7 - 2] [i_6 - 1] [i_6] [i_6 - 1]) + 6740385362764863112)))) << ((((min(var_6, var_6))) - 67))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_20 = (((max(var_13, (arr_0 [i_8])))) ? (((arr_1 [i_8]) | (arr_29 [i_8] [2] [i_8]))) : ((~((1 ? (arr_0 [i_8]) : var_3)))));
                    var_21 = (arr_0 [i_10]);
                    arr_34 [i_8] [i_8] [i_8] = 37841;
                    arr_35 [i_8] [i_9] [i_8] = ((var_11 > ((1 ? (arr_29 [18] [i_9] [i_8]) : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
