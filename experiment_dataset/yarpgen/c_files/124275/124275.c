/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((((((arr_4 [i_0]) ? 7941286911202406684 : (arr_0 [i_0]))) * ((((arr_2 [i_0] [i_1]) * -1))))), var_11));
                var_18 = (max(var_18, ((((min(((max(363359618, 371591505))), (arr_0 [i_0])))) ? (min((arr_4 [i_0]), (arr_3 [i_0] [i_1]))) : 65535))));
                arr_6 [i_0] [i_0] [i_1] = (((!2610558750) ? -1495603679 : ((((arr_1 [i_0]) ^ (arr_0 [i_0]))))));
                arr_7 [i_0] [i_0] = ((((-((127 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1]))))) <= (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_19 = (((((-(var_6 - 1)))) ? 65533 : 0));
    var_20 = (max((((var_2 ? var_13 : var_4))), ((var_13 ? ((-371591505 ? 2046874544 : 17970997463188928432)) : 122))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_21 |= (max(((((max(var_6, var_0))) ? (arr_4 [i_4]) : ((max((arr_1 [i_3]), 371591505))))), ((min(var_1, var_3)))));
                        var_22 = (max(var_22, 16383));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_23 = (((-506372977 ? 2078650650 : 1)));
                        var_24 = (((arr_11 [i_2] [i_2] [i_3 - 1]) / (arr_11 [i_2] [i_3] [i_3 + 2])));
                        var_25 = ((((-2147483647 - 1) < -1)));
                        arr_21 [i_2] [i_3] [i_2] [i_6] = (((arr_3 [i_6 + 1] [i_3 + 3]) ? (((arr_14 [i_4] [i_4] [i_3] [i_2]) ? (arr_20 [i_2] [i_3] [i_3] [i_6]) : var_0)) : (arr_15 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_26 = 209;
                        var_27 ^= (((((~(arr_11 [i_2] [i_2] [i_2])))) ? ((((arr_17 [i_2] [i_2] [i_3] [i_3] [i_7]) >= 17970997463188928428))) : 1));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_28 = (arr_16 [i_2] [i_3] [i_4] [i_3] [i_3]);

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = (arr_18 [i_9] [i_8] [i_4] [i_3] [i_3] [i_2]);
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_8] = (~1644239814);
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_2] [i_8] [i_8] [i_10] = (arr_29 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_10 - 1] [i_10 + 3] [i_10 + 3]);
                            var_30 = var_12;
                            var_31 = 963967956;
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_32 = (((arr_29 [i_2] [i_2] [i_3] [i_3] [i_8] [i_11]) && (arr_22 [i_3 - 2] [i_11 + 3])));
                            arr_36 [i_11 + 1] [i_8] [i_8] [i_4] [i_8] [i_2] = var_9;
                        }
                    }
                    arr_37 [i_2] [i_2] [i_3] [i_2] = ((-(((!(arr_16 [i_2] [i_3 - 1] [i_4] [i_4] [i_3 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((((arr_15 [i_3] [i_4] [i_4] [i_13 + 2]) ? (-9223372036854775807 - 1) : -371591481)) % ((min(var_13, 65535)))))) && ((max(268435455, 5852908071587631962)))));
                                var_33 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (max((((((max(-16, var_17)))) >= (min(18446744073709551615, var_12)))), var_3));
    #pragma endscop
}
