/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 4] = ((-(arr_0 [i_0] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [4] = (arr_4 [i_0] [i_1] [i_1]);
                    arr_10 [i_1] = ((!(arr_1 [7])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_0 [8] [i_4]) & ((~(arr_6 [i_2])))));
                                var_12 = ((~((((arr_15 [i_0 + 3] [5] [i_1] [i_0 + 3] [i_3] [1] [i_4]) || (arr_0 [i_0] [i_1]))))));
                                var_13 = (((((~(arr_1 [i_0])))) ? ((((!(arr_15 [4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0 - 1]))))) : (arr_14 [10] [i_1] [i_1] [i_1] [i_1] [1])));
                                arr_17 [6] [6] |= (((arr_1 [i_2]) == (((arr_3 [i_3] [i_2]) / (arr_5 [i_0] [i_1] [i_3] [3])))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = (((((arr_1 [2]) & (arr_4 [i_0] [i_0 + 1] [10]))) < (arr_15 [i_0] [13] [i_0 - 2] [i_0 + 4] [7] [3] [i_0 + 4])));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 + 1] [i_5] = (arr_14 [i_5] [2] [14] [14] [i_5] [4]);
        var_14 &= (((arr_5 [i_5] [i_5 - 2] [1] [5]) && (((~(arr_14 [i_5 + 2] [i_5] [1] [i_5] [i_5] [i_5 - 3]))))));
    }
    var_15 = (min(var_15, (((var_4 - var_9) | var_5))));
    var_16 = var_0;
    #pragma endscop
}
