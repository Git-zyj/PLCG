/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = 1019;
                            var_21 = ((min(var_7, 2019765987)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_22 = (((((~(~var_11)))) >= (var_17 % var_10)));
                    var_23 = (((arr_10 [i_4] [i_0] [i_0] [i_0]) == var_18));
                    var_24 = (((arr_10 [i_1] [i_0] [i_1] [i_4]) != (((min(var_8, (arr_0 [i_0])))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_25 = (((((0 < 1) ? (max(449940597, var_18)) : (arr_8 [i_0] [i_1 + 1] [i_0] [i_1]))) << ((((arr_3 [i_0]) <= 4282511571339584243)))));
                    var_26 = (((-(arr_14 [i_1 + 2] [i_1 - 2] [i_1 + 2]))));
                    var_27 = arr_13 [i_1 + 2] [i_0] [i_1 + 2];
                }
            }
        }
    }
    var_28 = -40;
    var_29 = ((((max((!20), ((var_13 ? var_7 : -40))))) ? (((((var_18 ? var_3 : var_10))) ? var_12 : var_8)) : (var_12 && var_3)));
    #pragma endscop
}
