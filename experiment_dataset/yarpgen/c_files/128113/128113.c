/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((121 ? var_8 : 94)) <= (((var_12 ? var_11 : 13786)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_0] [15]);
                    var_15 = ((-1 > (((arr_0 [i_0] [i_0]) ? -29433 : (arr_4 [i_1])))));
                }
            }
        }
        arr_9 [i_0] = (((197 | var_10) * var_11));
        arr_10 [15] = (arr_7 [i_0]);
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_16 = (!121);
        arr_13 [12] = ((arr_4 [i_3]) / ((142 ? (arr_11 [i_3 - 1] [i_3 + 1]) : (arr_7 [i_3 - 1]))));
        arr_14 [i_3] [i_3] = ((~((~(arr_11 [5] [i_3])))));
        arr_15 [5] = (max(((~(((18 < (arr_3 [5] [i_3])))))), (min((arr_0 [i_3] [i_3 - 4]), var_6))));
    }
    #pragma endscop
}
