/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(6041134882452980955, 6041134882452980947));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 ^= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_16 = ((var_9 ? (arr_1 [i_0] [i_0]) : -6041134882452980947));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = (((((arr_1 [i_2] [i_1]) ? var_10 : var_13)) * (((6041134882452980947 ? 0 : var_4)))));
                        var_18 = ((var_0 ? var_13 : (arr_0 [i_0] [i_0])));
                        var_19 = (var_0 < var_10);
                    }
                }
            }
        }
        arr_11 [i_0] = (var_6 | var_6);
    }
    var_20 = var_6;
    var_21 = ((!((var_6 > (var_9 && var_1)))));
    #pragma endscop
}
