/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = ((var_1 ? var_4 : ((var_0 ? var_9 : var_5))));
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = var_8;
                var_19 = (arr_2 [i_1] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
