/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((!((max(-29507, 29)))));
                var_18 = (max((!-32), (!20785)));
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
