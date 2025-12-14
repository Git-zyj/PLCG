/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((~82), (((!var_2) << var_3))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 3] [19] [i_2] = var_7;
                    arr_7 [i_0] [i_0] [i_0] = ((!(((max(0, 4290162050))))));
                }
            }
        }
    }
    var_13 = (((!var_9) - ((1 ? var_9 : 127))));
    var_14 &= (max(-66, 157));
    #pragma endscop
}
