/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (((((((arr_3 [i_0] [i_0] [i_0]) != (70368744177536 != 4294889926))))) >= 133697933));
                var_15 *= 211756186;
            }
        }
    }
    var_16 = var_11;
    var_17 = 2016769703;
    #pragma endscop
}
