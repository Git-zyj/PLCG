/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_3));
    var_19 = (((((var_12 + var_2) * (var_5 && var_2))) >= (((((min(var_11, var_3))) ? var_1 : (var_12 >= var_7))))));
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 += (max((max((arr_1 [i_0]), -65535)), ((65521 << (25767 - 25755)))));
                    var_22 = (arr_4 [i_0] [i_1] [i_2]);

                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_23 *= ((((min(var_17, (arr_6 [i_3 - 1] [1] [i_0 + 2])))) ? (arr_1 [i_3 - 1]) : ((min(5, 65525)))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_24 = min((((min(var_1, var_11)) * (min(var_6, var_5)))), (max((arr_3 [i_3 - 2]), (((65532 ? 14 : 65530))))));
                            var_25 = (min(var_25, ((((((var_15 * ((((arr_3 [i_4]) <= var_8)))))) <= (((arr_13 [i_0] [i_0 - 2] [i_0 - 2] [i_2] [i_4] [i_4] [i_4]) + (((arr_10 [i_2]) ? var_4 : var_13)))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_26 = ((var_16 ? var_7 : var_2));
                            var_27 = (((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0 + 1]) + var_15))) ? (arr_2 [i_3 - 2] [i_3 + 1]) : (arr_15 [i_2 + 1] [i_2 + 1] [i_1] [i_2 + 1]));
                            var_28 = (((arr_6 [i_2 - 1] [i_1] [i_2]) ? var_7 : (arr_6 [i_2 - 1] [i_1] [i_0])));
                        }
                        var_29 -= ((((((max(var_16, var_3)) >> (-29339 - 36194)))) ? (((~(arr_10 [i_0 - 2])))) : (min((arr_16 [i_0 - 2] [i_2 - 1] [i_0 - 1] [i_2 + 1] [i_1] [i_2] [i_3 - 1]), var_5))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_30 = (((arr_12 [i_0] [i_2]) >> (((((arr_15 [i_0] [i_1] [i_1] [i_6]) ? (arr_8 [i_0 - 1]) : var_3)) - 25987))));
                        var_31 *= ((arr_5 [i_0 - 4] [i_2 + 1] [i_6 - 3]) & (arr_5 [i_0 - 2] [i_2 - 1] [i_6 - 2]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
