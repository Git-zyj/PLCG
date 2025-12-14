/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] = (min((~var_9), ((57664 ? 7871 : 57654))));
                            var_19 = (min(var_19, ((max((((((min(var_7, var_18))) ? var_11 : (-9223372036854775807 - 1)))), var_13)))));
                        }
                    }
                }
                arr_11 [i_0] = ((max(var_16, ((var_2 ? var_18 : var_1)))));
            }
        }
    }
    var_20 = ((((min(((var_15 ? var_1 : var_9)), (((57673 ? var_18 : 7839)))))) ? var_2 : (max(var_5, var_6))));
    #pragma endscop
}
