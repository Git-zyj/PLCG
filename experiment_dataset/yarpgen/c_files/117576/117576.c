/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 += (((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))) ^ ((min(1, var_3)))));
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) ? 4735 : (146 || -120)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_21 = (((!8996) ? 8996 : ((min(var_18, 11)))));
            arr_7 [i_0] [i_0] [i_0] = (((var_0 * (arr_3 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 4; i_3 < 7;i_3 += 1)
            {
                var_22 ^= (arr_3 [i_2]);

                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {

                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        var_23 ^= ((-69 ? (min(var_6, (arr_15 [i_4] [i_4 + 1] [i_4] [i_4] [i_5 - 4]))) : ((-43 ? var_15 : var_5))));
                        arr_19 [1] [i_2] [i_3 + 2] [i_4] [i_0] = (arr_18 [i_5] [i_0] [i_4 - 2] [i_2] [i_0] [i_0]);
                        arr_20 [i_0] [i_4 + 2] [i_3] [i_2] [i_0] = (((56541 == var_13) ? ((-(((arr_10 [i_0] [i_2] [i_0] [6]) ? (arr_14 [i_0] [1] [i_0] [i_4 - 1] [i_5]) : var_10)))) : ((var_1 ? (arr_10 [i_3] [i_0] [i_0] [i_2]) : (arr_18 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2])))));
                        arr_21 [i_0] = (((8 && var_6) / ((8996 ? (arr_16 [i_0] [i_3 + 1] [9]) : 1))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_24 [i_0] [i_2] [i_3] [i_2] [i_6] = ((~(((!((min(var_12, (arr_1 [i_0])))))))));
                        var_24 *= (((arr_2 [2]) * ((min(((((arr_6 [i_3 - 1] [i_3 - 1]) == var_0))), -43)))));
                    }
                    var_25 = 68;
                }
                var_26 ^= (((((arr_0 [i_2] [i_0]) / (arr_23 [i_0] [1] [3] [i_3] [i_3 - 2]))) | (((arr_5 [i_2]) ? (arr_5 [i_3]) : (arr_6 [i_0] [i_0])))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_27 ^= ((!((min(68, (((arr_6 [i_0] [i_0]) ? var_6 : 1)))))));
                    arr_27 [i_0] = ((-(((arr_3 [i_0]) ? (arr_3 [i_7]) : 68))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_28 = ((-(min((((arr_29 [i_0] [i_0] [i_3] [i_0] [i_8]) ? -22965 : 1)), var_11))));
                        var_29 = arr_5 [i_0];
                        var_30 = 8996;
                        var_31 = ((((min(((min((arr_13 [i_8] [i_7] [i_2] [i_2]), (arr_2 [i_0])))), 56534))) / var_6));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_2] [i_7] [i_7] [6] [i_0] = ((((arr_31 [1] [i_0] [i_3 - 4] [i_7] [i_9] [5]) ^ (arr_31 [i_2] [i_0] [i_3 + 2] [i_3] [0] [i_7]))));
                        var_32 *= ((22965 ? ((min((arr_29 [i_2] [i_3 - 3] [i_3 - 3] [i_7] [i_9]), 18368))) : var_15));
                        var_33 = ((+(((arr_32 [i_3 - 1] [i_0] [i_3 + 1]) ? (arr_13 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_7]) : (arr_32 [i_3 - 1] [i_0] [i_3 + 1])))));
                        arr_34 [i_7] [i_0] [3] [i_7] [i_7] = 0;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] = (((((-(arr_36 [i_2] [i_2] [3] [i_2] [i_3 - 2])))) ? ((min(var_12, (max((arr_29 [i_0] [i_2] [i_2] [1] [i_10]), 56539))))) : ((-(arr_13 [i_3 - 4] [i_3 - 3] [i_3 - 4] [i_3 + 3])))));
                        arr_40 [i_0] [i_0] = var_0;
                        arr_41 [i_0] = ((((((arr_26 [i_3 + 3]) * 6))) ? -43 : ((min(var_2, (arr_14 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 + 1] [1]))))));
                        var_34 = (!907021323);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_35 = ((var_3 | (arr_3 [i_3])));
                        arr_46 [i_11] [i_0] [9] = (arr_35 [i_3 - 1] [i_0]);
                    }
                    arr_47 [i_0] [i_2] [i_0] = 1;
                }

                for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, -127));
                    var_37 |= 0;
                }
                for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                {
                    var_38 = (max(0, (arr_44 [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_13 + 2] [i_13])));

                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        arr_56 [i_0] [i_0] [i_2] [i_0] [i_0] &= (arr_23 [i_0] [i_2] [1] [i_13] [i_14]);
                        var_39 = (max(var_39, -13757));
                        var_40 = 1;
                    }
                    for (int i_15 = 4; i_15 < 7;i_15 += 1)
                    {
                        var_41 = 0;
                        var_42 = (max((((arr_18 [i_0] [i_3 - 3] [i_13] [i_13] [i_0] [i_15 + 3]) ? 10 : (arr_31 [1] [i_0] [i_3] [i_0] [1] [i_15 + 1]))), ((max((arr_28 [i_3 - 2] [i_3 - 2] [i_0] [i_15 - 4] [i_15]), var_19)))));
                        var_43 = (min(((((max(1, 16))) ? ((min((arr_54 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), 1))) : ((((-127 - 1) >= var_0))))), (((!(1446656604 >= 8201))))));
                        var_44 = ((~(arr_32 [i_0] [i_0] [i_15 - 4])));
                        arr_59 [i_15] [i_13] [i_0] [i_2] [1] = 56552;
                    }
                    arr_60 [4] [6] [i_0] [i_13] = (max((((arr_37 [i_0] [i_3 - 1] [i_3] [i_0] [i_2] [i_13 + 1] [i_2]) ? var_12 : (arr_36 [i_3 - 3] [i_13] [i_3 - 3] [i_13 + 2] [i_13]))), -var_5));
                }
                for (int i_16 = 2; i_16 < 8;i_16 += 1) /* same iter space */
                {
                    arr_63 [4] [i_0] [i_2] [i_0] [i_16] = ((-(!1)));
                    var_45 = (!1);
                }
            }
            var_46 = min((((arr_32 [i_0] [i_0] [i_0]) == (arr_32 [8] [i_0] [i_0]))), ((10 >= (arr_32 [i_0] [i_0] [i_2]))));
            var_47 |= (arr_25 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]);
        }
    }
    var_48 = (min(var_48, var_0));
    #pragma endscop
}
