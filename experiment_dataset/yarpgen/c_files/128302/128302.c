/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6;
    var_18 = (((((((min(-748145581, 4014435054))) ? var_6 : var_8))) ? ((((var_2 + var_6) / var_4))) : var_0));
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [2] = (((0 / var_2) / ((max(var_4, var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_11 [2] = (((((var_15 ? var_11 : var_5))) ? ((243504901 ? var_16 : 748145580)) : (var_1 > 329636260)));
                        var_20 = 0;
                        var_21 = (((((65535 ? var_14 : var_3))) ? (min(6192936067882726367, 7006895812015183291)) : var_15));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((var_13 ? ((((var_4 ? var_6 : var_15)) ^ var_0)) : (2970694000 < -1149769319)));
                        arr_15 [i_2] |= ((((var_16 ? 677235524 : var_1)) != 4));
                        arr_16 [9] [i_4] [3] [i_4] = (max(((min(var_2, var_14))), (min(var_1, var_0))));
                        var_23 ^= 0;
                    }
                    var_24 = (max(var_24, (((var_10 ? ((-(var_1 / var_14))) : var_0)))));
                    var_25 = ((-7770753088718380249 ? (var_3 & var_2) : ((0 ? (var_15 | var_3) : var_4))));
                }
            }
        }
        arr_17 [i_0] = (var_4 ? (((((var_15 ? 336998101 : -26))) - var_16)) : ((var_13 ? var_1 : ((8859199481191282610 ? -1 : 180)))));
    }
    var_26 = ((var_13 ? (var_9 / -778067462) : var_11));
    #pragma endscop
}
