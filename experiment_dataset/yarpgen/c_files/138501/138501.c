/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? 127 : ((var_6 * ((var_4 ? var_2 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_0));
                var_14 *= (arr_0 [i_1 - 2] [i_1 + 2]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((+(((arr_6 [i_2 + 1] [i_1 - 2]) ? (arr_6 [i_2 - 2] [i_1 + 2]) : (arr_6 [i_2 - 3] [i_1 - 1]))))))));
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_2] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((max(var_6, (var_1 && var_0)))) - (max(((var_8 ? var_8 : var_4)), var_3))));
    var_17 = ((var_10 < (~var_7)));
    var_18 = var_9;
    #pragma endscop
}
