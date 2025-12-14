/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 ? var_15 : var_18));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] = var_3;
                                var_22 = (((((var_9 % var_14) % (var_0 + var_8))) << (((1920 ^ 126) - 2044))));
                                var_23 ^= var_2;
                                var_24 = (max(var_24, var_6));
                                var_25 = ((((var_18 ? (var_6 ^ var_16) : var_10))) ? var_8 : ((((var_12 == (var_6 / var_9))))));
                            }
                        }
                    }
                    var_26 = (var_5 / var_11);
                }
            }
        }
    }
    #pragma endscop
}
