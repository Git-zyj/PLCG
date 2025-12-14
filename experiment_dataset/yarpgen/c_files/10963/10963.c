/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((10833367136423896286 ? (arr_0 [i_0] [i_0 - 2]) : (arr_3 [5] [i_0 - 2])))) ? ((((!(((var_0 ? var_8 : var_8))))))) : ((120 ? (arr_3 [i_0 - 1] [i_0 + 1]) : var_0))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 ^= ((arr_5 [i_2] [i_2 - 2]) ? var_14 : var_1);
                        var_16 = var_12;
                        var_17 ^= (((((-465954779 ? 7613376937285655330 : (arr_3 [i_0] [i_0])))) ? (arr_4 [i_1] [i_2 + 3] [i_3]) : var_10));
                        var_18 = ((7613376937285655329 ? (arr_4 [i_2 + 2] [i_1] [i_0]) : (arr_4 [i_1] [i_2 - 1] [i_3])));
                        arr_14 [i_0] [i_1] [i_3] [i_3] = (((((arr_9 [i_0 - 1] [i_1] [i_2] [i_3]) + 2147483647)) >> (var_8 - 18323677937536750210)));
                    }

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_17 [i_4] [i_1] [i_0] = ((((var_9 >= (arr_13 [i_0] [i_1] [i_2] [i_1]))) ? (arr_16 [i_4] [i_4] [i_4] [i_4]) : 17804871299551885631));
                        arr_18 [i_0] [i_1] [i_2] [i_4] = -7321686774658759076;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] |= ((var_6 ? ((var_3 ? var_1 : (arr_1 [i_5]))) : var_14));
                        var_19 ^= (~-var_0);
                        arr_23 [i_5] [i_5] [i_2] [i_0] [i_1] [i_0] = ((!(arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 2])));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 += (((((var_13 ? var_7 : 7321686774658759073))) ? (arr_29 [i_0] [i_7 + 4] [i_1] [i_7] [i_0 - 2]) : -6461086315467338269));
                                var_21 ^= (!var_1);
                                var_22 = (max(var_22, (((-((-7321686774658759072 ? var_9 : var_10)))))));
                                var_23 = (arr_31 [i_8]);
                            }
                        }
                    }
                    var_24 = (max(var_24, ((((((var_5 ? var_12 : 10))) ? (((var_6 + 9223372036854775807) << (((var_6 + 3987533598322571183) - 32)))) : (arr_13 [i_0] [i_1] [i_0 - 1] [i_0]))))));
                    arr_33 [i_6] [i_1] [i_0] [i_0] = (((arr_29 [i_0 - 1] [i_0] [i_0 + 1] [17] [i_0]) ? var_6 : (arr_29 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])));
                    arr_34 [i_0] [i_1] [i_6] = (((arr_12 [i_1] [i_1] [i_1] [i_1] [i_6]) | ((-8323939592965154745 ? var_6 : var_6))));
                }

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_25 = ((!((((var_4 ? var_7 : (arr_24 [i_0] [i_1] [i_1] [i_9])))))));
                    arr_37 [i_0] [i_9] = (((arr_2 [3] [i_9]) ? ((((arr_2 [i_0 - 2] [i_0 + 1]) ? var_11 : (~24848)))) : ((-((var_2 ? 7 : var_1))))));
                }
            }
        }
    }
    var_26 ^= -var_6;
    #pragma endscop
}
