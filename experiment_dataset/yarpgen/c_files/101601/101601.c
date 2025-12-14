/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((((var_7 & var_4) ? (arr_1 [i_0]) : (arr_0 [i_0]))) & (arr_2 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((!((var_8 < (48 < var_9)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = ((((-(arr_4 [i_1]))) * ((((max((arr_7 [i_1]), (arr_6 [i_1]))) < (((var_17 ? (arr_6 [i_1]) : (arr_6 [i_1])))))))));
        var_20 = (((var_0 % var_5) ? (((((min((arr_6 [14]), var_16))) - ((var_0 ? var_14 : (arr_4 [i_1])))))) : ((-var_14 + (arr_7 [i_1])))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_2] = ((!((max((((var_17 << (((arr_8 [i_1]) - 83))))), (var_5 % var_12))))));
            arr_11 [i_1] [i_1] [22] = (((((arr_7 [i_1]) ? var_14 : (arr_7 [i_2]))) << ((((var_3 + (arr_7 [i_1]))) - 17779536636095533475))));
            arr_12 [i_1] = (!-44);
            var_21 = (arr_8 [i_2]);
            var_22 = (((min((arr_4 [i_2]), var_12)) % (((var_0 ? var_6 : var_1)))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                var_23 = (var_2 <= (var_16 <= var_9));

                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    var_24 = (~var_10);
                    arr_20 [i_3] [i_3] [i_3] [i_3] = ((!((min((arr_19 [i_1] [i_5 - 2] [14] [i_5 + 2]), (arr_19 [15] [i_5 - 2] [i_4] [i_5]))))));
                    var_25 = 5356513342881040698;
                    var_26 = ((!((((arr_17 [i_1] [i_1] [15] [i_4] [i_4] [i_5]) ? (arr_17 [i_4] [i_4] [i_4 + 3] [i_5] [i_5] [i_5]) : ((var_11 ? var_3 : var_12)))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_23 [i_3] [i_4] [i_3] [i_3] = ((!(((min(-37, var_5)) <= ((var_11 ? var_15 : var_17))))));
                    var_27 *= ((~(arr_13 [i_4 - 3] [i_1])));
                    arr_24 [i_3] = var_6;
                }
            }
            var_28 = (((var_1 < var_12) < (!var_14)));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_30 [i_1] [i_1] [8] [i_1] [i_3] = var_11;
                        arr_31 [23] [18] [i_7] [i_1] [i_7] [i_3] = ((((-var_10 / ((var_8 ? var_11 : (arr_5 [23]))))) <= -var_11));
                        arr_32 [i_3] [4] [i_7] [2] = (max(((min(-44, -28))), var_10));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_29 = (max(-28, ((((arr_6 [i_1]) < (((var_14 <= (arr_22 [i_1] [i_9])))))))));
            var_30 = max((arr_34 [i_1] [i_1]), (arr_16 [i_1] [i_9] [17]));
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_31 = (((((((arr_7 [i_10 + 3]) ? var_1 : var_14)) + 9223372036854775807)) << ((((((47 ? -1821178379032599976 : -12)) + 1821178379032599999)) - 23))));

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_39 [5] [i_10] [5] [i_1] = (~(max((arr_22 [i_10 + 2] [i_10 - 1]), (arr_16 [i_10 + 1] [i_10 + 3] [i_10]))));
                arr_40 [i_10] = ((((!(arr_38 [i_10] [i_10]))) ? ((((arr_38 [i_10] [i_10]) ? (arr_38 [i_10] [i_10]) : (arr_38 [i_10] [i_10])))) : -var_1));
            }
            for (int i_12 = 1; i_12 < 23;i_12 += 1)
            {
                var_32 = (((!-var_16) - ((max((arr_4 [i_1]), (arr_35 [i_10 + 1] [i_10 + 1]))))));
                var_33 = (max((((~var_1) % (var_11 % var_3))), (arr_27 [i_1] [i_1] [1] [i_1])));
            }
            var_34 = var_3;
            var_35 = (((1 > 1) < (~var_12)));
            var_36 = (((-1821178379032599976 != 13090230730828510912) << ((-(var_13 == var_3)))));
        }
        arr_43 [22] = var_15;
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_56 [i_17] [i_16] [i_15] [i_14 + 2] [1] = ((!((max((max(var_9, (arr_49 [i_13] [i_15] [i_16] [i_17]))), var_2)))));
                                var_37 = (min(var_37, (((-((((((!(arr_42 [i_13] [i_13] [i_13])))) != var_17))))))));
                            }
                        }
                    }
                    var_38 = (arr_16 [8] [i_14] [i_14 + 1]);
                }
            }
        }
    }
    var_39 = (var_16 == var_15);
    var_40 = 5356513342881040688;
    #pragma endscop
}
