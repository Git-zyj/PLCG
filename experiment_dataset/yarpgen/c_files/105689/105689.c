/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_1] = (min((max(-6868291007960905652, 8149987954413515000)), var_6));
                    var_20 = var_9;
                    arr_9 [i_1] = (arr_1 [i_1]);
                    var_21 = (max((arr_5 [i_1 + 3] [i_2] [i_2]), (((arr_3 [i_1 + 3] [i_2]) ? (arr_3 [i_1 - 1] [i_2]) : (arr_3 [i_1 + 3] [i_1 + 1])))));
                    var_22 = (max(8149987954413514999, -1815186497));
                }
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}
