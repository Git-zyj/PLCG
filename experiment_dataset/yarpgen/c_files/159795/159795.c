/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_0 ? var_7 : (min(var_13, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_2] [i_2] [i_2 + 2] = (max(61428, 17911));
                    var_16 = (max(var_16, ((min(((((max((arr_0 [i_0]), (arr_1 [i_0])))) ? (!-96) : ((max((arr_4 [i_0] [i_0]), (arr_3 [i_2])))))), 26576)))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_3] [i_3] [i_2 + 1] [i_0] [i_0] [i_3] = (((max(1, 4))));
                        var_17 = (((max(var_10, 1))));
                        arr_10 [i_1] |= ((((max((arr_2 [i_2 - 4] [i_0 - 1]), (((arr_3 [i_0]) & 90))))) ? (arr_2 [i_0 - 2] [i_0 - 2]) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : -26564))));
                        var_18 -= 15627856189669171023;
                        arr_11 [i_3] [i_0 + 1] [i_3] [i_0 + 1] [i_0 - 1] = (max(((((min((arr_5 [i_2]), (arr_5 [i_0 + 2])))) << ((((var_14 ? var_2 : (arr_0 [i_0]))) - 15260776451490983365)))), ((min(-31, (arr_2 [i_0 + 1] [i_0 - 1]))))));
                    }
                    var_19 = (min(var_19, ((((max((arr_7 [i_0] [i_1] [i_1] [i_1]), var_9)) + ((max((arr_7 [i_0] [i_1] [i_2] [i_1]), (arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 2])))))))));
                }

                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    var_20 ^= (max((2818887884040380598 + 2818887884040380585), ((max(((max((arr_8 [i_0] [i_1] [i_1]), var_7))), (((arr_2 [i_0] [i_4]) ? 70 : (arr_0 [i_0]))))))));
                    var_21 ^= -985162418487296;
                    arr_16 [i_0 + 2] [i_0 + 1] [i_4] [i_0 + 1] = (max((max((((arr_12 [i_4] [i_4] [i_4] [i_4]) ? (arr_5 [i_1]) : (arr_7 [i_4 - 3] [i_4] [i_4] [i_0]))), ((var_5 ? (arr_14 [i_4] [i_1]) : var_7)))), (arr_14 [i_4] [i_4])));
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = (max(var_22, (-127 - 1)));
                                var_23 &= (min(((max((arr_12 [i_1] [i_6] [i_1] [i_6]), (var_0 + 165)))), (min((arr_12 [i_7] [i_5 + 2] [i_0 - 2] [i_6]), 985162418487296))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_28 [i_0] [i_5] = var_11;
                        arr_29 [i_5] = (max((max((((arr_5 [i_8]) | (arr_17 [i_0] [i_0]))), (157 > 22198))), (((33809 ? 32 : 191)))));
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_32 [i_1] [i_0] = (min(((min((545918508 < -24981), (var_7 >= var_5)))), (min(((var_14 ? (arr_18 [i_0] [i_1]) : var_12)), 234))));
                    arr_33 [i_0] [i_0] [i_9] [i_9] = ((!((((min(var_12, var_10))) == (max(28583, (arr_24 [i_9] [i_1] [i_0] [i_1] [i_1] [i_0])))))));
                    var_24 = (arr_17 [i_0] [i_1]);
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    var_25 = (min(var_25, ((max((max((arr_34 [i_0 + 1]), (arr_34 [i_0 + 1]))), ((~(arr_34 [i_0 + 1]))))))));
                    arr_38 [i_0 - 1] [i_0 - 3] = ((~(((((((arr_17 [i_0] [i_0]) || var_5)))) + (((arr_15 [i_0 + 2] [i_0 - 2] [i_1] [i_10]) ? (arr_18 [i_0] [i_1]) : (arr_37 [i_0 + 2] [i_0 - 2] [i_0] [i_0])))))));

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        arr_41 [i_11 - 1] [i_0 + 1] [i_1] [i_0] [i_0 + 1] = (min((min((arr_30 [i_0 - 1] [i_0] [i_0] [i_0]), (arr_21 [i_1] [i_0 - 3] [i_0 + 1] [i_0 - 1]))), (((((max(var_6, var_0))) && (var_2 ^ -1))))));
                        arr_42 [i_0] [i_0] [i_10] [i_11 - 1] [i_10] = (arr_37 [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1]);
                        var_26 |= (((((arr_21 [i_1] [i_11] [i_10] [i_1]) ? (((arr_31 [i_0] [i_0]) / (arr_12 [i_1] [i_1] [i_10] [i_11]))) : -31726)) == ((max((arr_25 [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_10 - 2]), 62)))));
                        var_27 = max(((max((((18446744073709551615 == (arr_18 [i_0 - 2] [i_1])))), (4294967295 ^ 95)))), (arr_24 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1]));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_28 = ((((max(((max(var_0, var_11))), (~var_12)))) ? ((~(arr_21 [i_1] [i_1] [i_10 - 2] [i_12]))) : 0));
                                arr_50 [i_0] [i_0] [i_10] [i_12] [i_0] [i_13] |= (min((min((arr_45 [i_0] [i_10 - 2] [i_10] [i_12] [i_10 - 2] [i_0 + 2]), (arr_12 [i_12] [i_12] [i_10 + 1] [i_12]))), ((max((min(1, -142048954)), (max(119, var_14)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (((!24) != var_7));
    var_30 = var_11;
    var_31 = (max(var_31, var_1));
    #pragma endscop
}
