/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (5559950339369404921 % var_11);
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = var_12;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] = ((((min(159, -32764))) & (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_22 = (((((-51848 ? ((144 ? 51868 : 28376)) : (min(var_8, -1928391507))))) ? (((((var_0 ? var_5 : var_9))))) : var_14));
                            arr_13 [1] [1] [i_2] = var_15;
                        }
                    }
                }
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
