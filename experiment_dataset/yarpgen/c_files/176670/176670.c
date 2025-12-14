/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [4] [i_1] [6] [9] = (((var_8 * var_0) ? (max((((arr_5 [i_3] [i_2] [i_1]) / (arr_0 [i_0] [9]))), 16)) : (((((((arr_0 [4] [i_2]) / var_5))) ? 66 : (arr_1 [i_0] [i_0]))))));
                        var_14 = (var_2 && 131071);
                        var_15 = var_6;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((var_11 ? (~var_2) : (max(var_6, var_2))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_16 = var_3;
                    var_17 = var_9;
                    var_18 ^= var_9;
                    var_19 = (min(var_19, ((((var_5 <= (arr_15 [i_4] [1] [i_6]))) ? 786289914 : ((var_4 ? (arr_12 [i_4] [i_4]) : var_8))))));
                }
            }
        }
        arr_19 [i_4 - 1] = var_5;
        arr_20 [i_4 + 1] [14] = (((var_0 && (arr_14 [i_4]))));
        var_20 = (((arr_16 [i_4 + 1]) - (arr_16 [i_4 - 2])));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((var_2 && (((arr_21 [i_7]) || (-9223372036854775807 - 1)))));
        var_21 ^= var_11;
    }
    #pragma endscop
}
