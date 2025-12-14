/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 |= (((((((9690 ? var_13 : var_17))) ? -var_7 : (((arr_3 [i_0] [i_0] [i_0]) ? var_15 : var_18)))) <= ((((min(var_12, var_8)))))));
                var_21 = (((arr_2 [i_0] [i_0]) ? var_3 : (var_18 && var_2)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_22 = ((max((2396676318990933965 * var_9), (((var_7 ? 113 : var_0))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_23 = var_1;

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_13 [i_4] = ((~(arr_1 [i_2])));
                            var_24 = (((((arr_2 [3] [i_1]) && -1930421187)) ? (-32767 - 1) : (arr_5 [14] [i_1] [i_2] [i_3])));
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_25 -= var_9;
                    var_26 |= ((var_16 ? (arr_6 [5] [5] [i_5]) : var_4));
                    var_27 = ((var_19 ? var_13 : var_12));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_28 = (max(var_28, var_11));
                    var_29 = (((((-1 ? (((max(var_0, var_19)))) : var_3))) ? (var_1 & var_1) : var_17));
                }
                arr_19 [i_0] [i_0] [i_0] = ((-(arr_2 [i_0] [i_1])));
            }
        }
    }
    var_30 = var_17;
    #pragma endscop
}
