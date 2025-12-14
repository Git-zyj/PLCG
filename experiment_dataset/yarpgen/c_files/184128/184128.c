/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 2346210494;
                var_21 = max((3170513385 + 0), (arr_2 [i_0] [i_0]));
            }
        }
    }
    var_22 *= var_3;
    #pragma endscop
}
