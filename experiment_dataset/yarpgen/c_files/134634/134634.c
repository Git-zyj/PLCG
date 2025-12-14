/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_1;
    var_13 = 13664494692408489506;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-((-25845 / (~7683725568916261996)))));
                arr_5 [2] [i_1] = ((!(((arr_3 [i_0]) == (max(13664494692408489506, var_4))))));
                var_14 = 81;
                var_15 = 54;
            }
        }
    }
    #pragma endscop
}
