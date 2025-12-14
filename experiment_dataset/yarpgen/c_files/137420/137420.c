/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_9, (var_18 || 1)))) && -81));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [9] = (~4294967295);
                var_20 ^= (((((arr_1 [i_0 - 2]) ? -1357449113 : 8114935976231326412)) != (min((arr_1 [i_0 - 1]), var_17))));
            }
        }
    }
    #pragma endscop
}
