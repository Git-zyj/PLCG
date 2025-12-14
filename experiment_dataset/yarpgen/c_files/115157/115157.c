/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = var_13;
                var_19 *= ((((((arr_3 [i_0 - 2] [i_0 + 2]) ? var_8 : var_13))) ? ((max((arr_0 [i_0 + 1]), var_2))) : ((1599921614 ? 0 : 1))));
            }
        }
    }
    var_20 *= var_5;
    #pragma endscop
}
