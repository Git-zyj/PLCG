/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 &= -7920265111500054107;
                var_16 ^= (min(((min(64, (arr_3 [i_0] [i_1] [i_1])))), (min((arr_2 [i_0] [i_1] [i_1]), var_11))));
            }
        }
    }
    var_17 = ((var_2 <= (~7920265111500054106)));
    #pragma endscop
}
