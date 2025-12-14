/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] &= (arr_2 [i_0] [i_0]);
                var_15 = (-(((arr_1 [i_1]) + (arr_0 [i_0] [i_0]))));
                arr_5 [i_0] = ((((((arr_2 [i_0] [i_1]) ? ((min(var_5, var_9))) : ((max((arr_3 [i_0] [i_1] [9]), var_6)))))) ? (!109) : (arr_1 [i_1])));
            }
        }
    }
    var_16 = ((!(((var_10 ? var_13 : -var_1)))));
    var_17 = (var_8 ? (((var_10 < ((1074397956618245812 ? 46 : 255))))) : (((((var_1 ? var_5 : var_7)) < ((var_6 >> (var_9 - 189)))))));
    #pragma endscop
}
