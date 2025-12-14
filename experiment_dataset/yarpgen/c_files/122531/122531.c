/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((1023 != 13162) - var_11));
                var_18 = (max(var_9, var_4));
                var_19 = (min((-16 ^ var_15), -27490));
            }
        }
    }
    var_20 = (min(89, var_8));
    #pragma endscop
}
