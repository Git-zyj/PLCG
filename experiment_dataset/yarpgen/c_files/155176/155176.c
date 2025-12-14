/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 *= (max(55809, (var_12 + var_3)));
                    arr_7 [i_0] [i_0] = (!49858);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = arr_1 [i_3 + 3];
                                var_15 = (!2048);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((((var_7 ? var_7 : -29357)))) ? var_7 : (((((-29380 ? -4029537563613698982 : var_10))) ? ((var_2 ? var_1 : var_11)) : var_10))));
    var_17 = var_7;
    var_18 = 29380;
    #pragma endscop
}
