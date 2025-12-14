/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-6639105294038922802 ? (var_9 / var_1) : var_1))) && var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0] [1]);
                    var_16 = max(((max((arr_1 [i_1 + 2] [i_0]), (arr_1 [i_1 - 1] [i_0])))), (min(var_11, (arr_1 [i_1 + 2] [i_0]))));
                    var_17 = (max(var_17, 134));
                    arr_11 [10] [10] [10] [i_0] = (((50145 / 9696397918550058801) >> 0));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] &= (arr_12 [i_3] [i_3 - 2] [i_3 - 2] [i_2]);
                                var_18 = (((arr_14 [i_0] [8] [i_0]) << (((((max(36270, var_5)))) - 145))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
