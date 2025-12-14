/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_8;
    var_20 |= ((var_15 ? ((((((var_7 ? var_7 : 1))) && (var_2 && var_9)))) : ((max(var_11, var_6)))));
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = var_12;
                var_23 = var_1;
            }
        }
    }
    #pragma endscop
}
