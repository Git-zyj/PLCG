/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((var_11 ? ((2337220366 ? var_2 : var_7)) : ((2147483647 ? var_2 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_13 ^= ((var_1 & (min((arr_5 [2] [2] [2]), var_9))));
                var_14 ^= var_3;
            }
        }
    }
    #pragma endscop
}
