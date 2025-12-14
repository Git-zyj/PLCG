/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((var_10 ? (((var_6 ? (28414 / var_9) : ((var_11 ? var_7 : var_0))))) : (((((var_7 ? -1488089743312499478 : var_9))) ? (~23395) : ((var_11 ? -1488089743312499471 : 848239115))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = -23395;
                    var_16 ^= ((+(((arr_4 [i_2]) ? ((min((arr_4 [i_1]), 28438))) : (~var_6)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_17 -= (arr_13 [i_0] [i_3] [i_4] [18]);
                                var_18 = (arr_0 [i_0]);
                                var_19 = ((((227015106642109297 ? var_0 : var_8)) - -var_2));
                            }
                        }
                    }
                    var_20 = (((arr_6 [i_1] [i_1] [i_1]) ? (arr_9 [i_0] [12]) : (arr_9 [i_1] [i_0])));
                    var_21 = (max(var_21, ((((arr_13 [i_3] [i_1] [i_0] [i_0]) ? var_3 : ((10 ? -1488089743312499473 : var_7)))))));
                    var_22 = 1;
                }
                var_23 *= ((((min((~var_12), ((max(var_7, var_6)))))) ? (arr_3 [i_0] [i_1]) : (min(-1488089743312499462, var_0))));
                var_24 = ((((var_12 & (arr_11 [i_0])))) ? (min(var_10, (arr_11 [i_0]))) : (arr_11 [i_1]));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_25 = 17159326694060344017;
                        var_26 &= var_4;
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] = (~var_9);

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_27 = var_0;
                            var_28 = (((arr_12 [i_6 - 1] [i_8 - 1] [i_1]) - (arr_12 [i_6 - 1] [i_8 - 1] [i_8 - 1])));
                            var_29 = (max(var_29, -var_7));
                        }
                        var_30 = (max(var_30, ((((((arr_24 [i_6] [i_1]) * var_6)) < (((((arr_21 [i_0]) < var_8)))))))));
                        var_31 = (min(var_31, var_0));
                        arr_29 [i_0] [i_0] [i_0] [i_6] [i_8 + 1] &= -1237941422;
                    }
                    var_32 = var_13;

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_33 [13] [i_1] [i_1] [i_10] [i_0] = (arr_7 [i_0] [i_6] [i_6 + 1] [i_10]);
                        var_33 = (min(var_33, ((((arr_10 [i_0] [i_1] [i_0]) ? 2695084782564952410 : (arr_7 [i_6 - 1] [i_6] [i_6] [i_10]))))));
                        var_34 &= (((arr_12 [i_0] [i_6 + 1] [i_6]) * (arr_30 [i_0] [i_1] [i_0] [i_10])));
                    }
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_35 = (min(var_35, ((min((arr_8 [i_0] [i_1] [i_11 - 1] [i_11 - 1]), ((((var_13 ? var_10 : (arr_23 [i_0] [i_11]))))))))));
                    arr_36 [i_1] = (max((min((min(var_11, (arr_18 [i_1] [i_1] [i_1] [i_11]))), 12920982128315929279)), ((((arr_16 [i_1] [i_11 - 1] [i_11] [i_1] [i_11 - 1]) >> (((arr_21 [i_1]) + 25654781393940228)))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_36 = (min(var_36, ((max((21 && 6), (max((arr_30 [i_13] [i_0] [i_0] [i_0]), (var_5 >= 1488089743312499477))))))));
                                arr_43 [i_0] [i_1] [i_11] [i_12] [i_13] = (arr_20 [i_1] [i_11] [i_1] [i_1]);
                                var_37 = (22 ? var_13 : (min(var_13, (arr_19 [i_1] [i_11 - 1] [i_11 - 1]))));
                                var_38 = ((((min((arr_40 [i_1]), (max(1, -2250490447054675054))))) ? (min((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), var_4)) : ((max(var_8, var_2)))));
                            }
                        }
                    }
                    var_39 = (((12920982128315929282 >> (((arr_28 [i_0] [i_0] [i_0] [i_1] [i_11] [i_0] [0]) - 4095)))));
                }
            }
        }
    }
    var_40 |= (max((((((-438966913826719894 ? var_6 : 4223671949))) ? var_8 : ((7734908013253505083 ? var_3 : 5525761945393622338)))), ((max(var_9, (max(var_4, var_0)))))));
    #pragma endscop
}
