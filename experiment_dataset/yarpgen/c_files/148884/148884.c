/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!1);
    var_16 -= (min(0, 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((((min((arr_2 [i_0] [i_1]), 17179869183)) / (106568496 + -16585))) / (arr_3 [i_2])));
                    arr_9 [i_2] [i_0] [i_2 - 1] = var_10;
                }
            }
        }
    }
    var_18 = ((!(((max(9007199252643840, 4294967291))))));
    #pragma endscop
}
