/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_3, (((var_10 - var_13) | (var_4 && var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [14] [i_0 - 2] = (-64082 > (((~(~64102)))));
                var_16 = (min((arr_0 [i_0]), 34));
            }
        }
    }
    var_17 = (((((((min(64082, var_6))) ? (~1454) : 1466))) ? (var_6 / 2075069815351774449) : ((max(-var_9, 1023)))));
    #pragma endscop
}
