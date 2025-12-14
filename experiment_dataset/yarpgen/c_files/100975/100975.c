/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (~6263614596132819707);
                var_16 = (((((-(3543850610 / var_4)))) ? ((max((~var_3), (arr_2 [i_1])))) : (max((arr_4 [i_0 - 3]), 234881024))));
                arr_6 [i_0 - 2] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_17 = (max(var_17, (((((((~382454988) ? -var_5 : 4060086272))) ? var_6 : var_8)))));
    #pragma endscop
}
