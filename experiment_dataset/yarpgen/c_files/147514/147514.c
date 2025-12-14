/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2 - 2] = (arr_0 [i_0] [i_0]);
                    var_20 = (min(var_20, ((max((((arr_3 [i_2 + 2] [i_2 + 2] [1]) ? (arr_3 [i_2 + 2] [14] [i_2]) : (arr_3 [i_2 + 2] [i_2] [i_2 - 2]))), ((var_11 ? (arr_6 [i_2 + 2]) : (arr_3 [i_2] [i_2 - 2] [i_2 - 1]))))))));
                }
            }
        }
    }
    var_21 = (min(var_21, ((((var_19 - var_8) ? ((((var_9 ? var_6 : var_14)) << (var_3 + 51))) : var_11)))));
    var_22 = ((!(((var_0 ? var_8 : ((var_19 ? var_1 : var_8)))))));
    #pragma endscop
}
