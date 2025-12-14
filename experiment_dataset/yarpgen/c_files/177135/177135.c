/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 ? ((((max(0, 4198397960))) ? 582765870 : var_15)) : (((((8619101978029132924 ? -1 : 0)) * var_1)))));
    var_18 = (((~8935141660703064064) != var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 ^= max((min((((arr_5 [i_1] [i_1]) ? (arr_4 [i_2] [i_2]) : (arr_1 [i_3 + 2]))), var_8)), (max((((var_0 / (arr_2 [i_2] [i_3])))), (arr_13 [i_2] [i_1 + 2] [i_1] [i_1 - 1]))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [15] [i_0] = ((((min(var_10, -0))) ? (min((arr_2 [i_0] [i_3 + 2]), (arr_2 [i_0] [i_3 + 2]))) : ((-170306078 ? 22 : -30571))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                                arr_23 [i_0] [i_6] [i_0] = min((-923856428166641335 + var_0), -7264377228947450045);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
