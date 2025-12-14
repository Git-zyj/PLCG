/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (max((((arr_0 [i_0]) ? var_6 : (max(var_8, var_5)))), ((var_9 ? ((var_3 ? (arr_3 [13]) : var_13)) : (arr_0 [i_0])))));
                arr_8 [i_0] [i_0] [i_1] = var_10;
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = arr_9 [i_2] [i_2];
        var_17 ^= var_5;
        var_18 = ((min((((!(arr_3 [i_2 + 1]))), var_7))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_4] [i_3] = (((arr_16 [5] [i_3 - 1] [i_3 - 1]) ? (max(var_11, (((var_8 ? (arr_16 [10] [i_4] [i_5]) : var_10))))) : (arr_10 [i_5])));

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_19 = ((var_4 ? var_6 : var_1));
                        arr_23 [i_3] [i_4] [i_4] [i_4] = (min((((-(arr_20 [i_3] [i_3] [i_3 + 1] [i_3])))), var_5));
                    }
                }
            }
        }
        var_20 = ((!(arr_22 [i_3] [i_3] [i_3] [1] [i_3])));
    }
    #pragma endscop
}
