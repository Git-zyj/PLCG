/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((((var_16 ? (~222) : -6065962973648243101))), ((((min(var_6, var_10))) ? var_2 : ((var_13 ? -23459 : var_0))))));
    var_21 = (max(var_21, ((((((max((41948 || -62), -123)))) * (min(20, (-80 || -5403))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_12 [i_1] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] = ((((min(var_12, -126))) ? 8386560 : ((238 ? 30 : 2))));
                                var_22 = (min(var_22, 43184));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
