/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((-1 ? var_3 : var_6)))) ? var_3 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_1]) % (arr_1 [i_0])))) == -7716969713705790603));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = ((max(var_2, (-9223372036854775807 - 1))));
                        var_20 = (max(var_20, 36028797018963967));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (arr_8 [i_0] [i_1] [i_2]);
                        var_22 = (max((((~var_8) ? -5342838161139326556 : (-2820120845192002542 | -8))), var_6));
                        var_23 = ((arr_1 [i_0]) / (((((61776 ? (arr_9 [4]) : (arr_5 [i_4])))) ? var_2 : var_14)));
                        var_24 = (max(var_24, ((max(((-((var_4 ? (arr_5 [i_2]) : 65535)))), (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_14 [i_1] [i_1] = var_13;
                        arr_15 [i_0] [i_0] = 6544444213691555749;
                        arr_16 [i_1] = (+((((min((arr_10 [i_0] [i_1]), -3144264941463046616))) ? (min(4611686018427387903, -7)) : (((arr_13 [i_0] [i_0] [i_5]) ? var_10 : (arr_13 [i_0] [i_2] [i_5]))))));
                    }
                    var_25 -= (max((((var_4 || ((max((arr_13 [i_0] [i_0] [i_2]), (arr_0 [i_0] [i_1]))))))), ((~(((127 > (arr_1 [i_1]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_21 [i_1] [i_1] = arr_9 [i_0];
                    arr_22 [i_0] = var_16;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_26 *= (!var_10);
                        arr_27 [i_1] [i_7] [i_7 - 2] [i_7 + 1] &= (arr_25 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 2]);
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_27 = (~var_10);

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_28 = (max(var_28, (arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_7 + 1])));
                            arr_33 [i_7] = (arr_23 [i_7 - 1] [i_7 - 2]);
                        }
                        arr_34 [i_0] [i_1] [i_7] [i_9] = ((((((var_7 < (arr_32 [i_1] [i_7] [7]))))) != (((arr_30 [i_9] [i_7 - 2] [i_7] [i_1] [i_1] [i_0]) ? (arr_7 [i_9] [i_1] [i_1]) : 5486842033056749609))));
                        var_29 = (min(var_29, ((var_8 ? (arr_10 [i_7 - 1] [1]) : (arr_10 [i_1] [i_7 - 2])))));
                    }
                    var_30 = (((arr_18 [i_1] [i_7 + 1] [4]) ? (arr_18 [i_0] [i_7 - 1] [i_1]) : (arr_18 [i_7] [i_7 + 1] [i_7 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
