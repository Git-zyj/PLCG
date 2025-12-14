/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_2] = var_9;
                    arr_8 [i_2] = var_3;
                    arr_9 [i_0] = var_8;

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_14 = (max(var_14, (((var_6 ? var_3 : var_6)))));
                        var_15 = ((var_0 >> (var_8 + 40)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_16 = ((var_6 - ((var_9 ? var_9 : var_6))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] &= (var_0 * var_2);
                    }
                }
                var_17 = ((var_0 ? var_2 : (((((var_2 + 2147483647) << (var_13 - 32542))) + var_10))));
                var_18 = var_0;
            }
        }
    }
    var_19 = var_13;
    var_20 = var_5;
    #pragma endscop
}
