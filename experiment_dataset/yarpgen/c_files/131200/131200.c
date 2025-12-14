/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) * ((max((arr_1 [i_0]), (!116))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_16 = (((arr_11 [i_0]) < var_12));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_17 = ((-(((arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) + -1618884068))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (!var_1);
                        }
                        var_18 = (((~var_6) + ((~(arr_9 [i_0] [i_0] [i_2])))));
                        var_19 = (((arr_13 [i_3 - 2] [i_3 - 4] [i_0] [i_3] [i_0] [i_3 - 4] [i_3 - 4]) - (arr_13 [i_3 + 1] [i_3 - 2] [i_0] [i_3] [i_0] [i_3 - 3] [i_3 - 2])));
                    }
                    var_20 = -863793559984778539;

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_21 *= ((+(((arr_11 [i_2]) & (arr_11 [i_2])))));

                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            var_22 -= (min(((var_15 ? (arr_19 [i_2] [i_5] [i_2]) : 1)), ((((arr_18 [i_5 - 1] [i_6] [i_6 + 1] [i_6] [i_6]) && (arr_18 [i_5 + 1] [i_5] [i_6 - 1] [i_2] [i_5 + 1]))))));
                            var_23 = ((((var_1 ? 0 : (min(var_11, (arr_10 [i_1] [i_1] [i_1]))))) + var_0));
                            var_24 = (max(var_24, ((((((arr_6 [i_5 + 1]) ? (arr_6 [i_5 - 1]) : -7015578322586997942)) + ((max(-1618884068, (arr_6 [i_5 - 1])))))))));
                            var_25 -= (((0 == var_9) ? (((((arr_16 [i_1] [i_1] [i_5 - 1] [i_6]) < (arr_7 [16] [18] [11]))))) : -7015578322586997942));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 = (~7015578322586997937);
                            var_27 -= -7015578322586997937;
                            var_28 += (((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_5 : (arr_19 [i_5 - 1] [i_5] [i_2])));
                        }
                        var_29 = (max(var_29, ((max((((arr_12 [i_0] [i_5 + 1] [i_2] [i_2] [i_2] [i_1]) * var_12)), (min(((min((arr_20 [i_1] [i_2] [i_2] [i_1] [6]), (arr_20 [i_0] [i_2] [i_2] [i_2] [i_2])))), (max(0, -1618884068)))))))));
                        var_30 = ((+(((arr_14 [i_0] [i_2] [i_5]) ? ((min(var_12, var_12))) : (arr_20 [i_5 - 1] [i_0] [i_5] [i_5 - 1] [i_5])))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_31 *= (max(((min(248, (!var_9)))), (~var_7)));
                        var_32 = (max(var_32, ((min((max(-7015578322586997937, 205)), (((((max((arr_25 [i_1]), (arr_12 [i_1] [4] [i_1] [i_1] [i_1] [2])))) || (arr_10 [i_0] [i_1] [i_8])))))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_33 = ((-(((!(arr_18 [i_0] [i_1] [i_0] [i_0] [i_0]))))));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_34 += (((max(75, ((var_1 ? (arr_27 [i_10] [i_2] [i_2] [i_0]) : (arr_1 [i_1]))))) - (((((min(var_10, 1))) / (arr_22 [i_1] [i_2] [i_1] [i_1]))))));
                            var_35 = (max(var_35, (((((min((max(var_12, var_3)), (arr_6 [i_9])))) && ((((arr_25 [i_9]) ? var_7 : var_15))))))));
                        }
                        for (int i_11 = 4; i_11 < 22;i_11 += 1)
                        {
                            var_36 = (min((arr_23 [i_0] [i_9] [11] [i_1] [i_0]), ((min((arr_5 [i_0] [i_11 + 1]), (arr_5 [i_0] [i_2]))))));
                            arr_33 [2] [2] [i_0] [i_2] [8] [i_2] &= (arr_31 [i_0] [i_0] [i_11] [i_0] [i_11 - 2] [6]);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_9] = ((!((((arr_0 [i_0]) - (arr_1 [i_2]))))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min((arr_20 [i_0] [i_0] [i_2] [4] [i_0]), (arr_20 [11] [i_0] [11] [21] [i_12]))));
                            var_37 ^= ((((min((arr_8 [i_2] [i_9] [i_2]), (min(55000, 7015578322586997941))))) && var_0));
                            var_38 = (((((min(var_7, (arr_4 [i_0] [i_12] [i_12]))))) << (((max(var_1, var_8)) - 4294967229))));
                        }
                    }
                }
            }
        }
    }
    var_39 -= var_7;
    var_40 ^= ((var_14 ? var_12 : (min(-1, (min(-195720925, 399196197))))));
    #pragma endscop
}
