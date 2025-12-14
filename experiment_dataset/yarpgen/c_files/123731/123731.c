/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min((min(var_10, (((arr_1 [i_2 + 2] [i_3]) / 2199023247360)))), ((max(573310169, 61)))));
                                var_20 = ((65535 ? var_0 : 65535));
                            }
                        }
                    }
                    var_21 = (max((((arr_11 [i_0] [i_1] [i_2] [i_0] [0]) ? (min(var_7, (arr_4 [i_0] [i_0]))) : (var_3 <= var_16))), (max((arr_5 [i_1 - 1] [i_1 + 2] [i_0 - 2]), -9223372036854775790))));
                    arr_12 [i_0] = (min(18446744073709551615, (arr_11 [i_2 - 1] [10] [i_2 + 2] [i_2] [i_2])));
                    arr_13 [i_0] [i_1] [i_0] = var_14;
                }
            }
        }
    }
    var_22 = ((1736637691 ? (min(var_11, 0)) : 65528));
    var_23 -= ((-(((!((min(var_12, var_10))))))));
    var_24 = (min(var_16, ((min(var_6, var_15)))));
    #pragma endscop
}
