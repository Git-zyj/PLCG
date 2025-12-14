/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 &= ((7 ? var_9 : (arr_0 [i_0])));
            var_12 = (((arr_3 [i_0] [i_1]) ? (!var_0) : 13));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_13 ^= (((var_7 == var_6) >= (((!(arr_0 [i_0]))))));
            var_14 &= (var_6 || (((2518326850 ? var_9 : (var_10 && var_6)))));
            var_15 ^= ((~(((var_5 || var_1) << (((((arr_6 [i_0]) & var_0)) - 11))))));
            var_16 ^= 103;
            var_17 = (max(var_17, ((((!1) && var_5)))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_18 = (var_5 % -1);

            /* vectorizable */
            for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
            {
                var_19 = ((var_0 * ((-1946156758921673101 / (arr_15 [i_0] [9] [i_4])))));
                arr_16 [i_4 + 4] [i_3] [i_0] = (~((var_3 >> (192 - 163))));
            }
            for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
            {
                arr_21 [4] [i_3] [4] [i_3] |= var_6;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_20 &= (((arr_22 [i_0] [i_0] [i_3] [i_5] [i_5] [i_6]) ? (arr_22 [i_0] [i_0] [i_5 + 1] [i_6] [i_0] [i_6]) : var_6));
                    var_21 = (((arr_19 [i_5] [6] [i_3] [i_5 + 3]) % (~var_10)));
                    var_22 ^= (arr_22 [i_0] [i_3] [i_5 + 4] [i_5 + 4] [i_5] [i_6]);
                    var_23 = (max(var_23, ((((arr_14 [i_5 + 4] [i_5 + 4]) && 8388608)))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_24 = (((((var_7 >= var_3) ? 31 : (((var_8 ? var_7 : 1))))) >> ((((~(~var_4))) - 40998))));
                    arr_27 [i_5] [i_3] [i_3] = (arr_9 [i_0] [i_0]);
                    arr_28 [i_5] [i_5 + 4] [i_5 + 1] [i_3] [i_3] [i_5] = (min(((((arr_19 [i_5] [i_5 + 3] [i_5 - 1] [i_5]) ? (arr_19 [i_5] [i_5] [i_5 + 3] [i_5]) : var_6))), (max((max((arr_20 [i_3] [i_7]), 1946156758921673101)), (var_2 && 1946156758921673101)))));
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    var_25 = (((var_10 + 9223372036854775807) << (((max(4286578688, ((160 ? 300898910183482355 : 7903088070385977220)))) - 300898910183482355))));
                    arr_31 [i_5] [i_3] [i_5 - 1] [i_8] = ((!(((var_4 << ((((arr_8 [i_3]) || 100))))))));
                    var_26 *= (((max(((var_6 ? var_6 : (arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_0]))), (arr_9 [i_5 + 4] [i_8 - 2]))) <= 4095));
                }

                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 ^= ((((~((var_8 ? (arr_8 [i_10]) : 14867510562459894118)))) > (((2097024 ^ ((((!(arr_26 [6] [i_3] [6] [i_3]))))))))));
                        arr_38 [i_0] [i_5] [i_5] [i_9] [i_10] = ((!(((((((arr_26 [i_5] [i_5] [i_5] [i_5]) ? var_10 : (arr_19 [i_5] [i_3] [i_3] [i_3])))) ? (max((arr_33 [i_0] [i_3] [i_5]), (arr_20 [i_0] [i_3]))) : 23)))));
                        var_28 ^= ((((65535 ? (arr_36 [i_5] [i_5 + 2] [i_5] [i_5] [i_5]) : var_1)) < (max(-7903088070385977223, 1745811190))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_29 = var_0;
                        arr_42 [i_0] [i_3] [i_3] [i_5] [i_11] = (3 * -1349246711);
                        var_30 ^= (((!18446744073709551603) * ((((arr_19 [4] [i_5] [i_5] [i_5]) > (arr_37 [i_0] [i_0] [i_5] [i_9] [i_11]))))));
                        var_31 ^= (((arr_40 [i_0] [i_3] [i_0] [i_5 + 2] [i_9] [i_11] [i_5 + 2]) ? ((-(max(511, var_3)))) : (max((arr_24 [i_0] [i_0] [i_9 - 2] [i_5 + 3]), (((arr_37 [5] [i_3] [i_5 + 1] [i_9] [i_11]) ? 2518326850 : (arr_14 [i_9] [i_11])))))));
                    }
                    var_32 = (((max(((max(var_6, var_9))), (min((arr_26 [i_5] [i_3] [i_3] [i_3]), (arr_10 [i_0]))))) != (((-var_8 | (~6))))));
                    var_33 = ((-(((arr_33 [i_0] [i_3] [i_5]) ? (arr_33 [i_9 - 1] [i_3] [i_3]) : var_6))));
                    var_34 = ((!((((((arr_11 [i_0]) ? var_10 : var_6)) / (-300898910183482355 && var_4))))));
                }
            }
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            arr_45 [i_0] [i_12] = (65509 * 0);
            var_35 &= (((((+(((arr_29 [i_12] [i_0] [i_0]) / var_10))))) ? (26580 / var_2) : (((var_3 * var_8) / 7903088070385977233))));
            var_36 = (((((-(arr_35 [0])))) + (max((var_6 + 221), (var_5 + var_0)))));
            var_37 = var_8;
        }
        var_38 |= var_10;
    }
    var_39 ^= var_2;
    var_40 = ((((((~669088173347748799) ? (max(var_5, var_10)) : 2013265920))) ? var_2 : ((((var_6 ? var_4 : var_3)) >> (var_5 - 236)))));
    #pragma endscop
}
