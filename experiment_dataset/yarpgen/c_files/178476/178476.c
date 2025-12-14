/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = var_2;
                var_11 = (max(var_11, var_2));
            }
        }
    }
    var_12 *= ((59282 ? 1 : var_1));
    var_13 = 0;
    #pragma endscop
}
