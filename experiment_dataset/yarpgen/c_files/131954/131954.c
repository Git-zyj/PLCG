/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [12] [i_2] [12] [i_0] &= (((((~47424) ? (arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) : ((max(var_4, var_4)))))) ? ((-((18169562112972365180 ? 8795958804480 : 0)))) : var_14);
                                var_15 = ((~((var_13 ? -3047945897779139457 : (((arr_7 [i_0] [i_0] [i_0] [i_0]) - (arr_2 [i_0] [i_0])))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] = ((((min(((170 ? 9221120237041090560 : 292776597)), var_3))) ? ((((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((var_3 ? var_9 : 0))) : (((-8090686216241694385 + 9223372036854775807) >> (var_11 - 39211)))))) : ((max(2147483643, 26)))));
                var_16 = ((((var_7 ? ((var_10 ? (arr_2 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : var_9)) << (((arr_5 [i_0] [i_1 + 1]) - 2144513563087679163))));
            }
        }
    }
    var_17 = (min(((var_3 ? (var_10 - -7277774648281942169) : (((var_8 ? var_3 : var_5))))), (((!((min(32745, 32748))))))));
    #pragma endscop
}
