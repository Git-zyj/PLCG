/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_0] = ((!((max(0, 6754316514848373089)))));
                            var_11 = (min(var_11, (((~((1 ? 18446744073709551615 : 0)))))));
                            arr_10 [i_2] [i_2] [15] [i_0] |= ((((((((var_0 ? var_1 : var_10))) ? -var_5 : ((min(var_8, var_4)))))) ? (max(var_8, ((max(var_2, var_10))))) : (((min(var_9, var_9))))));
                            arr_11 [i_0] = var_3;
                        }
                    }
                }
                arr_12 [i_0] = var_1;
                var_12 = (((((-(max(var_3, var_1))))) ? (((var_0 ? var_6 : var_6))) : var_4));
                arr_13 [i_0] [15] [i_1] = ((!((min((~var_3), ((max(var_10, var_3))))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_16 [i_4] = ((min((var_1 / var_9), (((var_0 ? var_10 : var_3))))));
        var_13 = (min(var_13, (((((min(var_3, var_3))) ? (min(var_0, var_1)) : var_5)))));
    }
    #pragma endscop
}
