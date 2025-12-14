/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((49152 ? ((var_10 ? (arr_2 [i_0] [i_4] [16]) : 0)) : (~1264056210)))) ? ((max(var_8, var_6))) : ((var_14 ? (arr_10 [i_0] [i_4] [i_0] [i_3] [i_4]) : var_4)))))));
                                arr_12 [4] [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] = ((+(((arr_5 [i_2 + 1] [i_3 - 1] [i_1]) ? (arr_2 [i_2 + 1] [i_0] [i_2 + 1]) : var_3))));
                                var_18 = (min(var_18, (arr_11 [i_1] [i_1])));
                                var_19 = ((+(min((arr_10 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 1] [i_2]), ((min(96, -27878)))))));
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [8] = (min((arr_3 [i_0]), 16384));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, -27878));
                arr_14 [i_0] = var_9;
                arr_15 [i_0] [i_0] = 497451044;
            }
        }
    }
    var_21 = -1264056211;
    #pragma endscop
}
