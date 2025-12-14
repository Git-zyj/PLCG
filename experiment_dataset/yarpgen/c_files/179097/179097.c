/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3641936185;
    var_18 -= -83;
    var_19 = ((~((((35 && var_4) && var_13)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (min((min(((min(var_12, var_7))), (max((arr_2 [i_0]), (arr_0 [i_0]))))), (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (((((min(0, 35))) | 65523)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (((((1422133258 ? (arr_1 [i_1]) : 126))) ? ((-53 % ((-12048 ^ (arr_8 [i_1]))))) : (((arr_5 [i_1]) ? (((((arr_8 [i_1]) + 9223372036854775807)) << (var_9 - 71))) : ((((arr_2 [i_1]) ? var_14 : 29869)))))));
        var_21 |= (((((2872834038 ? (max(var_3, -29849)) : (arr_5 [i_1])))) | (((var_10 ^ var_16) ? (-5601 | 15867044096676299338) : (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_22 = (3821 | 5247);
                                arr_21 [i_3] [i_2] [i_3] [i_3] = (((((max(1993762954, 2)))) << ((((((var_13 >> (((arr_0 [i_5]) + 117)))) | var_13)) - 12))));
                            }
                        }
                    }
                    var_23 = (((!491226065) || ((!(arr_15 [i_2])))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (min(var_24, (((1422133258 ? (arr_15 [i_6]) : 97)))));
                        arr_24 [i_1] [i_1] [i_3] [i_6] = (arr_1 [i_1]);
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_29 [i_3] [i_3] = var_11;
                        var_25 += (((max(var_16, var_5))));
                        arr_30 [i_3] = (((((((arr_7 [i_7 + 1]) == var_16)))) | (max((arr_23 [i_7 + 1]), 2872834061))));
                    }
                    var_26 = (max(var_1, 549755813887));
                }
            }
        }
    }
    #pragma endscop
}
