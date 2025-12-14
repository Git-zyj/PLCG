/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 &= (~-643126427);
                var_16 -= ((((((arr_0 [i_0]) ? ((1 ? 6400598669047345678 : (arr_0 [i_0]))) : ((13933731492812940103 ? var_13 : var_5))))) ? 65535 : (max((~13933731492812940103), (arr_5 [3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_17 = (min(var_17, (arr_11 [i_0] [i_0] [i_0] [i_0])));
                                var_18 -= 4294967287;
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_18 [i_5] [10] [i_0] [i_1] [i_0] [i_0] [i_0] &= var_10;
                                var_19 = (max(var_19, var_0));
                            }
                            var_20 *= (max(var_0, ((8190 ? (arr_12 [i_1] [i_1] [i_3]) : 16))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_21 = (max(var_21, ((((arr_20 [i_6] [i_1] [i_6]) <= var_11)))));
                    arr_23 [i_0] [i_0] [i_1] [i_0] |= (arr_21 [i_0] [i_0] [i_6]);

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 -= var_8;
                        var_23 = (max(var_23, ((((((arr_22 [i_0] [i_0]) && (arr_8 [i_7] [i_1] [i_6]))) || var_0)))));
                        var_24 += (arr_15 [i_0] [i_0] [i_1] [i_6] [i_6] [i_0] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_25 -= ((arr_27 [0] [0]) % (arr_27 [i_6] [i_8]));
                        var_26 -= (252 || 28);
                        var_27 = (max(var_27, var_9));
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, ((((arr_19 [i_1] [i_1]) ? (arr_17 [i_9] [6] [i_6] [i_1] [i_0]) : 2076288132401934078)))));
                        var_29 -= 12046145404662205938;
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, ((((arr_16 [i_0] [i_1] [i_6]) / var_12)))));

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_31 = (min(var_31, (((!(((arr_27 [i_6] [i_11]) < (arr_15 [i_0] [i_0] [1] [i_6] [1] [i_11] [i_6]))))))));
                            var_32 -= (((var_3 + 2147483647) >> (126 && var_14)));
                        }
                        var_33 = ((arr_6 [i_0] [i_1] [i_6] [i_0]) ? (1914884976 | var_2) : var_4);
                    }
                    var_34 -= (((arr_2 [i_0] [i_1]) >> ((((arr_27 [i_0] [i_1]) != (arr_15 [14] [14] [14] [14] [4] [i_0] [i_1]))))));
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_35 ^= (arr_41 [i_13] [i_12] [i_1] [i_0]);
                        var_36 ^= (((((((var_12 / (arr_27 [i_0] [i_1]))) / (arr_14 [i_0] [i_12] [i_12] [i_1] [i_13])))) ? ((((((arr_13 [i_12] [i_1] [i_0]) <= (arr_39 [i_0] [i_1] [i_12] [i_13])))) >> ((((18160053365559621458 * (arr_28 [i_1] [i_1]))) - 1334914788635629284)))) : (((arr_40 [i_0] [i_1]) ? (min(-4814, var_11)) : var_10))));
                    }
                    var_37 = (max(var_37, (((((((min((arr_32 [i_0] [i_0] [i_12] [i_1] [i_0] [i_0]), (arr_27 [i_12] [i_12])))) | (((!(arr_16 [i_0] [i_0] [i_12])))))) ^ (arr_34 [0] [i_0] [i_1] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_38 = (max(var_38, var_12));

    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_39 -= 35379;
        var_40 = (min(var_40, ((((arr_25 [i_14] [i_14] [i_14] [i_14] [12]) <= (arr_25 [i_14] [i_14] [i_14] [i_14] [10]))))));
        var_41 *= (((arr_29 [i_14] [i_14] [i_14] [i_14] [i_14]) / var_11));
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
    {
        arr_48 [i_15] &= ((~(!1961675550)));
        var_42 -= ((((min((arr_16 [i_15] [i_15] [i_15]), (arr_16 [i_15] [i_15] [i_15])))) < (((arr_16 [i_15] [i_15] [i_15]) ? var_9 : var_5))));
        var_43 ^= var_11;
        var_44 = (max(var_44, var_0));
        var_45 += ((((!(((1504766048 ? (arr_47 [i_15]) : (-127 - 1)))))) && (((6400598669047345677 ? 34 : 53)))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
    {
        var_46 ^= arr_10 [i_16] [i_16] [i_16] [i_16];
        var_47 += (arr_16 [i_16] [i_16] [i_16]);
        arr_53 [i_16] &= (((arr_28 [i_16] [i_16]) ? (arr_22 [i_16] [i_16]) : -var_11));
    }
    #pragma endscop
}
