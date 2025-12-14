/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_1 & (((var_4 << (var_9 - 47171))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = 71;
                var_12 = (min(var_12, (~32767)));
                var_13 = var_9;
            }
        }
    }
    #pragma endscop
}
