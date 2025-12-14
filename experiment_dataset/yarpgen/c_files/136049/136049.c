/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((var_3 ? var_4 : var_6))) ? ((var_3 ? ((var_2 ? var_6 : var_13)) : (var_6 * var_1))) : var_3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [9] [i_0] [i_0] = var_10;
                            arr_12 [i_0] [i_0] [i_2] [i_0] = (((((var_6 ? var_11 : var_10))) ? (((var_12 ? var_1 : var_3))) : ((var_13 ? var_2 : var_7))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
