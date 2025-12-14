/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((var_9 + 12968733616461145813), (var_11 - var_8)));
                var_15 = (max(var_15, ((((((var_6 ? var_3 : var_2))) ? (!var_1) : ((var_5 ? var_4 : var_1)))))));
                var_16 = (((0 ^ var_9) ? ((((min(12968733616461145813, var_12))) ? ((var_4 ? var_11 : 32165)) : ((12968733616461145812 ? 20 : 0)))) : 1));
                var_17 = var_5;
            }
        }
    }
    var_18 = ((1 ? -var_5 : var_7));
    var_19 = 6322;
    #pragma endscop
}
