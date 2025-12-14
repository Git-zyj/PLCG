/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_0] = arr_1 [i_0];
                    var_20 = (max(var_20, (arr_3 [i_1 + 2] [i_1 + 2] [0])));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [6] [6] [i_2] [6] &= (((((arr_9 [i_0] [14] [14] [i_0]) ? (arr_8 [i_0] [4] [i_0] [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_3]) : (arr_7 [i_2]));
                        arr_11 [i_0] [i_0] [i_2] [i_0] = (((((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [14])))) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_4 [i_3] [13] [i_3])))) ? (((((1 ? (arr_2 [i_0] [i_1 + 1]) : 3111727876))) ? (arr_2 [i_0] [i_0]) : (((arr_9 [0] [i_0] [i_0] [i_0]) ? (arr_8 [3] [i_0] [i_2] [1]) : (arr_5 [i_0] [i_1 - 2]))))) : ((((((arr_8 [i_3] [i_0] [i_0] [8]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_1 [i_0])))) ? (arr_3 [i_1] [i_1] [i_1]) : ((((arr_0 [i_0]) ? (arr_9 [i_0] [i_1 - 3] [i_0] [i_3 - 1]) : (arr_5 [i_1] [i_2]))))))));
                        var_21 |= (arr_4 [i_2] [i_2] [8]);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 ^= (arr_2 [i_0] [i_0]);
                        arr_14 [i_0] [6] [i_0] [i_4] = (arr_0 [5]);
                        var_23 = (min(var_23, ((((arr_12 [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_4 [i_4] [i_2] [i_0]) : (arr_8 [i_0] [i_4] [i_0] [i_0]))) : (arr_5 [i_4] [i_0]))))));
                        var_24 = (((((1828787875 ? -9289 : -5629375604383051237))) ? (arr_2 [i_0] [i_1]) : (arr_12 [i_0])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_25 |= (arr_7 [i_0]);
                            arr_18 [i_0] [1] [5] [i_0] [i_0] [i_0] = arr_1 [i_0];
                        }
                    }
                }
            }
        }
        var_26 *= (((arr_4 [12] [1] [12]) ? (((arr_13 [1]) ? ((((arr_16 [2]) ? (arr_8 [6] [2] [i_0] [i_0]) : (arr_4 [i_0] [0] [0])))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_1 [10])));
    }
    var_27 = ((((((((var_12 ? var_1 : var_5))) ? var_18 : ((var_14 ? var_14 : var_6))))) ? (((((var_0 ? var_18 : var_17))) ? ((var_12 ? var_7 : var_19)) : var_9)) : var_14));
    #pragma endscop
}
