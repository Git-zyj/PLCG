/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_20 = (max((((arr_5 [i_0]) ? (((arr_0 [4] [11]) ? (arr_0 [12] [8]) : (arr_3 [i_1] [1]))) : (arr_6 [10] [i_1] [i_0 + 4]))), ((((((arr_5 [1]) ? (arr_5 [13]) : (arr_0 [0] [0])))) ? (((arr_1 [i_0 + 4]) ? (arr_7 [1] [i_0] [i_0] [15]) : (arr_1 [i_0]))) : (((arr_1 [i_0 + 2]) ? (arr_1 [12]) : (arr_3 [6] [i_2 + 1])))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (((((arr_4 [i_0] [13] [13]) ? (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_6 [i_0 + 1] [i_1] [i_2 + 2])))) ? (((arr_7 [i_0] [i_1] [i_1] [i_3 - 1]) ? (arr_2 [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [5] [i_1]))) : (((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [1] [1] [i_0]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_2 - 2] [i_1] [i_0]))));
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_3] [i_2 - 1] [i_3] = (arr_5 [i_0 - 2]);
                        arr_11 [i_0 - 1] [i_3] [11] [i_3] = (arr_7 [3] [i_2] [i_2] [i_3 - 1]);
                    }
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, ((min((arr_8 [i_0] [i_0] [i_1] [i_1] [i_4]), (arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [1] [i_1] [i_6] [13] [i_6] [8] = (arr_18 [i_0] [i_1] [6] [i_5] [i_6] [i_1]);
                                var_23 = min((arr_18 [i_1] [i_1] [i_1] [i_5] [i_6] [15]), (((((90 ? -1019998484 : (arr_8 [i_0] [i_6] [i_6] [i_4] [i_6])))) ? (((arr_9 [i_0] [i_1] [i_4] [i_4 - 1] [9] [i_6]) ? (arr_7 [i_0] [i_4] [i_5] [i_5]) : (arr_7 [8] [8] [8] [i_6]))) : (arr_13 [i_6]))));
                                var_24 &= (((arr_1 [i_6]) ? (((((arr_13 [i_6]) ? (arr_6 [i_0] [i_5 - 3] [i_4]) : (arr_13 [i_5]))))) : (arr_6 [i_4] [i_5] [i_6])));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_25 = (min(11, (arr_1 [i_1])));
                    arr_23 [14] = (arr_14 [i_1] [1]);
                    var_26 = ((((arr_0 [i_7 + 2] [i_1]) ? (arr_17 [10]) : ((min((arr_9 [i_0] [i_0] [i_0] [1] [3] [i_7 - 1]), (arr_8 [1] [1] [i_7] [i_7] [i_7 + 1])))))));
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] [i_8 - 1] = arr_26 [1] [2] [i_8] [i_9];
                            arr_29 [3] [i_0 - 2] [i_0 - 2] = arr_15 [i_9] [i_1] [i_1] [i_0];
                            arr_30 [i_9] [10] [i_8] [i_1] [i_0] = (arr_15 [i_8 - 1] [i_1] [i_8] [i_1]);
                        }
                    }
                }
                var_27 -= (((arr_8 [i_0] [i_1] [i_1] [i_0 + 1] [i_1]) ? (arr_0 [i_0] [i_0]) : (max((arr_18 [4] [i_0] [i_0] [i_0 + 3] [i_0] [i_1]), (arr_7 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))));
            }
        }
    }
    var_28 = (min(var_28, var_5));
    var_29 = ((var_2 ? var_13 : var_0));
    var_30 = ((var_4 ? ((min(var_17, var_16))) : var_14));
    var_31 = var_8;
    #pragma endscop
}
