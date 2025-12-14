/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [12] = ((+(min((arr_4 [i_2] [i_2] [i_2]), var_8))));
                    var_20 *= var_6;
                    var_21 = (((arr_0 [i_1] [i_1]) ? ((min((min(var_9, var_3)), var_11))) : ((var_0 ? var_10 : (min((arr_4 [i_0] [i_0] [i_2]), var_18))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_3] = ((var_7 ? var_12 : var_14));
                        var_22 = (((~var_18) ? (arr_5 [i_0] [i_1 - 1] [i_2] [i_3 - 1]) : -var_0));
                        var_23 = var_5;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [0] [i_4] = var_3;
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] = var_0;
                    }
                    arr_14 [i_0] [i_1 - 1] [i_2] [i_2] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
