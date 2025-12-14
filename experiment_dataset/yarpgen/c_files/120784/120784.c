/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((-4294967295 ? ((4294967295 ? 10530796484148238854 : 9936)) : ((-(arr_3 [i_0])))));
                arr_9 [i_1] = ((var_5 / (min((max((arr_6 [i_1]), 11)), (32767 > -1501247095525064754)))));
                var_12 = 4294967271;
                arr_10 [i_1] = var_9;
            }
        }
    }
    var_13 = min((((4294967273 & var_0) ^ (~1))), var_9);
    #pragma endscop
}
