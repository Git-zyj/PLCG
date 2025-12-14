/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = (min(var_14, ((((min(var_19, var_10))) % (min(var_11, 9223372036854775807))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_0;
                var_22 = 168;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = ((-var_15 ? (!var_1) : ((-(((arr_1 [i_0]) & var_14))))));
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] |= var_10;
                            }
                        }
                    }
                }
                var_23 *= ((var_16 == (min(3054240648915653053, -14941))));
                arr_16 [i_0] = (((~14941) ? (((-((14940 ? (arr_10 [i_0] [i_1]) : (arr_12 [i_0] [1] [i_0 + 1] [i_0])))))) : (max(var_10, (arr_4 [i_0 - 1])))));
            }
        }
    }
    var_24 = ((var_14 ? (((var_0 / var_19) ? ((7346923848797431212 ? var_2 : 1048575)) : var_10)) : ((((max(-14942, var_11)) & var_10)))));
    #pragma endscop
}
