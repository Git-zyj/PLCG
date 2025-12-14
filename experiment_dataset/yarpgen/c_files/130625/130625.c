/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_2;
    var_14 = (min(var_14, (((((~(max(var_2, var_6)))) | var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((var_6 ? 7930222870625779947 : (arr_2 [i_0] [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 |= ((2147450880 ? 10516521203083771670 : 7930222870625779945));
                    var_16 = 10516521203083771669;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] = (((~var_4) ? var_6 : ((7930222870625779947 * (!var_2)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((-(((!(((131 ? var_5 : var_10)))))))))));
                                arr_19 [i_1] [i_1] [i_1] = var_12;
                            }
                        }
                    }
                    var_18 = (((((max(4007509659, 287457620))) ? 8649 : ((3894768636 ? 9141984012528915567 : 2)))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_19 -= (min((~var_9), var_4));
                                arr_26 [i_0] [i_1] [i_1] [i_1] [i_7 + 1] = (((((max((arr_24 [i_0] [i_1] [1] [i_6] [3]), -6))) ? var_2 : (min(var_0, 735389557)))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_29 [i_1] [i_1] = (min(((((min(8672, 28047))) ? (((10516521203083771657 ? -3 : var_6))) : (max((arr_23 [i_1]), var_3)))), 7));
                    arr_30 [i_0 + 3] [i_0] [i_1] [i_0] = ((-8649 || (((-283654956 ? (arr_1 [i_0 + 1] [i_0 + 3]) : var_11)))));
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_35 [i_0] [i_1] = (max((max(-1221521503106598003, var_11)), var_0));
                    arr_36 [i_1] [i_1] [i_1] [i_1] = (max(((63 / (arr_33 [i_9] [1] [i_1] [1]))), (((127 ? ((var_9 ? 8649 : (arr_0 [i_0] [i_0]))) : var_10)))));
                    arr_37 [i_1] [i_1] = var_3;
                }

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_40 [2] [i_1] [i_10] &= ((-var_10 ? var_3 : ((~(arr_4 [12] [i_0 + 2] [12])))));
                    arr_41 [i_0] [i_1] [i_1] = ((-(max((arr_5 [5] [5]), (1800645744 < var_3)))));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_44 [i_0] [i_0] [i_11] [i_11] &= ((+((18446744073709551615 ? 51 : (((arr_15 [i_0]) ? (arr_23 [i_11]) : (arr_18 [i_11] [i_11] [i_11] [i_11])))))));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_48 [i_0] [i_1] [i_0] [i_1] [i_11] [i_12] = (max(((var_5 | ((13 ? var_8 : 0)))), (!var_4)));
                        var_20 = (min(var_20, ((((28047 > 6597608456732076709) ? (max(((-2 * (arr_25 [i_12] [13] [1] [i_1] [13]))), (var_9 + -7))) : (arr_32 [i_12] [i_11] [i_0 + 2]))))));
                        arr_49 [i_0] [i_1] [i_11] [i_12] = (max((min(((var_7 ? 9223372036854775780 : var_12)), (var_0 & -1))), ((~((2892684322 ? var_6 : var_4))))));
                    }
                }
            }
        }
    }
    var_21 = 127;
    #pragma endscop
}
