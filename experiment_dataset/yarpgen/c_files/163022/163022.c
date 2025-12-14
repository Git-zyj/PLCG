/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 3] [11] = -8562853752445143693;
                    var_16 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = ((((((arr_2 [i_0]) % var_2))) ? (arr_5 [i_0] [7] [11]) : (arr_8 [7] [i_1] [0])));
                                arr_15 [i_0] = (var_15 & var_11);
                            }
                        }
                    }
                    arr_16 [i_0] [0] [i_0] [i_0] = ((((((arr_8 [i_0] [i_0] [i_0]) ? (((min(28672, var_15)))) : 0))) ? (((max(var_2, -8353555758175751372)))) : (arr_6 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_18 &= (1318702820 | var_14);
    var_19 = ((((((2976264501 << 1) ? ((4611685949707911168 ? (-9223372036854775807 - 1) : var_9)) : (((-1015961368 ? 2017630720 : 1318702821)))))) ? (((!(var_11 ^ var_1)))) : var_2));
    #pragma endscop
}
