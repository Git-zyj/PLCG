/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((!var_5) || ((max(var_10, var_8))))) ? ((max(var_7, 511))) : var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [7] [i_1] [i_0] = (((max((var_8 - 65012), 124))) % ((((((arr_7 [i_0] [i_1] [i_4] [5] [i_4]) % 141))) ? ((110 ? var_10 : 145)) : (arr_1 [i_4] [i_2]))));
                                var_20 = (arr_3 [i_3] [i_3]);
                            }
                        }
                    }
                    var_21 = ((((-((min(var_15, var_4)))))) ? (min((arr_6 [i_0] [8] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_0] [i_2]))) : ((min((64288 % var_12), 208598630))));
                }
            }
        }
    }
    var_22 = ((((!(141 < var_2))) ? var_3 : (var_13 + -var_1)));
    #pragma endscop
}
