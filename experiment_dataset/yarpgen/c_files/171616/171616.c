/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -1467;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((max(-11266, 2727))))));
                var_17 = 32766;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (min((arr_7 [8] [8] [8] [i_0]), var_7))));
                                arr_11 [i_0] [i_1] [i_3] [i_0] [i_4] = (max((((((var_5 ? (arr_2 [i_1 - 1] [i_2] [11]) : var_11))) ? var_14 : -29882)), -88));
                                var_19 -= (max((((arr_5 [i_0 - 1] [i_1] [i_2] [i_1]) ? var_8 : 93)), ((~((21366 ? -88 : var_5))))));
                                var_20 = (min(-17480, 2774));
                                var_21 = 1811;
                            }
                        }
                    }
                }
                arr_12 [i_0 - 1] [i_0] [i_1 + 1] = max(-30908, (max((arr_9 [i_0] [i_0] [i_1] [i_1] [i_1 - 1]), var_10)));
            }
        }
    }
    #pragma endscop
}
