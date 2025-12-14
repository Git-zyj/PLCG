/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((((var_14 ? var_13 : var_14)) - (var_15 / var_15)))) ? ((var_3 ? (var_4 | var_8) : (((var_6 ? var_13 : var_9))))) : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 += (arr_4 [i_0]);
                arr_6 [i_0] [i_1] = ((((((arr_0 [i_1]) - (arr_0 [i_0])))) ? (((arr_0 [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_0 [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
