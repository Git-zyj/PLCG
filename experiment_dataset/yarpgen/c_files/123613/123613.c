/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? ((((196 ? 1863988896 : 60)))) : var_12));
    var_18 = ((((((max(197, var_9)) >= ((var_7 ? var_13 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 += (~876);
                arr_6 [19] [1] [i_0] = ((-(((arr_3 [i_0]) ? (arr_3 [i_0]) : ((max(196, var_12)))))));
            }
        }
    }
    var_20 = ((var_13 ? (max(var_15, var_13)) : ((((max(208, 86))) ? (max(var_3, var_7)) : var_4))));
    #pragma endscop
}
