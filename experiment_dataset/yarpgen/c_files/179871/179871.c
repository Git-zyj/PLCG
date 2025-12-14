/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 |= var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = var_3;
                            arr_11 [i_0] [i_1 + 1] [i_0] = -var_11;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            {
                arr_17 [i_4] = ((1 ? ((var_13 ? var_7 : var_14)) : (((var_6 ? var_0 : var_12)))));
                arr_18 [i_4] = (((((var_1 ? var_11 : var_10))) ? var_15 : (((var_14 ? var_4 : var_12)))));
            }
        }
    }
    var_17 = ((var_13 ? var_15 : ((((((var_6 ? var_6 : var_3))) ? var_4 : var_1)))));
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    arr_27 [i_6] [11] [17] [16] = ((0 ? 125 : -var_0));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_19 = ((var_11 ? -var_8 : 1));
                        var_20 &= var_12;
                        var_21 = var_9;
                        var_22 = (max(var_22, (((var_2 ? (((var_3 ? var_1 : var_12))) : ((var_9 ? var_2 : var_6)))))));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_23 = ((((var_9 ? var_11 : var_2))) ? var_0 : ((var_2 ? var_2 : var_9)));
                        var_24 = ((((var_4 ? var_15 : var_1))) ? var_10 : (((var_3 ? var_7 : var_9))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
