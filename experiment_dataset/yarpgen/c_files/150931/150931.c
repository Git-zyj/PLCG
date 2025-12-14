/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((var_5 && var_14), 11612464752694653878)) * var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = (((arr_3 [i_2 - 2] [i_2 - 1] [i_2 - 2]) ? ((((1 > (arr_0 [i_0]))))) : (((arr_5 [i_0] [i_2 + 1] [i_0]) ? (arr_0 [i_2 + 1]) : var_8))));
                        var_20 += (var_12 ? (arr_4 [i_0 - 2] [i_2]) : (-9223372036854775807 - 1));
                        var_21 = (min(var_21, (((var_12 ? var_4 : 131072)))));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_22 = (min(var_22, (!var_15)));
                            var_23 = 1713105494;
                        }
                        arr_13 [i_0 - 1] [i_2] [i_2] [i_3] &= arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1];
                    }
                }
            }
        }
    }
    var_24 = -22014;
    #pragma endscop
}
