/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 -= (((var_7 && (arr_2 [i_0]))));
        var_13 = (arr_1 [i_0]);
        var_14 = ((+((min((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_15 = ((((min((18446744073709551615 > var_2), ((var_11 ? var_7 : var_4))))) ? (min(var_3, var_2)) : (((((arr_5 [i_1] [i_1]) || var_1))))));
                var_16 = (arr_1 [i_2]);

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_17 *= var_3;
                    arr_12 [i_3] [i_2] [4] = (max((((((-1 ? var_9 : var_1))) ? ((var_2 ? 5550042718714519460 : var_8)) : (((max(18066, 18063)))))), var_9));
                }
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_1] [i_1] [i_4] = var_10;
                    var_18 = ((((arr_11 [i_4 + 3] [i_4 - 2] [i_4 + 1]) * var_2)));
                    var_19 = ((~(max((arr_5 [i_1] [i_4 - 2]), (18063 | var_0)))));
                    var_20 = ((~((max((arr_5 [i_4 - 1] [i_4 - 2]), var_8)))));
                }
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_21 = (min((arr_22 [i_1] [14] [i_5] [i_5 - 2] [i_6] [i_6] [i_7]), (~var_6)));
                                arr_25 [i_1] [i_2] [i_5 - 2] [i_5] [i_7] = (max(((var_5 ? (arr_6 [i_7 + 2] [8]) : (arr_21 [i_5 + 1] [i_5 + 1] [i_6 - 3] [i_6 - 2]))), var_7));
                                var_22 *= -18064;
                            }
                        }
                    }
                    var_23 += (26017 / (arr_15 [i_1] [i_1] [i_1]));
                    var_24 += (((~18051) ? (((-var_9 - (var_11 + var_6)))) : var_3));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = (min(-18041, -var_5));
                        var_26 += ((~(max(((var_0 ? var_1 : (arr_21 [i_1] [i_2] [i_1] [i_8]))), 4))));
                        arr_29 [17] [i_5] [i_5] [i_8] = ((min(var_9, (67 + var_4))));
                        var_27 = (min(var_27, (((((min(-var_5, (~31)))) ? 19 : ((var_7 * (32767 + var_6))))))));
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_37 [i_5] = (((!5347) ? (arr_35 [i_1] [12] [i_1] [i_1] [i_1]) : (((max((5357 >= 1847341602), var_8))))));
                            var_28 = (min(var_28, ((((var_2 < 23945) ? var_9 : (((((arr_13 [i_1] [i_1] [i_1]) ^ var_0)))))))));
                            var_29 = (max(var_29, ((min(var_4, -128)))));
                            arr_38 [i_1] [i_2] [i_1] [i_9] [i_9] [i_1] |= ((((-(~var_9))) % (max((~var_9), (((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_11 : 96))))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_30 = ((((max((arr_14 [i_2] [i_5] [i_11]), -2))) ? (((arr_9 [i_5 - 1]) & (arr_9 [i_5 - 1]))) : ((((arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - (arr_30 [i_5] [i_5] [i_2] [i_5]))))));
                            var_31 = (arr_39 [i_1] [7] [i_2] [i_5] [i_5] [i_11]);
                        }
                        var_32 = (min((!var_1), (arr_10 [i_2])));
                        var_33 ^= (max((max(4294967295, (arr_34 [2] [2] [i_1] [i_1] [i_9 + 2] [i_9]))), ((((arr_34 [3] [i_5] [i_9] [3] [i_9 + 2] [i_9]) <= (arr_34 [i_1] [i_5] [i_5] [i_5] [i_9 + 2] [i_9]))))));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_34 *= (((((var_4 ? 0 : (arr_27 [i_2] [i_5 - 1] [i_5] [i_5])))) ? (17387583984233362926 && var_9) : ((((min(1, 18446744073709551615))) ? (max((arr_11 [i_1] [i_2] [i_2]), (arr_34 [i_1] [i_2] [15] [i_5] [i_12] [i_12]))) : (arr_42 [i_1] [i_2] [i_5] [i_12])))));
                        var_35 += 1;
                        var_36 = (max(187, (((var_4 != (1082418884 / var_11))))));
                        var_37 = (max(var_37, var_11));
                    }
                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        var_38 = ((((max(var_6, 4294967295))) ? (max((arr_13 [i_5 + 1] [i_13 + 3] [i_5]), var_2)) : (((~(arr_13 [i_5 - 2] [i_13 + 3] [i_5]))))));
                        var_39 = (min(var_39, ((((((-(arr_18 [i_5 + 1] [i_2])))) ? (((arr_13 [i_1] [i_5] [i_1]) ? (arr_19 [i_13 + 3] [i_1] [i_5 + 1] [i_13 + 3]) : var_0)) : (((-31526 % (arr_13 [i_1] [i_5 - 2] [i_1])))))))));
                        arr_47 [i_5] = (arr_45 [i_1] [i_2] [i_5] [i_5 + 1] [i_13] [i_13]);
                    }
                }
                var_40 = (((((!(arr_41 [i_1] [i_1] [i_1] [i_1] [1] [i_1]))) ? (arr_16 [i_1]) : (((-32767 - 1) ? var_10 : var_4)))));
            }
        }
    }
    #pragma endscop
}
