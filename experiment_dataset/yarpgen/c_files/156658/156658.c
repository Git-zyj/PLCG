/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((32767 ? 3868265059 : 11));
    var_15 = -8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [9] [i_1] = (4528694458730015794 && var_0);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_1] = (((var_8 ? var_1 : var_7)));
                        var_16 = (max(var_16, (var_4 / var_13)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_17 *= (min((!var_0), 1880112376));
                        var_18 += 1123700883587072;
                        var_19 |= ((45056 ? (((((!var_9) && var_1)))) : (((11 & var_0) ? (((var_3 ? var_2 : var_9))) : 137438887936))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_20 ^= 31;
                        var_21 *= 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
