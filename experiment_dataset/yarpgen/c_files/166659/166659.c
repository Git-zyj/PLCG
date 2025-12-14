/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 &= (arr_5 [4] [i_1 + 1] [i_1 + 1] [4]);

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        arr_10 [i_0] [6] [i_1] [2] [2] [2] = (((((-(arr_6 [i_0 + 1] [i_1 - 3] [i_3 + 3] [i_1 - 3])))) || (arr_8 [i_1] [i_1] [i_2 - 1])));
                        var_12 += ((((-(arr_7 [4] [4] [4] [i_0 + 1])))) ? ((((arr_4 [i_0]) && (arr_2 [i_2] [i_1])))) : (((arr_0 [i_1 - 1] [i_0 + 1]) / (arr_0 [i_1 - 4] [i_0 + 1]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        arr_13 [4] [i_1] = ((1 ? var_1 : 1));
                        var_13 |= 172;
                        arr_14 [i_1] [i_2 - 2] = (((arr_0 [i_2] [i_2]) | var_6));
                        var_14 = (~var_10);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_15 = ((1 ? (arr_4 [i_0]) : var_10));
                        arr_18 [i_1] [i_1] = (max(var_1, var_8));
                        var_16 = (((((arr_3 [i_0 + 2] [i_1 - 2] [i_1]) % 83)) / ((-(arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_0] [i_1])))));
                    }
                    var_17 = (arr_16 [i_0] [i_1] [i_0] [i_1 - 3] [i_0] [i_1]);
                    var_18 = (min(var_18, ((max((max(var_6, (arr_9 [i_0 + 2] [i_1] [2]))), (((!((((arr_7 [1] [2] [1] [i_0]) ? (arr_9 [i_2] [i_1] [i_2]) : var_3)))))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_19 = min(((((((arr_19 [i_6]) / var_4))) ? ((min((arr_25 [i_6 + 2] [i_6 + 2] [i_8]), (arr_26 [i_8] [i_8] [i_8] [i_7])))) : (max((arr_21 [i_6]), (arr_19 [i_7]))))), (arr_19 [i_6 + 2]));
                    var_20 = (((-(arr_19 [i_6]))));
                    arr_27 [i_7] [i_8] = min((((arr_25 [i_6 + 1] [10] [i_8]) - (arr_25 [i_6 + 1] [i_7] [i_6 + 1]))), ((-(arr_19 [i_6 + 1]))));

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_21 = (min(var_21, ((((((arr_23 [i_6 - 1]) <= (arr_26 [16] [i_9] [i_9 + 1] [i_6 - 1])))) | (arr_21 [i_6 + 2])))));
                        var_22 = ((-((max((arr_23 [i_9 - 1]), (arr_23 [i_9 - 1]))))));
                        var_23 = 2147483647;
                    }
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
