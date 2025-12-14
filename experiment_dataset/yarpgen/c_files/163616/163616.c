/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((17583596109824 - var_8) ? var_11 : (arr_3 [i_0] [i_1] [i_1]))));
                var_15 = -6860619808088606825;
                var_16 = ((((arr_1 [i_0 - 1]) | (arr_1 [i_0 + 1]))));
                var_17 -= 225;
            }
        }
    }
    var_18 = (((58 && var_11) || ((((var_0 ? var_1 : var_3))))));
    #pragma endscop
}
