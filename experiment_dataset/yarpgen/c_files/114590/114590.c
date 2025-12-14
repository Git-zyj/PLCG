/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (239 - 4294967295);
                var_16 = (min((min((!-6742337170020471692), (min(-1, 561490400)))), (!-6742337170020471692)));
                var_17 = ((~(max((((2574565834 ? 90 : 54))), ((239 ? 557203138969217709 : 3040685825))))));
            }
        }
    }
    var_18 = ((~(~569634245)));
    var_19 = ((-6742337170020471701 ? (max(1, ((6742337170020471713 ? 38 : -557203138969217715)))) : var_13));
    #pragma endscop
}
