/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (~var_3);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((((((1713058420 < 0) ? ((min(var_2, (arr_2 [i_0] [i_0])))) : (min((arr_3 [i_0]), var_4))))) ? (min((arr_0 [i_0]), (arr_3 [i_0]))) : ((((((12891060196355679 >> (((arr_2 [13] [i_0]) + 7324))))) ? (arr_2 [i_0] [i_0]) : ((((arr_0 [i_0]) < (arr_2 [i_0] [11])))))))));
        var_14 = 1713058413;
        arr_4 [i_0] = ((((((arr_0 [1]) ? (arr_0 [i_0]) : (arr_0 [16])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) / (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (arr_1 [i_0]);
            var_16 = ((((max(-3, 1713058420))) / (max((arr_0 [i_0]), ((2581908876 ? 18446744073709551604 : 2581908877))))));
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            var_17 = (arr_11 [i_0]);
            var_18 = (((arr_8 [i_2 - 4]) ? (arr_2 [i_2] [i_2 - 4]) : 1713058425));
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_19 |= (((arr_13 [i_3]) <= (((((58729 ? 6806 : (arr_14 [i_3])))) ? (arr_13 [i_3]) : ((var_7 ? (arr_14 [7]) : (arr_13 [i_3])))))));
        arr_15 [i_3] = ((~(((((58703 ? (arr_14 [i_3]) : (arr_14 [i_3]))) < 58715)))));
        var_20 = ((var_2 >> (((58729 / -16578) + 14))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (((((((max((arr_13 [23]), var_6))) ? (arr_13 [i_4]) : (arr_17 [i_4])))) ? (((arr_14 [i_4]) ? (arr_14 [3]) : (arr_14 [18]))) : ((((-166 <= (((arr_13 [i_4]) ? (arr_17 [i_4]) : (arr_14 [6])))))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_21 += ((~(arr_17 [5])));
                        var_22 = (min(var_22, (((((((var_0 ? 1713058426 : (arr_13 [i_4])))) ? (((arr_13 [i_6]) | 7)) : 521370769))))));
                        var_23 ^= (min(((~(arr_13 [i_5 - 3]))), (min((arr_19 [i_5 - 2] [i_5 + 1]), (arr_13 [i_5 - 3])))));
                    }
                }
            }
        }
        var_24 = (!15220563846516064124);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_25 = var_7;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_26 *= ((!(((((!(arr_17 [i_4])))) == (((var_8 + 2147483647) >> (var_2 - 1622010882)))))));
                                var_27 = ((((((arr_26 [i_4] [16]) ? (arr_26 [i_8] [i_8 - 2]) : (arr_14 [i_4])))) ? ((((arr_23 [i_8 - 2] [i_8 + 2] [i_8 - 1] [i_8 - 1]) == (arr_23 [i_4] [i_8 - 2] [i_8 - 1] [i_8 + 1])))) : (arr_29 [i_4] [i_4])));
                                arr_35 [0] [0] [i_9] [i_4] [i_11] [20] [i_10] &= 58730;
                            }
                        }
                    }
                }
            }
        }
        var_28 = (arr_16 [7]);
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
    {
        var_29 -= ((!((min((((85 ? (arr_17 [5]) : (arr_29 [i_12] [i_12])))), ((0 ? (arr_25 [i_12]) : 0)))))));
        arr_38 [i_12] = arr_36 [i_12];
        var_30 = ((-(arr_28 [19] [i_12])));
    }
    var_31 -= var_7;
    var_32 += (~var_1);
    #pragma endscop
}
