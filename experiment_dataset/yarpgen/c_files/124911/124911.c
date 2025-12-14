/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 ? var_1 : (((var_12 ? var_9 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max((((var_9 - var_9) ? -1 : var_14)), -86));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] = var_7;
                    arr_8 [i_0] [5] [5] [i_1] = (arr_2 [i_0] [i_1 + 1]);
                    var_20 = (!-33751);
                    var_21 -= (((((15 ? (arr_0 [i_1] [i_0]) : var_4)))) ? (((!((((arr_1 [i_0]) ? var_11 : var_11)))))) : 0);
                    var_22 = (min(var_9, -var_10));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    var_23 = (var_2 && var_2);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_24 = (max(var_24, var_11));
                                arr_15 [i_0] [i_1] = var_9;
                                arr_16 [i_0] [i_1] [i_0] [i_4] [i_1] = (~0);
                                var_25 &= var_3;
                                arr_17 [i_1] [i_0] [i_1] [i_3 - 1] [i_4] [i_5] = (2097151 + var_1);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_23 [11] [i_1 - 2] [i_6 + 1] [i_1] = -2097152;
                            var_26 = ((((((var_1 + 9223372036854775807) << (var_17 - 1535632393)))) >= ((((!(arr_21 [i_1 - 2] [i_0] [i_0] [i_7])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
