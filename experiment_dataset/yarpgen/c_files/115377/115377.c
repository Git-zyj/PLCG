/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_10 = (min(var_10, 38));
        var_11 = 1;
    }
    var_12 = ((((min(0, (min(var_6, var_2))))) ? var_2 : var_2));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 += (((~var_4) ? ((min((arr_0 [i_1] [i_1]), -25904))) : (min(-var_6, (((var_1 ? 0 : var_2)))))));
        arr_8 [i_1] = (arr_5 [i_1]);
        arr_9 [i_1] [i_1] = var_1;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] = (min(var_5, (((arr_12 [i_2]) ? (arr_12 [i_2]) : 38))));
        var_14 = (+((((arr_11 [1]) || -var_6))));
        var_15 = (min(((-(arr_10 [i_2] [i_2]))), var_5));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, var_2));
                        var_17 = (max(var_17, ((min((arr_10 [i_4] [i_4]), var_9)))));
                        arr_23 [i_4] [i_4] |= ((((min(((var_9 ? var_1 : var_9)), var_8))) ? ((var_4 ? -var_6 : ((var_4 ? (arr_12 [i_2]) : (arr_10 [i_3] [i_3]))))) : (arr_22 [i_4] [i_5])));
                    }
                }
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
