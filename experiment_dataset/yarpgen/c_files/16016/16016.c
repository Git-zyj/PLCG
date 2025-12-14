/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, (min(4245534245, -91))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 += (min((arr_6 [i_0] [i_0] [i_2] [i_1 - 1]), var_16));
                    var_20 = (-(((arr_5 [i_0 - 1] [9] [9]) ? (min(var_0, var_6)) : -var_14)));
                    var_21 -= (arr_0 [i_2]);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (~(!49433051));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4] = var_5;
                                var_22 = (min(0, (min((((arr_8 [8] [i_1] [i_1] [i_4]) + 0)), (arr_6 [i_0 - 4] [11] [i_0 - 4] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_5;
    #pragma endscop
}
