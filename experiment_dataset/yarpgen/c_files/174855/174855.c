/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((arr_3 [i_0]) ? 35742 : ((((18582 & 171) & ((var_2 ? var_0 : 167)))))));
                var_19 = (min(171, ((171 ? 4096 : 14814))));
            }
        }
    }
    var_20 = var_0;
    var_21 = var_6;
    var_22 = ((min((max(var_9, var_6)), var_7)));
    #pragma endscop
}
