/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(((max(var_12, (var_11 < var_13)))), (max((var_7 & var_12), (7831395934702578379 ^ 2559475635)))));
    var_19 = ((((((((var_6 ? 7831395934702578379 : var_15))) ? ((10615348139006973236 ? var_2 : var_0)) : (var_0 - 27500)))) ? (((var_0 | 6661432892164542751) | ((min(var_15, var_7))))) : ((((var_10 & var_13) ? ((max(var_6, -2147483637))) : (min(573183106, var_16)))))));
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = (min(((((-(arr_6 [i_0] [i_3] [i_2]))) - var_2)), ((((arr_6 [i_3] [i_0] [i_0]) ? ((min((arr_4 [i_3] [i_2]), -104))) : (max((arr_5 [i_0 + 4] [i_0 + 4]), var_7)))))));
                                var_21 = ((-((1 ? (~var_11) : (~var_8)))));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, ((max(((((((0 ? -2836728883355965466 : 8948054519628860477))) ? (max(var_4, (arr_0 [i_0]))) : ((var_0 ? (arr_7 [i_1] [i_0] [i_0]) : (arr_9 [10] [i_1] [i_1] [i_0 + 1] [10] [i_0])))))), (((-7808521063857848552 | 1) ? (min(205, 2346908208877821813)) : ((((arr_5 [i_1] [i_0]) >> (1599916648 - 1599916646)))))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_1] [i_1] [i_0] = 1669624573;
                            var_23 = ((!(-6112 < 59207)));
                            var_24 ^= max(((min(var_0, (((-92 + 2147483647) >> (var_2 + 10281)))))), ((((min(1509147800, (arr_7 [i_1] [i_1] [i_5])))) ? ((((arr_19 [11]) ? var_13 : 119))) : 7641017878532768712)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
