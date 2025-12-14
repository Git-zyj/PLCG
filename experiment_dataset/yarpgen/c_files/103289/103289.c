/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((~(~var_10))))));
    var_15 = (min(var_3, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = 6740082702356642758;
                var_17 = 20432;
            }
        }
    }
    #pragma endscop
}
