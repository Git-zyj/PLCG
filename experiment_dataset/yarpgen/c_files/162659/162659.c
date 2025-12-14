/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_12 ^= ((((((arr_0 [i_0 - 1]) ? ((var_9 ? (arr_7 [i_0 - 1] [i_2] [i_2] [i_4]) : (arr_0 [i_0]))) : var_1))) ? (((arr_2 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_2]))) : ((((arr_0 [6]) ? 41828 : (((arr_11 [i_1] [i_1] [1] [i_3] [i_4]) | var_6)))))));
                            arr_13 [i_0] [i_2] [i_3] = ((718021550 ? (arr_8 [i_0 - 1] [i_1]) : var_10));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_13 = ((-(((var_9 == (arr_2 [i_0]))))));
                            arr_16 [i_0] = var_1;
                            var_14 += 1;
                            var_15 = min((arr_0 [i_1]), (arr_5 [i_1]));
                            var_16 = var_9;
                        }

                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_17 = arr_17 [i_0];
                            var_18 = (var_6 ? var_2 : (arr_7 [i_2] [i_0] [i_0] [i_2]));
                            arr_19 [i_0 - 1] [i_0 - 1] [i_0] = 0;
                            var_19 = (((arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [8]) ? (arr_17 [i_0]) : 148));
                            arr_20 [i_1] [i_0] [i_0] [i_0] [i_0] = (((arr_10 [i_3 + 1] [i_1] [8] [1] [i_0 - 1] [i_6]) ? (((arr_10 [i_3 - 1] [0] [i_2] [i_3] [i_0 - 1] [12]) ? var_8 : var_6)) : (max((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_0 - 1] [1]), (arr_10 [i_3 - 1] [19] [i_2] [i_3] [i_0 - 1] [10])))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_20 = var_8;
                            arr_23 [i_0] [i_3] = ((((arr_8 [i_3 - 1] [i_0 - 1]) != (arr_3 [0] [i_0]))) ? ((((!(arr_18 [i_7] [i_0] [i_0]))))) : (arr_5 [i_1]));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_31 [i_0] = min(((!(arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((arr_0 [i_0 - 1]) >= ((var_1 ? var_10 : var_9)))));
                    var_21 = var_2;
                }
            }
        }
    }
    var_22 = (((((-9223372036854775807 - 1) ? var_8 : var_2)) ^ var_0));
    var_23 = ((((((4294967295 ? var_6 : var_3)))) / (min(var_6, ((var_6 ? 1 : var_10))))));
    #pragma endscop
}
