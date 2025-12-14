/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((44666 ? (((arr_3 [i_0] [i_1] [i_1]) ? ((var_6 ? 536870656 : 44666)) : (arr_1 [i_0 - 1] [i_0 - 1]))) : (!44672)));
                var_17 ^= (((!18422285382046386078) | var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = ((min(((var_7 & (arr_3 [i_0] [i_2] [i_3])), (((var_6 ^ (arr_6 [12] [i_0] [i_2]))))))));

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                var_19 = var_1;
                                var_20 ^= (arr_11 [i_2]);
                            }
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                var_21 ^= (-1258131508 < 9223372036854775807);
                                var_22 ^= (((((arr_12 [2] [i_0 - 1] [i_2] [i_3 + 1] [i_5] [i_5]) ? (arr_12 [i_0] [i_0 - 1] [i_2] [i_3 + 1] [i_5] [0]) : (arr_12 [i_0] [i_0 - 1] [i_3] [i_3 + 1] [i_3] [i_5 + 1]))) + (((arr_12 [i_0] [i_0 - 1] [i_3] [i_3 + 1] [i_5] [i_5]) % (arr_12 [i_0] [i_0 - 1] [i_0] [i_3 + 1] [i_3 - 1] [i_5 + 1])))));
                                var_23 = (min(var_23, (arr_16 [i_0])));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (min(((((((arr_3 [i_0] [i_1] [i_1]) >= var_7)) ? var_12 : ((min(var_0, var_12)))))), (min(-18446744073709551615, (arr_11 [i_0 - 1])))));
                                arr_18 [i_3] [i_0] [i_0] [10] = (((min((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_5] [i_5]), var_4))) >= (max(20870, 2484623921)));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_2] [i_6] = (arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_6]);
                                var_24 = (((((arr_16 [i_0 - 1]) >= (arr_16 [i_0 - 1]))) ? ((-1775965685384346739 ? 22004 : var_5)) : (((arr_16 [i_0 - 1]) ? var_3 : var_2))));
                            }
                            var_25 = ((17 ? -9223372036854775807 : 3878937718));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_26 = (max(var_26, 1));
                            var_27 = (((((arr_22 [i_1] [i_1] [i_7 - 4] [i_8 + 1]) > var_16)) ? (88949172180884198 > 9223372036854775807) : ((var_4 ? (arr_22 [i_1] [i_7] [i_8] [i_8 + 2]) : (arr_26 [i_1] [i_8] [i_8] [i_8 + 1])))));
                            arr_27 [i_0 - 1] [i_0] [i_8 + 2] [i_0] = ((!((!(-4890987082876090035 && 132)))));

                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                arr_31 [i_0] [i_1] [i_7 - 2] [i_8 - 1] [i_9] = var_13;
                                var_28 = ((!((min(88949172180884179, (((-(arr_24 [i_0 - 1] [i_1] [i_8] [i_0])))))))));
                                var_29 ^= ((((!44666) / (arr_2 [i_0 - 1]))) << ((((((min((arr_28 [i_1] [i_9] [i_0 - 1] [i_1] [i_7 - 3] [i_9]), var_10))) ? var_9 : (((arr_14 [i_0] [i_0] [1] [i_1] [i_9]) ? (arr_26 [i_7] [i_7] [9] [i_7]) : var_13)))) - 18446744071579661839)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 ^= var_15;
    #pragma endscop
}
