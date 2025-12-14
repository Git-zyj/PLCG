/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_3 < var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((var_15 & ((1 ? 1 : var_11))));
        var_18 = ((!(arr_2 [1] [16])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_3] [12] [i_3] = 31;
                        var_19 -= 1643997978966302390;
                        var_20 = (((~var_2) ? 4294967295 : (((~(max(var_6, -20200)))))));
                    }
                    arr_16 [i_3] = ((20199 ? ((-(250 * var_14))) : -var_9));
                    arr_17 [i_3] [1] = (!var_13);
                }
            }
        }
        var_21 ^= (!16777);
        var_22 = 1;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_21 [23] = (!-var_5);
        var_23 = (((max((arr_1 [15]), var_12)) >= ((max(3318108147, 30202)))));
    }
    var_24 = (min(var_2, ((min(((var_4 ? -21 : var_7)), 6)))));
    var_25 &= ((min(var_3, ((var_7 ? var_11 : -2992979237525869627)))) >> (!1));
    #pragma endscop
}
