/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((0 << (var_12 - 27147)));
                var_19 = (((((min(22898, var_0)) ^ var_9)) - 2080596730));
            }
        }
    }
    var_20 -= var_3;
    #pragma endscop
}
