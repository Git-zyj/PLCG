/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((min(-var_0, (min(var_3, var_4)))));
                arr_7 [i_0 - 1] [i_1 - 1] = ((-(max((var_9 + var_13), var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = ((min(var_8, var_4)));
                            arr_15 [i_2] = (min(((max(var_4, var_12))), (!var_10)));
                            var_17 = ((((max(var_8, var_14))) ? (var_3 | var_10) : var_9));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_8, (((var_12 ? var_3 : (var_4 && var_14))))));
    var_19 = var_3;
    var_20 = ((~(max((var_11 & var_10), -var_10))));
    var_21 = var_9;
    #pragma endscop
}
