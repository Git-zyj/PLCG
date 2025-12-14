/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (~-19821);
                var_16 += var_11;
            }
        }
    }
    var_17 = var_4;
    var_18 = var_4;
    #pragma endscop
}
