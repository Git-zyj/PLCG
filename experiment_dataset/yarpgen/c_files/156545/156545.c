/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-((var_3 ? var_3 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (((((~var_1) == (3843581544637644864 * var_6))) ? var_3 : ((((arr_3 [i_0] [i_1]) || (arr_0 [i_0]))))));
                var_19 -= ((max((48550 + var_2), ((((arr_2 [1] [12] [1]) >> (6556 - 6532)))))));
            }
        }
    }
    #pragma endscop
}
