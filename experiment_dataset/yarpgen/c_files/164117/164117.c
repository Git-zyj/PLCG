/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(1, 1))) * (0 * var_7))) ^ var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (((arr_3 [i_1]) ? (min((1813576310145470995 | 24846), var_7)) : (((((var_9 ? 883 : var_3))) ? (16633167763564080621 | 1) : 1))));
                var_12 = ((64653 ? -344457594 : 41));
                var_13 -= (((((arr_2 [i_0 + 4] [i_0 + 4]) ? var_8 : var_4))) + (((arr_3 [i_0]) + (var_7 - var_1))));
            }
        }
    }
    #pragma endscop
}
