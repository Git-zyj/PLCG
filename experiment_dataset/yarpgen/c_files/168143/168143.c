/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [10] [i_0] = ((var_11 ^ (((((max(var_8, var_9))) + var_13)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = ((((min(var_7, var_3))) ? var_1 : (((var_2 * var_7) / (((min(var_3, var_13))))))));
                    var_17 = (((var_9 + var_7) - (min(var_5, var_2))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] [i_3] = (((var_9 ? var_2 : var_11)));
                    arr_12 [i_0] [i_0] = (((((min(var_1, var_11)))) ? (min(((var_9 ? var_13 : var_0)), ((min(var_7, var_6))))) : (var_12 && var_7)));

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_18 = var_12;
                        var_19 = (max(var_19, (((var_8 ? var_3 : var_0)))));
                        var_20 += ((min(var_5, var_13)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [2] [i_5] &= var_14;
                        var_21 = (min(var_21, (((var_5 ? var_0 : var_7)))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_22 = (min(var_22, ((min((min(var_14, var_6)), (var_3 >> var_1))))));
                        var_23 = (min((var_5 - var_8), ((min(var_0, var_12)))));
                        var_24 -= var_10;
                        var_25 = ((var_0 ? var_12 : (var_3 || var_3)));
                        arr_22 [i_0] [i_1] [i_1] [i_6] = (((var_8 + var_10) * var_9));
                    }
                }
                arr_23 [i_0] [i_1] = var_14;
                arr_24 [i_0] = (max((var_12 > var_12), ((var_12 ? var_1 : var_3))));
                var_26 = ((((max(var_4, var_0))) ? ((var_2 ? var_1 : var_8)) : var_7));
            }
        }
    }
    #pragma endscop
}
