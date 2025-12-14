/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((!((min((((-4146019232238094934 + 9223372036854775807) << (((((arr_0 [i_1] [i_0]) + 9441)) - 55)))), ((min((arr_0 [2] [i_1]), var_10))))))));

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_19 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_4 [i_0] [i_0] [i_0])));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_3] [i_1] [i_4] = (min(((-(((arr_8 [i_2] [i_1] [i_0]) ? 248 : var_0)))), (((arr_7 [i_4] [i_4] [i_2 - 1] [i_2 - 1]) + 1))));
                            }
                        }
                    }
                    var_21 = (max((((arr_10 [i_0] [i_1]) >> (((arr_1 [i_0 - 1]) - 26102)))), (min((((arr_1 [i_2]) | (arr_11 [i_0] [i_1] [i_2 + 2] [i_0] [i_2]))), ((1 ? 248 : 17))))));
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_15 [6] [6] [i_5] [i_0] = (i_0 % 2 == 0) ? ((((((268431360 << ((((242676121 ? (arr_3 [i_0] [i_0]) : var_15)) - 24263))))) + (min(((2967 ? 65522 : 9223372036854775784)), 245))))) : ((((((268431360 << ((((((242676121 ? (arr_3 [i_0] [i_0]) : var_15)) - 24263)) + 6399))))) + (min(((2967 ? 65522 : 9223372036854775784)), 245)))));
                    arr_16 [i_0] [i_5] = (((~12) ? (arr_1 [i_0 + 1]) : (arr_9 [i_0] [i_1] [i_0])));
                    arr_17 [i_0] [i_0] = var_8;
                    var_22 = (i_0 % 2 == 0) ? (((min(((((((arr_9 [i_0 + 1] [6] [i_0]) + 2147483647)) << (((var_2 + 8779276566960058802) - 4))))), (min(var_17, var_6)))) - (min((((248 % (arr_11 [i_5 - 1] [i_0] [i_5 + 1] [i_1] [i_0])))), (arr_2 [i_5 + 1] [i_0 + 1] [i_0]))))) : (((min(((((((((arr_9 [i_0 + 1] [6] [i_0]) - 2147483647)) + 2147483647)) << (((var_2 + 8779276566960058802) - 4))))), (min(var_17, var_6)))) - (min((((248 % (arr_11 [i_5 - 1] [i_0] [i_5 + 1] [i_1] [i_0])))), (arr_2 [i_5 + 1] [i_0 + 1] [i_0])))));
                }
            }
        }
    }
    var_23 = (min(var_23, (((var_14 ? ((var_7 ? (max(var_10, -4945242214449657708)) : ((var_3 ? var_6 : var_10)))) : ((((max(0, var_10))) - var_6)))))));
    #pragma endscop
}
