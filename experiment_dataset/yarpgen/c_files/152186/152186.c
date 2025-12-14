/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = min((((var_15 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_2 [6] [4])))), ((var_6 ? ((var_2 - (arr_4 [i_0]))) : var_9)));
                    var_20 = (max(((var_13 ? (arr_4 [i_0]) : (((-(arr_2 [3] [i_1 + 1])))))), ((max((-26297 || -1108586088), (!var_6))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_3] [i_4] = ((-var_10 ? ((min((arr_12 [i_2 + 4] [i_2] [i_2 - 2] [i_1 - 1] [i_1 - 1]), (arr_12 [i_2 + 4] [i_2 - 1] [i_2 - 2] [i_1 - 1] [i_1 - 1])))) : ((min((var_0 || var_3), (1 >= 1))))));
                                arr_14 [i_2] [i_3] [i_1 - 1] [i_1 - 1] [i_2] = var_11;
                                arr_15 [i_4] [i_4] [i_2] [i_2] [i_1 + 1] [i_0] = ((((-(var_3 != var_6)))) ? var_1 : (max(var_0, (min(var_16, var_8)))));
                                var_21 *= (((var_7 >> ((((min(var_15, (arr_12 [i_0] [i_1 + 1] [i_2] [0] [i_4]))) - 10468))))));
                                var_22 = (1 / 264040823477329384);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 += (-((var_14 ? ((65535 ? 1 : 2589188482)) : (var_18 && var_2))));
                                var_24 = (max((min((1 + 52038), (max(var_12, var_3)))), (arr_7 [i_1 + 1] [i_2 + 4] [i_2 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_2 | (min(15017, ((var_3 ? var_3 : var_17))))));
    var_26 = ((!((min(1530285701, 65535)))));
    var_27 |= ((((var_16 << ((var_13 ? var_14 : var_11))))) & ((-((var_18 ? var_7 : var_13)))));
    #pragma endscop
}
