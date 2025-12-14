/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 |= (max((min((arr_2 [i_1] [i_1] [i_1]), var_3)), var_15));
                var_21 -= 1;
            }
        }
    }
    var_22 = var_9;
    var_23 = var_10;
    #pragma endscop
}
