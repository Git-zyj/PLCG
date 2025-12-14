/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((~((max(var_9, var_5)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 += 32764;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (max((((((arr_0 [i_1]) ? (-32767 - 1) : (arr_7 [4] [i_2 + 2]))))), ((~(var_12 * var_6)))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_20 -= (max((((-(arr_1 [i_2 + 2])))), var_1));
                        var_21 -= -var_3;
                        var_22 = (~(max((max(var_13, (arr_8 [i_3] [i_2] [1] [23]))), (arr_3 [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_0] = ((1 ? (-32767 - 1) : 1));
                        var_23 = (((((~(-32767 - 1)))) ? var_3 : -32765));
                    }
                    var_24 = ((((((-(arr_7 [17] [1]))))) << (var_6 - 1143277409)));
                }
            }
        }
        arr_16 [i_0] = var_2;
        var_25 += 255;
    }
    var_26 = var_5;
    #pragma endscop
}
