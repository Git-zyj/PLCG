/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 | ((var_12 ? ((var_2 ? 0 : var_15)) : var_3))));
    var_20 = (2147483647 * (min(var_0, (var_9 + var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [8] |= 27396;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = var_6;
                            var_22 = (max((arr_2 [i_0] [i_0]), (max((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2]), (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
                            arr_9 [i_3] [i_1] [i_0] [i_3] [i_0] = (((arr_1 [i_0] [i_0]) >= (max((arr_1 [9] [i_0]), (arr_1 [i_3] [i_0])))));
                            arr_10 [i_3] [i_0] [i_0] [i_0] = arr_0 [7] [6];
                            arr_11 [i_0] [i_2] [i_1 - 1] [i_0] = var_3;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
