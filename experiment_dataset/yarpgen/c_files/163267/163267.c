/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((-(((var_9 / -741190080) ? ((min(var_5, (arr_3 [2])))) : var_8)))))));
                var_13 = ((-18 ? var_0 : var_0));
                arr_4 [1] [8] [8] = (min(((5174 & ((71 ? var_10 : var_5)))), (((((65530 ? var_9 : var_7)) < (min(var_1, var_4)))))));
            }
        }
    }
    var_14 = (max(-460847972, ((var_6 ? (((var_8 ? var_8 : var_7))) : var_1))));
    #pragma endscop
}
