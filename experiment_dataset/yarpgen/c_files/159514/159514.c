/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((((((2559081594 ? 0 : 8650096894325173256)))) ? (((0 ? 119 : 0))) : ((187 ? 1735885701 : 1451464849))));
                    arr_10 [i_1] [i_2] = ((min(var_1, (arr_8 [i_0] [i_1]))));
                }
            }
        }
    }
    var_20 = ((!(((var_6 << (var_14 - 64550))))));
    var_21 = var_17;
    #pragma endscop
}
