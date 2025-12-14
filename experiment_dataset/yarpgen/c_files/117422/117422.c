/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_18 += ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : var_16))) ? (((arr_1 [9]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_1 - 4]))) : (min(var_10, (arr_1 [i_0 + 1])))));
                var_19 = ((-((var_7 ? 0 : (arr_0 [i_0])))));
                var_20 = (min(var_20, (arr_4 [i_1 - 3] [i_0 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_16 [11] [11] [11] [i_2] [17] = arr_13 [i_2] [i_2] [i_3] [10];
                            var_21 = (min(var_21, ((((((var_12 % var_15) ? (~var_7) : (!var_2))) - (arr_9 [i_2] [i_3]))))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_20 [i_2] [i_3] [i_4] [i_2] [i_5] [i_6] [i_6] = (((arr_6 [i_3] [i_3 + 1]) ? (arr_19 [i_2] [i_2 + 1] [15] [i_4] [i_4]) : 4611685468671574016));
                                arr_21 [i_2] [i_2] [i_4] [i_2] [9] = (((((var_3 ? var_5 : -1642984207690261805))) ? var_16 : (((!(arr_18 [13] [i_3] [i_4] [i_5] [i_6] [i_6]))))));
                                arr_22 [i_2 + 1] [i_2] [i_2] [20] [i_2 + 1] [i_2 + 1] [i_2] = (((-(arr_9 [i_2 + 1] [i_2]))));
                                var_22 = arr_14 [i_2] [i_3];
                            }
                        }
                    }
                }
                var_23 = ((~(arr_12 [13])));
                var_24 = var_1;
            }
        }
    }
    #pragma endscop
}
