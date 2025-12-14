/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (2059167902513722702 / -580879200433336167);
    var_20 = (min(var_20, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min(1, 7892741243521577418)))));
                arr_8 [i_0] [16] [9] = (min((1 > -1641671814), (max(((min(1, var_7))), ((7892741243521577442 ? 1 : 0))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 = var_18;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        arr_18 [i_4] [9] [12] [i_5 + 1] = ((arr_14 [i_5 + 2] [5] [i_4 - 3] [i_5 + 1]) || var_2);
                        arr_19 [i_4] [i_3] [i_4 - 3] [i_5 + 1] [i_5] = (((!1) ? (arr_14 [i_2] [i_3] [i_4 + 1] [i_4 + 3]) : (arr_16 [i_5 + 1] [15] [i_5 + 2] [i_5])));
                        var_23 = (-1641671835 | 1641671809);
                    }
                    arr_20 [i_4] = (arr_7 [i_2] [i_3] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
