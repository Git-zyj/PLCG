/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 |= 0;
                            var_17 = ((var_5 ? (min((arr_8 [i_0 - 2] [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0 + 3] [i_0 - 2] [i_0 - 4]))) : (((~(arr_1 [i_0 - 3]))))));
                        }
                    }
                }
                arr_9 [19] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_18 = var_1;
                            arr_16 [i_0] [i_0] [i_0 + 2] [i_0 - 3] = (((((((((arr_7 [i_0] [i_1] [i_5] [i_5]) & (arr_5 [i_0 + 3] [i_0] [i_0]))) | 4294967273)) + 9223372036854775807)) << (((-1 + 21) - 20))));
                        }
                    }
                }
                var_19 = max((((arr_1 [i_0 + 3]) ? var_7 : 1)), ((((((15291 ? (arr_11 [6] [i_1] [i_1]) : var_3))) ? (arr_6 [i_0] [i_0] [i_0]) : ((max(-8, 108)))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((max(var_5, 127))) ? var_3 : (arr_15 [i_0] [i_0 - 3] [i_0] [i_0 + 2]))))));
                            var_21 = (min(125, 39635));
                            var_22 = (((((((min(162, -8)))) + 17472271342263429340)) + ((((!-8) ? -var_2 : 147)))));
                            var_23 = ((((max((arr_11 [i_1] [i_1] [i_6]), (min(130, 127))))) + (((!var_7) ? (arr_15 [i_0 - 2] [i_0 - 2] [i_6] [i_0 - 2]) : ((-60 & (arr_8 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = var_9;
    var_25 = (max(var_25, 0));
    #pragma endscop
}
