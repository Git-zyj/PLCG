/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = var_14;
    var_22 = ((var_0 ? (((!var_14) - var_5)) : (-127 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-127 - 1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] [i_4] = ((((((arr_11 [7] [i_1] [i_1 - 3] [i_3] [i_1 - 3] [i_0] [i_3]) ? -112 : (-127 - 1)))) + ((((arr_5 [i_0] [0] [i_2] [i_1 - 2]) ? var_2 : (arr_5 [i_4] [i_4] [i_4] [i_1 - 1]))))));
                                var_23 = (min(var_23, 127));
                                var_24 = (-127 - 1);
                            }
                        }
                    }
                }
                var_25 *= 16385;
            }
        }
    }
    #pragma endscop
}
