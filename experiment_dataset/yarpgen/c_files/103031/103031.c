/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_10 = var_0;
                    var_11 = (max(((((var_7 ? var_0 : var_5)))), ((2056998838 ? -var_0 : var_5))));
                    var_12 = (arr_4 [i_0 - 1] [i_0 + 1]);
                }
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    arr_10 [i_0 - 1] = (!2036829726);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_13 = (arr_12 [i_0 - 1] [i_1 + 1] [i_3 - 2] [i_4] [i_4] [i_4]);
                        arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] = (~var_3);
                        var_14 = -var_9;
                        var_15 = (!(arr_6 [i_0 - 1] [i_1 + 1] [i_3 - 1] [i_4]));
                        var_16 ^= (((-9223372036854775807 - 1) ? 1079251459 : 2056998838));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_3 - 1] [i_5] = var_5;
                        var_17 = (min((30864 * 1), (((arr_0 [i_0 - 1]) ? var_0 : 30872))));
                        arr_19 [i_0 - 1] = ((-(((arr_2 [i_0 - 1]) ? (arr_12 [i_0 + 1] [i_1 + 1] [i_5] [i_0 - 1] [i_3 - 2] [i_1 + 1]) : 3218579832))));
                    }
                }

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_18 = ((var_5 & (min(var_4, ((min(var_7, 1)))))));
                    arr_22 [i_6] [i_1 + 1] [i_0 - 1] [i_0 - 1] = ((-6166738646035194415 ? (((-((min(30847, var_2)))))) : (arr_21 [i_0 + 1] [i_1 + 1])));
                    var_19 = ((((arr_17 [i_1 + 1] [i_0 + 1] [i_6] [i_6]) ? (arr_20 [i_1 + 1] [i_0 + 1] [i_6]) : (arr_17 [i_1 + 1] [i_0 + 1] [i_6] [i_1 - 2]))));
                    var_20 = (arr_4 [i_6] [i_1 - 2]);
                }
                var_21 = 0;
            }
        }
    }
    var_22 |= (((((min(var_4, 740981836)))) ? var_4 : var_7));
    #pragma endscop
}
