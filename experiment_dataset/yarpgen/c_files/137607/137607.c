/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -3546629208322589789;
    var_16 &= ((!(((-1 ? var_3 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0]);
                var_18 += ((~(--65535)));
            }
        }
    }
    #pragma endscop
}
