/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(var_19, var_1));
                var_20 *= (-33 ^ -268435456);
            }
        }
    }
    var_21 *= ((((198 / ((var_16 ? 31 : var_13)))) - (max(var_9, 549621596160))));
    var_22 = (var_7 <= -var_4);
    #pragma endscop
}
