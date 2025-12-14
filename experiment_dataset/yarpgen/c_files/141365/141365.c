/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141365
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
                var_10 = -710320861;
                var_11 = (((~var_3) ? (30 ^ 23006) : (~3446464054124485890)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            {
                arr_11 [i_2] [5] = ((((((((50 << (2139240039883740937 - 2139240039883740915)))) ? (2466001550 | 7323) : 1))) ? ((((0 << (1031980845 - 1031980830))) | 8599)) : (!1031980824)));
                arr_12 [i_2] [i_2] &= ((-1 && (((var_8 ? var_2 : var_8)))));
            }
        }
    }
    #pragma endscop
}
