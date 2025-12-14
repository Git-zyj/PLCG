/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [8] [i_1] [8] = min(((((5373882365740300663 - 1555997123033934558) ? var_3 : (~-12032)))), var_0);
                    var_11 = ((-((((var_8 <= (arr_0 [i_0] [i_1]))) ? ((45 ? (arr_5 [i_0] [i_1]) : var_3)) : (min(57, var_0))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_12 = 33174;
        arr_10 [i_3] [i_3] = (((var_9 ^ var_4) <= var_4));
    }
    #pragma endscop
}
