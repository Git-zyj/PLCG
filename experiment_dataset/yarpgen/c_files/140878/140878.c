/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((((var_10 ? var_10 : var_13)) / -9720)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = ((-740609344 ? (arr_0 [i_0 - 1]) : var_16));
        var_20 = ((((((arr_0 [i_0]) ? var_4 : var_8))) ? var_17 : 1921452185));
        arr_2 [i_0] = var_17;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((((var_15 ? (arr_1 [i_1]) : var_2))) ? var_12 : -1089631213));
            var_21 = var_2;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (arr_9 [i_0 + 3] [i_0 - 1]);
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = (~-39);
                    }
                }
            }
            var_23 = ((19016 ? var_3 : 528925886));
        }
    }
    #pragma endscop
}
