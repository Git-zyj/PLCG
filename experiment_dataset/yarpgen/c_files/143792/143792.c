/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, -126877135702713111));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((~(arr_3 [i_1 - 1])));
                var_20 = (min(var_20, var_15));
                arr_5 [i_0] [i_0] [i_1] = (~(arr_2 [i_0] [i_0] [i_1]));
                var_21 = var_11;
            }
        }
    }
    var_22 = 92;
    #pragma endscop
}
