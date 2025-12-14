/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 ^= (!4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_1] [i_1] = var_9;
                                var_11 = (max(var_11, (((-857242488 ? -857242494 : 4294967295)))));
                                var_12 = (min(var_12, ((((857242488 - var_8) ? (var_5 && var_2) : (min((max(1, var_6)), ((max(var_7, 1))))))))));
                                var_13 = ((((min(var_3, var_9))) ? ((857242508 ? var_2 : var_5)) : ((var_2 ? var_8 : var_0))));
                            }
                        }
                    }
                    var_14 += (max((max((~var_5), (var_4 + var_0))), (!-857242494)));
                    arr_14 [i_0] [i_1] [i_1] = ((~(((min(var_5, 1488194793)) << (((var_7 - 10653396513807509177) - 7793347559902048594))))));
                }
            }
        }
    }
    var_15 = (min((((!((min(var_5, var_8)))))), (min(var_0, (max(var_9, var_9))))));
    #pragma endscop
}
