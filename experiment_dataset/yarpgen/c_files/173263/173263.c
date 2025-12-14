/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_8;
                var_17 = var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_13 [i_3 + 1] [i_3] [i_2] = var_3;
                var_18 = (min((((var_0 || (!var_12)))), (((((var_14 ? var_15 : var_5))) ? (var_12 % var_6) : (((var_14 ? var_5 : var_7)))))));
                var_19 = ((((((min(var_7, var_15))) < var_15)) ? var_6 : ((min(var_10, ((min(var_12, var_7))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_20 = (min((min(((var_9 ? var_0 : var_2)), ((var_6 ? var_6 : var_6)))), var_15));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = (((((((min(var_6, var_3))) ? var_3 : (min(var_3, var_16))))) ? (((var_16 - var_0) - (max(var_9, var_11)))) : (((((var_15 ? var_14 : var_8))) ? -var_13 : (max(var_14, var_14))))));
                            var_22 = (((min((!var_5), (max(var_12, var_6)))) + (min(((var_13 ? var_6 : var_0)), ((min(var_10, var_1)))))));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_27 [i_4] [i_4] [i_4] [15] = (min((max((max(var_3, var_16)), (((var_9 ? var_5 : var_6))))), ((min(var_5, var_8)))));
                    arr_28 [i_4] = (((max(((var_12 ? var_13 : var_2)), ((min(var_1, var_1))))) <= ((max(((min(var_15, var_11))), var_9)))));
                    arr_29 [i_4] [i_5] [i_5] [i_5] = (max((var_4 && var_5), (min(var_11, var_5))));
                }
                var_23 = ((var_4 ^ ((((((var_13 ? var_2 : var_6)) == var_3))))));
            }
        }
    }
    #pragma endscop
}
