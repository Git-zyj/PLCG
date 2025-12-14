/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 -= (+((-4 ? (3 - 1) : 1)));
                var_20 = ((39 ? (((-326846885 ? 16403 : -5793858465652286004))) : (((min((arr_0 [i_0] [i_1]), var_18)) ^ -101))));
            }
        }
    }
    var_21 = 4;
    #pragma endscop
}
