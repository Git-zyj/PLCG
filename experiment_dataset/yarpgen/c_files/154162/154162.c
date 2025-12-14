/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((5374777277987179834 != -1772) ? var_5 : (var_0 | var_10))))));
    var_20 = ((-(min((min(var_15, var_0)), var_17))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = var_3;
                                arr_12 [14] [12] [8] [i_3] [i_3] [i_2] = (((((~((var_3 ? (arr_3 [i_0] [i_1] [i_3]) : (arr_1 [2] [i_2])))))) ? (((min((arr_2 [i_0]), (arr_8 [i_1] [i_2] [i_4]))))) : (min(((var_16 / (arr_1 [i_0] [i_0]))), 5665))));
                            }
                        }
                    }
                }
                var_22 = var_5;
            }
        }
    }
    var_23 = ((((min(var_12, var_5))) ? (max((((var_12 ? var_16 : var_12))), var_7)) : ((var_1 / ((var_11 ? var_7 : var_16))))));
    #pragma endscop
}
