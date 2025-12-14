/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 262143;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(-15, (arr_1 [i_0])));
        var_18 = (min(((((arr_1 [i_0 + 2]) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0] [i_0 - 1])))), var_7));
        var_19 = var_2;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = (arr_5 [i_1] [i_1] [i_1]);
                    var_21 = ((+(min((arr_4 [i_3 + 1] [i_3] [i_3]), var_13))));
                }
            }
        }
    }
    var_22 = (max(var_14, var_9));
    var_23 = (min(var_23, (((!262143) ? (~-1089162555) : ((-(4054605900 & var_5)))))));
    #pragma endscop
}
