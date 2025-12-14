/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = var_2;
                var_21 *= (!var_1);
            }
        }
    }
    var_22 = -793181076;
    var_23 -= var_10;
    #pragma endscop
}
