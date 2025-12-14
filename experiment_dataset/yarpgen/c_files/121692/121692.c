/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = ((((!((((-8249187265580618059 + 9223372036854775807) >> (-1592197785 + 1592197842))))))) != (((!1) ? ((var_8 ? var_1 : 143)) : var_8)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = 1;
                                var_12 = ((((((65535 ? 1 : 255)) ? 1 : 1))));
                                var_13 += (((((var_5 ? var_1 : 0))) ? ((min(553535490, var_0))) : ((196 ? var_9 : 8249187265580618059))));
                            }
                        }
                    }
                }
                var_14 = (((((var_8 ? var_9 : 112))) & (-8249187265580618059 / 61)));
                arr_13 [i_1] &= var_9;
            }
        }
    }
    var_15 = var_3;
    var_16 = (max(var_16, (((var_9 ? (((((1 ? -57 : var_3))) ? -1 : (min(var_7, 70368744177662)))) : 20269)))));
    #pragma endscop
}
