/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_3, var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] = (((((212 * var_13) ? ((max((arr_3 [i_1]), var_14))) : var_17)) * 397525222));
                                arr_17 [i_2] [i_4] = ((-(!54)));
                                arr_18 [i_2] [i_3 - 2] [i_3 - 2] [i_1] = ((-((((var_11 || var_6) == var_0)))));
                            }
                        }
                    }
                }
                arr_19 [i_1] = (arr_0 [i_0]);
                arr_20 [i_0] [i_1] [i_1] = (44 * 212);
            }
        }
    }
    #pragma endscop
}
