/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (((var_1 == ((var_15 ? 127 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_8));
                var_22 = (max((151 - var_9), (((arr_3 [i_0 + 2] [i_1]) & (!var_3)))));
                var_23 = (max(var_23, var_13));
            }
        }
    }
    #pragma endscop
}
