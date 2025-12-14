/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_11, var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (((((min(var_9, (arr_1 [i_0]))) + 2147483647)) << (((var_9 + 1018179994) - 7))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [9] [8] [1] [9] [14] &= (((~78) ? ((min(((min(-1, var_8))), (((arr_13 [1] [i_3] [i_3 - 2] [i_0] [1] [1] [i_0]) & (arr_12 [i_4] [i_1] [i_2] [i_1] [i_0])))))) : (max((arr_4 [4] [i_1] [i_3]), 7073782893557068192))));
                                var_15 = (((((((((arr_2 [i_0]) ? var_11 : (arr_9 [i_0] [i_1] [3] [3] [i_3] [i_4]))))) + 2147483647)) << ((((~((var_13 ? (arr_2 [i_2]) : var_1)))) - 3112826940))));
                                arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_4] [9] = (min(var_11, (((arr_11 [i_3 - 2] [i_3 + 1] [1] [i_4]) * (arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
