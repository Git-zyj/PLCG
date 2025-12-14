/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~((var_4 ? ((var_4 ? var_4 : var_0)) : var_9)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = (((((var_11 ? (arr_2 [3]) : (arr_0 [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [12]))) : (arr_0 [i_0 + 1])));
        arr_3 [i_0] = (((((arr_2 [3]) != (arr_1 [1] [1]))) ? var_9 : (((arr_0 [11]) ? var_1 : var_7))));
        var_16 = ((-var_0 + (arr_1 [3] [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((((-(arr_5 [4] [3] [1]))) != var_13));
                    var_18 = ((+(((arr_4 [i_0] [i_0] [7]) ? var_11 : (arr_8 [i_0] [i_1] [i_2])))));
                    var_19 = (((arr_1 [i_0 + 2] [i_1]) ? (((var_2 ? var_2 : (arr_0 [i_0])))) : (((arr_2 [10]) ? (arr_9 [10]) : var_9))));
                    arr_10 [i_0 - 1] [i_1] [i_2] = (arr_5 [i_0 + 2] [i_2 - 1] [6]);
                }
            }
        }
    }
    var_20 = (((var_11 ? ((var_11 ? var_3 : var_1) : (~var_6)))));
    #pragma endscop
}
