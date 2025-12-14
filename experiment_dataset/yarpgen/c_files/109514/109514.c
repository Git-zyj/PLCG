/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? var_1 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((((((((-127 - 1) + 2147483647)) >> 20))) - 20));
                var_18 ^= arr_2 [i_0] [i_1];
                var_19 = (min(13, 8301));
            }
        }
    }
    #pragma endscop
}
