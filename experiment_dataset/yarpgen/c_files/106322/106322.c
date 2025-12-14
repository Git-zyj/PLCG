/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? var_9 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(1538152665568109186, ((1961158959 ? (max((arr_2 [i_1]), var_10)) : var_1))));
                arr_5 [i_0] [14] |= (min((~var_10), ((~(arr_1 [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
