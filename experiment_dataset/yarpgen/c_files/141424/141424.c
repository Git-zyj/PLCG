/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min(-564146717, (min(var_9, 221800926)))))));
                var_13 -= (min((((arr_1 [i_1]) ? (arr_0 [i_0]) : (!var_9))), ((var_3 ? (arr_4 [i_0]) : (arr_4 [i_1])))));
            }
        }
    }
    var_14 *= ((16368 ? (-32767 - 1) : -16368));
    #pragma endscop
}
