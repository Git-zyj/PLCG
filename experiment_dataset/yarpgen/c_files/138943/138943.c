/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (0 / -var_6);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = (((1622767352642076642 && -31) ? (max(var_15, -6)) : ((1 ? ((min((arr_4 [i_0] [i_1] [i_2]), (arr_9 [i_3 - 1] [i_0] [i_1] [i_0] [i_0])))) : 14152))));
                            var_20 = (max((0 * 30), (((-(arr_0 [16] [i_3 + 2]))))));
                            var_21 = (arr_10 [i_0] [1]);
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = (var_1 + 1);

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_22 = (min(var_22, (((((~(arr_6 [4] [i_1 - 3] [4]))) <= (!var_2))))));
                        var_23 = (max(7530893191676595906, (!-62)));
                    }
                    arr_21 [i_0] [i_0] [i_1] [i_0] = ((-((max((arr_2 [i_0]), 112)))));
                }
            }
        }
    }
    var_24 = (((((var_7 < 2516391257) - (min(var_11, var_16)))) == (var_3 | var_2)));
    var_25 = (min(var_3, var_0));
    #pragma endscop
}
