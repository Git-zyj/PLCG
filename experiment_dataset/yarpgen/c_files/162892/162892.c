/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))) ? ((-347 ? var_2 : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))), (!19286)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((((min(var_5, var_0))) >= (((arr_1 [i_0] [i_1]) / 65530))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((((-8 ? (min(var_10, 1)) : ((~(arr_11 [i_0] [1] [i_2] [i_3] [i_4])))))), (min((min(var_2, var_6)), (((var_5 ? var_4 : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]))))))));
                                var_12 *= ((((var_0 / (arr_9 [i_0] [i_1] [i_4] [i_3] [i_4]))) * (((((var_9 ? 1191 : (arr_13 [1] [i_1] [13] [i_0] [i_4] [i_1] [i_2])))) * ((var_0 ? (arr_0 [i_4] [i_4]) : var_10))))));
                                arr_15 [i_0] [i_0] [i_0] &= ((((min(var_6, var_0))) ? (~2603965513728316959) : 36028797018963968));
                                var_13 ^= var_5;
                            }
                        }
                    }
                }
            }
        }
        var_14 = (max(((((min((arr_0 [i_0] [i_0]), (arr_6 [i_0])))) - 1015830179)), ((8829953328624741989 ? ((min(var_11, var_11))) : (arr_1 [i_0] [i_0])))));
    }
    var_15 = 205;
    #pragma endscop
}
