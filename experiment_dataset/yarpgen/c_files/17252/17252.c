/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((2147483642 ? (27316 << 1) : 1))) % (~-5405));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_3;
                arr_6 [i_0] = (((~1) && ((min(((min(1, (arr_2 [i_1])))), var_1)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = -10405;
                                arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_1 - 1] = ((!((min(var_8, -3149)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_9 ? var_0 : ((((min(var_1, 236))) ? (max(-19052, var_10)) : var_7))));
    var_14 = var_10;
    var_15 = ((min(56440, (-3121 | 1))));
    #pragma endscop
}
