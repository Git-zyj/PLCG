/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_1, ((min((var_1 && var_4), 1)))));
    var_20 = (-4820857660450440440 * var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 *= (((((arr_1 [i_1 + 2] [i_0 + 1]) ? 493217724 : var_16)) / ((((arr_2 [i_0 - 2]) ? -58 : (arr_2 [i_0 + 1]))))));
                            arr_10 [i_3] [i_1] = var_3;
                        }
                    }
                }
                var_22 = ((((arr_7 [i_0 + 1] [i_1 + 1] [i_0] [i_0 - 2]) ? var_2 : var_17)));
                var_23 = (min(var_23, var_14));
            }
        }
    }
    #pragma endscop
}
