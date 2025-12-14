/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = (!-28721);
                                arr_13 [i_0 - 1] [i_1] [3] [i_2] = 6;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1 + 1] = (arr_6 [i_1] [i_0] [i_1] [i_0]);
                arr_15 [6] &= -6;
            }
        }
    }
    var_13 = ((~((min(((max(6, -11373))), 16284)))));
    #pragma endscop
}
