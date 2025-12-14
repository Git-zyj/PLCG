/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_1;
    var_13 = (min(var_13, (((((120 ? var_2 : var_0)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((-(min((((255 ? 0 : (arr_0 [12])))), ((var_3 ? (arr_1 [i_0] [i_0]) : var_6)))))))));
        arr_2 [i_0 + 1] = (((arr_0 [i_0 + 3]) ? (max((min((arr_0 [i_0]), (arr_1 [24] [i_0]))), (arr_0 [i_0 + 3]))) : ((((min(var_10, var_3))) ? 65535 : (min((arr_1 [4] [22]), 18))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_15 ^= 16;
            var_16 = (max(var_16, 230));
        }
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((arr_7 [i_2 + 4] [i_2]) ? 1715129134 : ((var_5 ? (arr_7 [i_2 + 1] [i_2]) : (arr_7 [i_2 + 4] [i_2 + 4])))));
        arr_9 [i_2] [i_2] = (((((((var_7 / (arr_1 [i_2] [i_2]))) * (arr_4 [24])))) ? (arr_1 [i_2] [i_2]) : ((((((arr_0 [i_2]) ? var_8 : 5899069797164531787))) ? ((((arr_5 [i_2 - 2] [i_2]) % var_4))) : (max((arr_6 [i_2]), var_0))))));
        arr_10 [i_2] [i_2] = (((min(((max((arr_3 [16]), var_7))), 2147483635)) + (arr_0 [i_2 - 2])));
        var_17 = (min(var_17, (arr_5 [11] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_4] [11] = -18;

                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_29 [i_3] [i_4] [i_6] = var_5;
                            var_18 = (((arr_15 [i_3 - 2] [i_6 + 2]) || (arr_18 [i_3] [i_3 - 1] [i_6 + 2])));
                            var_19 = (~((var_3 ? var_2 : var_9)));
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_3] [i_4] [i_8] [i_6] [i_8 + 2] = arr_11 [i_3] [i_5];
                            var_20 = 24596;
                            arr_34 [i_8] [i_3] [i_8] [i_6] [i_8] = (((!var_9) ? (((arr_12 [i_3]) ? var_3 : 1)) : (((-(arr_13 [i_3 - 1] [i_6]))))));
                            var_21 = (((arr_24 [i_5] [i_6] [i_8 - 1] [i_5] [i_8]) ? (arr_24 [i_3] [i_6] [i_8 + 1] [i_6] [i_8]) : (arr_24 [i_8] [i_6] [i_8 + 1] [i_6] [i_8])));
                        }
                        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_4] [i_4] [i_5] [i_6] [i_9] |= var_7;
                            arr_39 [i_3] [i_3] [i_6] [i_3] [i_6] = ((!(arr_24 [i_9 - 2] [i_6] [i_5] [i_6] [i_6])));
                            arr_40 [i_6] = (((arr_27 [i_3] [i_6 + 2] [i_3 + 1]) ? (arr_27 [i_3] [i_6 + 2] [i_3 - 2]) : (arr_27 [i_4] [i_6 + 1] [i_3 - 1])));
                        }
                        for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_30 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_10 + 3])));
                            arr_44 [i_3] [i_4] [i_6] [i_6 - 2] [5] = (arr_37 [i_6] [i_3 - 2] [i_6 - 2] [i_6]);
                            var_23 = var_9;
                        }

                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            arr_47 [5] [i_6 + 2] [i_5] [i_6] [i_6 + 1] [i_4] = (((arr_41 [i_3 - 1] [i_6] [i_11 + 2]) ^ (((arr_43 [i_6] [i_6] [i_6] [i_5]) ? (arr_30 [i_3] [i_3] [i_5] [i_6] [i_11]) : 12))));
                            arr_48 [i_6] = ((var_6 ? var_1 : (arr_1 [i_3] [i_11 + 1])));
                            var_24 = (max(var_24, (arr_19 [i_5] [i_11] [i_11 + 2])));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_53 [i_6] [i_4] [i_6 - 1] = ((~(arr_22 [i_3] [3] [i_3] [i_3] [i_3 + 1])));
                            var_25 = ((~((var_5 << (((arr_12 [5]) - 225))))));
                            arr_54 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_12] [i_6] = (arr_50 [i_3 - 1] [i_3] [i_6 + 1] [i_6 - 1] [1]);
                            var_26 += (arr_24 [4] [i_4] [i_5] [i_6] [i_12]);
                        }

                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_27 = (arr_37 [i_6] [i_5] [i_6 - 2] [i_13]);
                            var_28 = (min(var_28, 0));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            arr_61 [7] [i_14] [i_14] [i_14] [i_14] [i_6] [0] = (var_4 | var_0);
                            var_29 &= (((arr_0 [i_6 + 1]) ? (((var_0 ? var_9 : 1864241306))) : ((3640402043 ? (arr_43 [i_4] [i_4] [i_4] [i_6 - 3]) : 14))));
                            var_30 = var_5;
                            arr_62 [11] [i_5] [11] [i_6] = ((-9223372036854775807 ? (arr_31 [i_3 + 1]) : (arr_31 [i_3 - 1])));
                        }
                        var_31 = ((-14 ? (arr_51 [i_4] [i_4] [i_6 - 2] [i_6 - 2] [i_4] [i_4] [i_4]) : (var_9 | 27)));
                        arr_63 [i_4] [i_4] [i_5] [i_6] |= (((arr_6 [2]) ? 1691516990 : ((var_7 ? 107 : 184))));
                    }
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        var_32 = ((-(arr_46 [i_4] [i_4] [0] [i_15] [i_4])));
                        var_33 += (arr_17 [i_15] [i_4]);
                    }
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        arr_70 [10] = var_5;
                        var_34 = (((arr_64 [i_3] [i_4] [i_5] [i_16]) * 71));
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            arr_77 [i_3] [i_3] [i_18] [i_5] [4] [8] = (((((15425 ? 169 : var_2))) || ((!(arr_60 [i_3] [i_3] [i_3])))));
                            arr_78 [i_18] [i_3] [i_17] [5] = (!var_6);
                            var_35 = (min(var_35, ((((arr_18 [i_3] [i_4] [i_18]) ? (arr_66 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_17]) : (arr_43 [i_4] [i_4] [i_18] [i_17]))))));
                            arr_79 [i_3] [i_18] = (arr_59 [7] [i_18] [i_5] [i_4] [i_4]);
                        }
                        var_36 = var_9;
                    }
                    var_37 |= ((38202 ? (arr_23 [2] [i_3] [i_3] [i_4] [0]) : var_9));
                    var_38 = (max(var_38, (((((arr_68 [i_3 + 1] [i_3] [i_3] [i_4] [i_5] [i_5]) / var_2))))));
                }
            }
        }
        var_39 = (max(var_39, (arr_28 [7] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1])));
        var_40 = (((((var_2 ? var_2 : var_10))) ? (((var_2 ? 1 : var_10))) : ((5870318628122948276 ? (arr_37 [8] [10] [i_3 + 2] [i_3]) : var_5))));
        arr_80 [i_3] [4] = 28672;
        var_41 += var_6;
    }
    #pragma endscop
}
