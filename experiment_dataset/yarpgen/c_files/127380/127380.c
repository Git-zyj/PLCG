/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_12, var_11))) ? (min(var_8, var_2)) : -3742470880971327187)) << (((min(var_6, ((var_13 ? var_5 : var_3)))) + 104))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_12;
                var_16 &= var_9;
            }
        }
    }
    #pragma endscop
}
