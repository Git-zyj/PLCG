/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [4] [i_2] = ((((var_9 ? ((-90 ? 89 : -90)) : 90)) & ((((min((arr_5 [i_3]), 1))) - ((var_12 ? var_6 : -87))))));
                                arr_15 [i_1] [i_0 - 1] = 40;
                                arr_16 [i_1] = ((!((((arr_0 [i_4 - 2]) ? (arr_12 [i_0] [i_0]) : (max(-1927, -1388086180)))))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    var_21 = (min(var_21, ((((arr_6 [i_1] [i_1 + 1] [1] [i_5 - 3]) ? (arr_6 [i_5] [i_1 - 1] [i_5] [i_5 + 1]) : ((((arr_6 [i_0] [i_1 - 1] [i_5] [i_5 - 2]) || (arr_6 [i_0] [i_1 - 1] [i_0] [i_5 - 3])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_22 = (arr_24 [i_0 - 1] [i_1] [i_5] [i_1] [i_7]);
                                arr_25 [i_1 - 1] [i_1] [i_1 - 1] = (!-var_14);
                            }
                        }
                    }
                    var_23 = (max((arr_3 [i_1] [i_1]), (!-87)));
                }
                arr_26 [i_0] [i_1] = (((min((var_14 && var_5), (max(0, 1)))) & (min(-90, (min((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]), var_15))))));
            }
        }
    }
    var_24 = (((((-97 ? 2147483647 : -6455966647106736684))) * (((((var_0 || var_16) || (((6455966647106736677 ? 1 : var_2)))))))));
    #pragma endscop
}
