/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(-var_1, (((var_12 ? var_1 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = arr_4 [i_0] [i_1] [i_0] [i_1];
                                var_15 = ((~((1 ^ (~var_1)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_14 [i_0] [i_0] [i_1] [i_5] = (min(((7 ? (arr_13 [13] [i_1] [i_5]) : (arr_13 [i_0] [i_1] [i_5]))), ((((max(var_9, (arr_10 [i_0] [i_1] [i_0] [i_0] [i_5] [1]))))))));
                    arr_15 [i_0] [0] [i_1] [i_0] = (((arr_9 [i_0] [1] [i_5] [i_1] [i_0]) - (max((arr_9 [i_0] [i_1] [i_5] [i_1] [i_5]), (arr_9 [i_0] [i_5] [i_0] [i_1] [i_0])))));
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    arr_18 [i_0] [i_0] [i_6] [i_6 - 1] = var_10;
                    var_16 = arr_9 [i_0] [i_1] [i_6] [i_6] [13];
                    var_17 &= (((((((-(arr_1 [i_1])))) ? (((!(arr_6 [i_1] [i_1] [i_6])))) : (((arr_9 [i_1] [i_0] [i_1] [0] [i_6]) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_2 [i_0] [i_1])))))) ? (((arr_9 [i_1] [i_1] [i_1] [i_0] [i_1]) ? ((((!(arr_8 [i_6] [i_1] [i_1] [i_1]))))) : (arr_13 [i_0] [9] [i_6]))) : ((-((var_11 ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1]))))));
                    arr_19 [i_1] [i_6] &= arr_17 [i_0] [i_0] [i_0];
                    arr_20 [i_0] [i_1] [i_1] = (max((((max(1, 5612603524107961748)) <= (((1 ? 1 : 16))))), ((!(((1 ? (arr_13 [i_6 - 1] [i_1] [i_0]) : var_2)))))));
                }
                var_18 = ((((-(((1 <= (arr_0 [i_0] [i_0])))))) == (max((var_11 % var_5), (arr_11 [i_0] [i_0] [i_0] [i_1])))));
                var_19 = (min(var_19, (min((arr_1 [i_1]), (arr_11 [i_0] [i_0] [i_1] [4])))));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
