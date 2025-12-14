/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [3] = 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2] = (((var_5 || 16) ? 1449841565 : 1792));
                                arr_17 [i_0] [i_2] [i_0] [i_3] [i_2] [i_4] = (((1 || 221) ? (221 * 4059825394637490055) : ((((-7935222220160630499 ? -81 : 1))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_2] [i_0] = ((+(((14386918679072061561 && -30296) ? ((var_1 ? var_3 : -8256)) : (((var_2 + 2147483647) >> var_3))))));
                    var_13 = (min(var_13, 236));
                }
            }
        }
    }
    #pragma endscop
}
