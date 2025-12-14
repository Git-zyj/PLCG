/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 23721;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 -= (arr_2 [i_1]);
                        arr_12 [i_0 - 2] [i_1] [i_2] = (((arr_0 [i_2 + 2]) / (var_16 - 23710)));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [10] [i_1] [i_2 - 1] [i_3] [i_2] = (((arr_8 [i_2] [i_2 + 2] [i_2] [i_2]) ? ((((arr_9 [i_2]) == -26))) : ((-1004967190 & (arr_3 [11] [i_1])))));
                            arr_16 [i_2] = (arr_6 [i_3] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_22 = (((!56) == (arr_14 [i_2 + 1] [i_2] [i_2] [i_3] [22])));
                            var_23 = ((-32 ? var_3 : (arr_17 [i_5] [7] [i_3] [i_2] [i_0 + 2] [i_0 + 2])));
                            arr_19 [i_5] [i_3] [i_2] [i_1] [i_0] = (arr_3 [i_1] [i_0 + 3]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_24 = var_4;
                            var_25 &= ((((-(arr_14 [i_0] [i_1] [i_3] [i_6] [i_6]))) ^ (~61850)));
                            var_26 = -1692902087614455163;
                            arr_22 [i_0] [i_6] [i_2] [i_3] = (!23735);
                        }
                    }
                    arr_23 [i_2] [i_2 + 2] = ((-36 / 23735) < (((var_9 == -119) ? ((-1004967190 ? var_6 : 43308)) : (arr_2 [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_27 += ((((min((max(12, (arr_28 [i_8] [i_7] [i_2] [i_1] [i_0]))), (((21 / (arr_7 [i_0] [i_1] [i_0] [i_7 - 1]))))))) ? (max(var_3, (var_9 * 0))) : (((arr_0 [i_0]) & (arr_8 [i_8] [22] [i_8] [i_8])))));
                                arr_30 [i_8] [i_2] [i_2] [i_2] [i_0] = (max((min(var_16, (max(1, var_17)))), (max(-var_7, 101))));
                                var_28 = (!(((max(-1004967205, (arr_29 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_0] [i_2]))))));
                                var_29 = -74348046;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (((((2 & var_1) >= var_14)) ? ((((min(var_6, 61848))) << (((min(268435455, 53)) - 37)))) : ((((min(var_2, var_3))) ? 1984 : (!3668)))));
    #pragma endscop
}
