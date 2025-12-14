/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((21 < var_13) || var_0))) | (min(var_9, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((78 ? var_9 : ((480 ? 5 : -1082946331))));
                arr_8 [i_0] = (((((arr_4 [i_0 + 1] [i_0 + 2]) ^ var_12)) >> (var_12 - 119)));
            }
        }
    }
    #pragma endscop
}
