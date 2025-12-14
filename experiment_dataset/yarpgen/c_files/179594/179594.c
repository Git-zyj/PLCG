/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        arr_2 [i_0] = (!var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = var_8;
        var_19 ^= (((4194303 / 18446744073709551615) >= ((((18446744073709551615 < (arr_4 [17] [17])))))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_20 = ((((!(((65531 ? (arr_6 [i_2]) : var_0))))) ? (((((max(4, 1534665521))) ? 0 : 13174))) : var_6));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    var_21 = ((((max((arr_7 [i_3 + 4]), (arr_10 [i_3])))) ? (((var_2 / var_7) * var_0)) : ((((var_6 <= (arr_9 [i_2 - 2] [i_2 - 2] [i_3])))))));
                    var_22 = var_13;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_3] = -70128171130623731;

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_23 = (((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_6 + 1]) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_6] [i_6 + 1]) : (arr_12 [i_4 - 3] [i_4] [i_6 + 1] [i_6 + 1])));
                            var_24 = (min(var_24, 4));
                            arr_18 [i_2 - 2] [i_3 + 4] [i_3] [i_5] [i_5] [i_6] = (((arr_17 [i_3 + 3]) - (arr_5 [i_2 + 2])));
                        }
                        var_25 = ((var_4 ? (arr_5 [i_4 + 1]) : var_11));
                        arr_19 [i_2] [i_3] [i_2] = ((!(!var_14)));
                        var_26 = (!var_6);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_27 += (((((arr_11 [i_4 - 3] [i_3 + 1] [i_4]) ? (arr_11 [i_4 - 1] [i_3 - 1] [i_7]) : (arr_11 [i_4 - 3] [i_3 - 1] [i_4]))) & var_14));
                        var_28 = ((~(((!var_4) ? (!var_2) : (min(var_3, var_2))))));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_29 = (min(((65529 ? 32767 : 32767)), ((min(0, 65535)))));
                            var_30 = (((((arr_16 [6] [i_3] [i_3]) ? var_4 : (arr_16 [i_3] [i_4 - 3] [i_3]))) - (((!4) ? ((var_2 ? (arr_8 [i_3] [i_3]) : 64107)) : (!1)))));
                            arr_25 [i_3] [i_3] [i_3] [i_7] [i_3] = ((((((arr_8 [i_3] [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) ? (var_8 <= var_4) : (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))));
                            var_31 = ((max(((4294967295 >> (var_7 - 162)), (((2204809589539743534 ? 2147483647 : var_0)))))));
                        }
                        for (int i_9 = 4; i_9 < 21;i_9 += 1)
                        {
                            var_32 *= ((!(+-7825004056380018940)));
                            var_33 = (min(var_33, ((((((~((39 ? 7825004056380018940 : var_16))))) ? ((max(((var_2 ? var_16 : var_10)), var_3))) : ((+(((arr_8 [i_2] [i_7]) ? -1299868412046993509 : var_2)))))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_32 [i_3] [i_7] [i_4] [i_3] [i_3] [i_3] = ((arr_9 [i_3 - 1] [i_3] [i_3]) ? var_11 : var_0);
                            var_34 = (min(var_34, (((~(arr_16 [i_2] [i_2] [i_7]))))));
                            var_35 = (max(var_35, (arr_11 [i_2 + 1] [i_2 - 1] [i_3 - 1])));
                            var_36 = (max(var_36, var_8));
                        }
                        var_37 = max((((!(arr_20 [i_2] [i_3 + 4] [i_3] [i_2 + 2])))), (max((arr_20 [i_2 - 1] [i_3 + 1] [i_3] [i_2 + 2]), (arr_23 [i_2] [i_2] [i_3 + 4]))));
                        var_38 = ((((var_3 + (arr_10 [i_3]))) == var_1));
                    }
                    var_39 = (arr_21 [i_2 + 1] [i_3] [i_4] [i_4] [i_4 + 1] [i_3]);
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            arr_36 [i_11] [i_2] = (((arr_27 [i_11 - 1] [i_11 + 1] [i_2 + 2] [i_2 - 2] [i_2 - 2]) > (arr_27 [i_11 - 1] [i_11] [i_2 + 2] [i_2 + 1] [i_2 - 2])));
            var_40 = (arr_17 [i_2]);
            var_41 = ((arr_35 [i_2 - 1]) < 986740979);
            arr_37 [i_11] [i_2] = ((!var_2) * ((var_3 ? var_3 : var_14)));
        }
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            arr_40 [i_2 - 1] [i_2 - 2] [i_2 - 1] = 0;
            var_42 = (max(var_42, (((52360 < (((!(arr_33 [i_12 + 1] [i_12 - 2])))))))));
            arr_41 [i_12 - 1] = (max((((!(~var_14)))), var_6));
        }
        arr_42 [i_2 + 1] [2] = (((~(arr_8 [i_2 - 1] [i_2]))));

        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            var_43 = 13174;
            var_44 = (!var_7);
            var_45 = (((((((var_15 + 2147483647) << (18446744073709551615 - 18446744073709551615))) << (((((~var_13) + 391094836947767185)) - 21)))) / 1));
        }
    }
    var_46 = (((((((1 ? 13174 : var_8))) && var_6)) ? (((0 ? var_3 : var_3))) : (1029 + 1099511627775)));
    var_47 = var_6;
    #pragma endscop
}
