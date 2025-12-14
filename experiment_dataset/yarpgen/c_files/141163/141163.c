/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = ((+(max((var_2 || var_10), ((-109 ? var_2 : var_12))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(((max((arr_1 [i_0 + 1] [i_0 - 2]), (arr_0 [i_0 + 1] [i_0 - 2])))), ((var_11 * (arr_1 [i_0 + 1] [i_0 - 2])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 |= (max(((min((arr_4 [i_0 - 2] [i_1 - 1]), (arr_4 [i_0 - 1] [i_1 - 1])))), (((arr_4 [i_0 + 1] [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_1 - 1]) : (arr_4 [i_0 - 1] [i_1 - 1])))));
                                var_23 = (min(2969898249567791944, (arr_3 [i_1] [i_2 + 1] [i_3 + 1])));
                                var_24 = ((max((arr_11 [i_0 - 1] [i_1] [i_1 - 1] [i_2 - 1] [i_3 + 1]), (arr_11 [i_0 + 1] [i_1] [i_1 - 1] [i_2 + 2] [i_3 + 1]))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] = (min(1, (max(152, (max(1, -8430574354374561890))))));
                }
            }
        }
    }
    #pragma endscop
}
