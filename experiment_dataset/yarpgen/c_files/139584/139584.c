/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 += (((((min(4194272, (arr_2 [i_0]))) > (arr_4 [i_0]))) ? (min((~4004206849), 9223372036854775807)) : ((((arr_2 [i_1 + 1]) ? var_1 : ((-(arr_3 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 *= (min(((((min((arr_9 [i_0] [i_1 - 2] [i_2] [i_3]), (arr_3 [i_0]))) << -9223372036854775782))), 9223372036854775791));
                            var_12 = (((arr_10 [i_0] [3] [i_0] [3]) << (var_6 + 22)));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        arr_13 [i_4] = ((((((min(var_0, (arr_12 [i_4]))) + 9223372036854775807)) << (((max(2036721335, (arr_12 [i_4]))) - 2036721335)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_13 = (((max((arr_14 [i_4] [i_5] [i_5]), ((max((arr_12 [1]), var_9))))) != (9223372036854775807 == -9223372036854775799)));
                        var_14 &= ((9223372036854775802 ? ((((!(arr_12 [i_4 - 1]))))) : (((max(-9223372036854775761, (arr_20 [i_4] [i_5] [i_6]))) | (((~(arr_11 [i_6] [2]))))))));

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_15 = (min(var_15, (((-(((((var_0 + 2147483647) << (((arr_26 [i_4 - 2] [i_4] [0] [i_4] [i_4 - 2] [0]) - 2942315200)))) * (((arr_15 [i_4] [i_5] [i_5]) / (arr_22 [i_6] [i_6] [i_6] [i_6]))))))))));
                            var_16 = (arr_15 [i_4 - 1] [i_5] [i_7]);
                            arr_28 [i_4 - 2] [3] = (min(((-9184 % (~var_0))), (((1 || (arr_11 [i_4 - 1] [i_8 + 2]))))));
                            var_17 = (arr_23 [i_4 - 2] [i_5] [i_7]);
                            arr_29 [9] [i_6] [i_4 - 2] = (!var_0);
                        }
                    }
                }
            }
        }
        var_18 = ((-9223372036854775792 ? (((1 / (arr_24 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1])))) : (max((((var_1 == (arr_25 [i_4] [13] [13] [12] [i_4 - 2])))), 73204947))));
    }
    #pragma endscop
}
