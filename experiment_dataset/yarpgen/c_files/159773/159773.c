/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] = ((-(((1250220360 == (arr_3 [i_0] [21] [i_2 + 1]))))));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] = ((((((((~(arr_5 [13] [13] [i_2] [i_3])))) / (((arr_2 [10] [10]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0])))))) ? var_9 : (!var_3)));

                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [24] [i_0] [i_0] [i_0] [i_3] = ((-((+(max((arr_2 [i_4] [4]), -16))))));
                            var_16 = (max(var_16, (arr_13 [i_0 - 1] [i_2 - 1] [i_2] [i_3] [20])));
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = arr_3 [i_0 - 1] [i_0 - 1] [19];
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_0] = (arr_2 [i_2 - 2] [i_4 - 2]);
                            var_17 = (1 != 3224703393);
                        }
                    }
                    var_18 = (((max(-1871558048, (arr_13 [i_0] [i_1] [i_0] [6] [i_0])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_19 = (max(var_19, (arr_6 [i_5])));
                    var_20 ^= (((arr_2 [i_5] [i_0 - 1]) + (arr_2 [i_0] [i_0 - 1])));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_21 = (min(var_21, (arr_10 [i_5] [i_1 - 1])));
                        arr_24 [i_0] = var_3;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_22 = -16777215;
                            var_23 += var_9;
                            var_24 *= (((arr_27 [i_0]) ? ((((arr_19 [i_0] [i_1] [i_1] [i_0]) ^ var_8))) : ((426911823292717856 ? (arr_26 [i_7] [18] [i_0] [i_7] [i_7]) : (arr_26 [i_7] [i_7] [21] [i_7] [i_7])))));
                        }
                        var_25 = (var_0 / 1);
                    }
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, ((min((max(-22, var_5)), (arr_11 [14] [i_1] [i_8] [i_8]))))));
                    var_27 = ((var_14 ? (((!(((635002685405554571 ? var_10 : 24)))))) : (((((arr_14 [i_0] [i_1] [i_8]) ? (arr_21 [i_0 - 1]) : var_2))))));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_28 = arr_15 [24] [24] [24] [i_10] [24];
                                var_29 = ((max(var_13, (((!(arr_33 [7] [i_1 + 1] [18] [i_10] [i_11] [i_11])))))));
                                var_30 += -5612875219737646314;
                                var_31 = (min(var_31, ((max(((min(var_15, var_1))), (arr_19 [i_0] [i_9] [i_10] [i_11]))))));
                            }
                        }
                    }
                    var_32 = (min(var_32, (+-0)));
                }

                for (int i_12 = 2; i_12 < 24;i_12 += 1)
                {
                    var_33 = (max(var_33, var_1));
                    arr_41 [i_0] [i_1] [i_0] = max(24639, 0);
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_34 *= ((!(((((max(11508, (arr_25 [i_0] [i_0] [i_0])))) ? (var_7 ^ var_3) : (arr_19 [i_14 + 2] [6] [i_1] [i_0]))))));
                                var_35 &= ((-var_0 ? var_9 : (arr_6 [i_1])));
                                var_36 = ((((+((max((-127 - 1), (-127 - 1)))))) * (((-32767 - 1) & ((max(54, var_3)))))));
                                var_37 = (max((min(((1516835281 ? (arr_25 [i_13] [i_0] [i_0]) : var_14)), 0)), (((15071 ? (arr_47 [i_13] [i_13] [23] [i_13 - 4] [i_13 - 1]) : -3400826036573382104)))));
                            }
                        }
                    }
                    var_38 = (min(((((var_9 + var_3) == 12))), 165));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                arr_53 [i_15] [i_15 + 1] [i_12] [i_15] [i_15] |= ((-(arr_15 [13] [i_1] [i_12] [i_12] [i_16])));
                                arr_54 [i_1] [i_1 + 1] [i_12] [11] [i_0] [i_15] [i_0] = (((!(arr_2 [i_1 - 1] [i_1 + 1]))));
                                arr_55 [i_0] [i_12] [i_12 - 2] [i_0] [i_12] = var_11;
                                arr_56 [i_0] [i_0] [i_0] [i_15] [i_16] = (arr_1 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = 2105391455196124215;
    var_40 = ((((((max(var_7, var_15)) + (~var_11)))) && -97));
    var_41 = var_3;
    #pragma endscop
}
