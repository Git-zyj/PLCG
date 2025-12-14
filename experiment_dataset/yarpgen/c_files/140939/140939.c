/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (max(((~(((arr_6 [5] [i_4] [i_4]) ? var_6 : var_8)))), ((20698 ? 134217664 : 227))));
                                var_14 &= (var_10 != (arr_11 [i_4] [i_2] [i_0 + 1] [i_2] [i_3 - 4]));
                            }
                        }
                    }
                    var_15 = ((var_2 % (arr_5 [i_0 - 2] [i_1] [i_2] [i_0 - 2])));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = ((!((max(-var_1, var_12)))));
    #pragma endscop
}
