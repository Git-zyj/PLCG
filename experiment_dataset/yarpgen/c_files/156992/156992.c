/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min(((((arr_1 [0] [0]) > -18))), (+-56813)));
        var_10 = (var_3 | var_7);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (((-4052037572416535134 == 1569922951) ? (arr_9 [i_0 - 3] [i_0 - 1] [i_1 + 1] [i_3]) : (arr_1 [i_0] [i_0 - 1])));
                                var_12 = var_1;
                            }
                        }
                    }
                    arr_17 [i_0 - 1] [i_0] [i_2] = 1356453928145317220;
                    var_13 *= (arr_4 [4] [i_2]);
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_14 = (arr_13 [2]);
        arr_20 [i_5] [i_5 - 1] = arr_8 [i_5 - 3] [2] [10];
    }
    var_15 *= -23;
    var_16 = 2725044338;
    #pragma endscop
}
