/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((arr_2 [i_1 - 4]) ? (((0 ? var_12 : ((~(arr_3 [i_1])))))) : (max((arr_1 [i_1]), (arr_5 [i_0 - 2])))));
                arr_8 [i_1] |= (((!((((arr_1 [8]) ? (arr_6 [i_0] [1] [i_0]) : (arr_3 [i_1])))))));
                arr_9 [17] [17] |= var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_2 [i_0]) ? (min(7046379449482351804, (arr_2 [i_0 + 2]))) : 7046379449482351804));
                            arr_14 [i_3] = (min((((var_9 > ((~(arr_3 [i_0])))))), (((1 ? var_9 : (arr_0 [i_0]))))));
                            var_19 = (((arr_2 [i_0 - 2]) ? (min((~1), (max(7046379449482351804, 177)))) : ((((var_9 < (max(177, 522240))))))));
                            var_20 = (max((arr_11 [i_0]), (arr_0 [i_0 - 2])));
                        }
                    }
                }
                var_21 = -1770224031;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_22 = ((var_9 / (((-24908 + 2147483647) << (((102 < 7046379449482351804) - 1))))));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_23 = (((((min(1023046846, (arr_5 [11])))) ? ((var_7 ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_5]) : var_12)) : (max((arr_2 [12]), 1023046846)))));
                        var_24 *= ((31 ? (((~((((arr_10 [19] [19] [19]) && (arr_17 [0]))))))) : 7046379449482351780));
                        arr_26 [i_4] [i_4] [9] [19] [10] [9] = 154;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_29 [18] [9] [i_8] [i_8] [i_8] [18] = (min((-2147483647 - 1), ((max((arr_18 [i_4] [i_5]), (arr_18 [i_6] [i_8]))))));

                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_25 ^= 55913;
                            var_26 += (max(0, 40634));
                        }
                    }
                    var_27 = (min(((~(((arr_16 [4]) ? (arr_24 [i_4] [i_4] [i_4] [i_4] [9]) : 4)))), (max((arr_13 [12] [i_5] [i_5] [i_6] [i_5]), (arr_0 [i_4])))));
                    var_28 = (min(var_28, ((((arr_2 [10]) ? (min((((-32767 - 1) + -7046379449482351781)), (arr_15 [i_4] [i_4]))) : -1240094485429769599)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_29 = (((arr_20 [i_4] [9] [i_4] [i_4]) < (arr_20 [i_4] [8] [8] [i_10])));
                    arr_34 [i_4] [i_5] [7] = (((arr_33 [i_5] [i_4]) ? (arr_33 [i_5] [i_5]) : (arr_33 [i_4] [i_5])));
                }

                /* vectorizable */
                for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_5] [i_5] = ((((((var_5 <= (arr_15 [i_5] [8]))))) != (((arr_10 [17] [10] [11]) ? (arr_24 [10] [10] [i_11] [i_11] [10]) : 4226350476))));
                    var_30 ^= (24908 ? (arr_10 [19] [i_5] [0]) : ((-(arr_33 [i_4] [i_5]))));
                    var_31 = (min(var_31, ((((arr_28 [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11 - 1]) && (arr_28 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2]))))));
                }
                for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_32 = (max(var_32, (arr_28 [i_4] [6] [i_12] [i_4])));
                                var_33 = (var_6 <= 0);
                            }
                        }
                    }
                    var_34 = 4034274585;
                }
                var_35 = (((~var_3) ? 0 : (((arr_47 [i_4] [18] [12] [18] [2] [i_4]) ? ((max(var_2, 71))) : ((-(arr_28 [i_4] [i_4] [i_5] [i_4])))))));
            }
        }
    }
    #pragma endscop
}
