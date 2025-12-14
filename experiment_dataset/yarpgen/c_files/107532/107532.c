/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_3;
                var_18 = var_17;
            }
        }
    }
    var_19 = (((((var_6 ? ((53562 ? var_5 : var_0)) : var_8))) ? var_6 : var_1));
    #pragma endscop
}
