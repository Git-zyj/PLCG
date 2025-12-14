/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = var_15;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 *= ((5706 ? (var_6 < 1) : (~var_7)));
                        arr_12 [i_0] [i_0] [i_2] = (!var_15);
                    }
                }
            }
        }
        arr_13 [4] [4] = ((~((var_9 ? (arr_5 [i_0] [i_0]) : var_4))));
        var_22 = var_9;
    }
    var_23 = (!((max(var_17, var_10))));
    #pragma endscop
}
