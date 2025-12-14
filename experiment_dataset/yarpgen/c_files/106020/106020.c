/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((!(((var_3 ? var_10 : 72)))))) + var_0));
    var_21 = ((((var_11 ? var_12 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1] = (((var_15 + var_13) - ((var_0 ? var_15 : -8979))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1 - 2] [i_3] [i_3] [i_1] = ((var_2 + (((((var_15 ? (arr_7 [i_0] [i_2] [i_1]) : var_13))) ? (min(var_14, var_4)) : (min(-21779, var_18))))));
                            var_22 = ((((min(4294967295, 4))) ? (((var_6 ? -61 : 60))) : 1));
                            var_23 = ((((((!(((var_4 ? var_0 : var_6))))))) - -2657307110713485511));
                            var_24 |= var_6;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
