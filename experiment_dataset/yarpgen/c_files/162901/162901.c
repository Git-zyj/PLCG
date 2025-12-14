/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (((((((var_15 == (arr_1 [3]))) ? 0 : (((0 ? -1280362285 : var_13)))))) ? (((((!var_14) || (arr_2 [i_0 - 1]))))) : var_9));
                var_17 = var_6;
            }
        }
    }
    var_18 = var_4;
    var_19 = (((!var_3) ? ((var_5 ? var_9 : var_6)) : ((((var_4 ? var_10 : 127)) & ((var_1 ? var_15 : -1280362285))))));
    #pragma endscop
}
