/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(32768, var_12))));
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((~((1 ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 - 1])))));
                arr_8 [i_0] [i_0] [i_0] = ((min((18009092115524769696 + -2635696186246627823), (arr_1 [i_0]))));
                var_18 = 125;
            }
        }
    }
    #pragma endscop
}
