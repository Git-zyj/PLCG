/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (((((-(var_0 + var_9)))) ? (arr_0 [i_0] [i_0]) : -814429690));
                            var_12 *= (((-(var_7 * var_1))));
                        }
                    }
                }
                arr_9 [i_1] [i_1] = (((--814429687) ? ((var_0 - (arr_8 [i_0] [i_1] [9] [i_1 + 1]))) : (((((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) > var_6))))));
            }
        }
    }
    var_13 = (max(var_13, (((-((-(min(var_9, var_3)))))))));
    var_14 = (((((((var_6 ? var_9 : var_3))) - var_0)) + ((-814429703 ? (min(var_0, var_6)) : var_9))));
    #pragma endscop
}
