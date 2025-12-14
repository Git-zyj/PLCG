/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 -= (arr_0 [4]);
                    var_18 = (var_12 == var_2);
                }
            }
        }
        var_19 = (max(var_19, ((((arr_4 [i_0] [i_0] [6]) ? (arr_4 [i_0] [i_0] [8]) : var_2)))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [4] &= (((var_15 ? 1 : -19302)));
        var_20 = var_1;
    }
    var_21 = (min(var_21, var_16));
    var_22 = (min(-19302, -19309));
    var_23 = (min(var_23, (((+((((!1) < ((var_12 ? var_10 : var_5))))))))));
    #pragma endscop
}
