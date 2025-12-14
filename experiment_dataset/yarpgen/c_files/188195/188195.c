/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((-0 | (((-(arr_1 [i_1 + 1] [i_0]))))));
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_2 - 2] = ((((min(65490, (arr_2 [i_1 + 1])))) && ((((arr_12 [i_0] [i_0] [i_2 - 1] [i_3] [i_4]) ? ((((arr_2 [i_2]) ? 15 : (arr_7 [21])))) : (max((arr_0 [i_0] [i_3]), 65520)))))));
                                var_20 = -6977;
                                var_21 *= (-65520 ? -15 : (min(1001376987494885297, 200522676107218449)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = ((15 ? -7129856802105013939 : -3546742839056697748));
            }
        }
    }
    #pragma endscop
}
