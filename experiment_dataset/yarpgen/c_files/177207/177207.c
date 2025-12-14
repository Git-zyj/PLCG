/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_16;
    var_21 = (~64);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = 243;
                arr_4 [i_0] [i_0] = ((max((min((arr_1 [i_0 - 1]), 191)), ((12 ? 30 : -10)))));
            }
        }
    }
    #pragma endscop
}
