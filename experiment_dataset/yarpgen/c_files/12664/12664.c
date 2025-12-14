/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 += (58734 & -127);
        var_21 &= 9007199120523264;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = -46;
        var_22 = (min(var_22, ((!(arr_5 [i_1])))));
    }
    var_23 = (max(var_23, ((((!((min(var_13, var_11))))) ? ((6801 ? 18446744073709551605 : 516)) : (((((18014398509481920 ? var_10 : var_1))) / 14142121629654421002))))));
    var_24 += (~(min((max(var_18, 1163995285)), var_7)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_25 = (((!var_3) <= ((((((var_17 >= (arr_4 [i_3])))) <= ((min(58724, (arr_5 [i_5])))))))));
                            arr_20 [i_2] [i_3] [i_3] [i_5] |= (((arr_16 [7]) ? (max((arr_18 [i_5] [i_4 + 1] [7] [i_4 + 1]), var_18)) : (((22 >> (((arr_17 [i_5] [i_4 - 1] [i_4] [i_4 - 1]) - 31)))))));
                            var_26 = (arr_1 [i_3]);
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 7;i_7 += 1)
                    {
                        var_27 = (arr_19 [i_7 + 1] [i_7 + 1] [i_7] [i_7]);
                        arr_25 [i_2] [i_3] [i_6] [i_6] = ((((max((183873372 | var_2), var_14))) | (max((arr_1 [i_6]), ((var_13 ? 42 : (arr_15 [i_7] [i_3] [i_2])))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_28 = (((~var_1) ? ((((!(((-(arr_16 [i_8])))))))) : ((65019 ? (arr_15 [i_3] [i_6] [i_6]) : (arr_32 [i_6] [i_2] [i_9] [i_8])))));
                            arr_33 [i_2] [i_3] [i_6] [i_6] [i_9] = (max((min(((((arr_27 [4] [1] [i_6] [i_6] [4] [4]) | 3306921135))), (max(var_0, (arr_27 [10] [2] [2] [3] [i_8] [i_9]))))), (((~(72243829 ^ 0))))));
                            var_29 = (((((arr_16 [i_6]) ? (arr_16 [i_2]) : (arr_16 [7])))) ? var_14 : (arr_22 [i_2] [6] [i_2] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_30 = (max(var_30, ((max(((28269 >> (((-127 - 1) + 153)))), (((arr_35 [i_10] [0] [6] [8] [i_10] [i_10]) ? var_19 : -22)))))));
                            arr_36 [i_6] [i_6] [i_6] = (((arr_31 [9] [i_3] [i_6]) ? (var_18 || 38761) : (((arr_27 [i_2] [i_3] [i_3] [i_6] [i_8] [3]) ? (arr_16 [3]) : (arr_18 [i_8] [i_6] [2] [i_2])))));
                            arr_37 [i_2] [2] [i_2] |= (arr_1 [1]);
                            var_31 = ((-1073741824 ? 576053822530584711 : -8782750541075693156));
                        }
                        for (int i_11 = 2; i_11 < 8;i_11 += 1)
                        {
                            var_32 = (max(var_18, -53));
                            arr_42 [i_6] = (((((~(arr_6 [i_6] [6])))) >= (((max(44, -16))))));
                        }
                        var_33 |= ((9187343239835811840 & (arr_35 [i_2] [i_3] [i_6] [i_6] [i_8] [3])));
                    }
                    arr_43 [i_2] [i_3] |= (((((arr_11 [i_2]) || (arr_11 [i_2]))) ? -564030681 : (!1073741824)));
                    var_34 = (max(var_34, -22));
                    var_35 = (min(((28269 ? 32763 : -36)), -1053504039));
                }
                var_36 = (max(var_36, 21));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 8;i_14 += 1)
                        {
                            {
                                arr_54 [i_2] [i_2] [4] [9] [i_2] [2] = 16383;
                                var_37 = ((((((1073741824 / (arr_13 [3] [2] [5]))) == ((~(arr_14 [i_2] [9]))))) ? ((~(max((arr_6 [i_2] [0]), -9187343239835811841)))) : ((((!(arr_9 [i_14 + 2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
