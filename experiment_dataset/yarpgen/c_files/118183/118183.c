/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((-0 ? (((((var_1 ? 227974605 : 227974605))) ? var_13 : var_11)) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_21 |= (max(227974605, ((-227974596 ? 1 : 2242930211))));
                var_22 += (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
