/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_5) | var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((var_6 ? 1071644672 : ((-10454 ? (arr_2 [i_0]) : var_3))));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_14 += (((((+((max((arr_6 [10]), (arr_6 [i_1]))))))) ? -10462 : (((arr_6 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))));
        arr_7 [i_1] = (((arr_5 [i_1]) * (arr_5 [i_1])));
        var_15 = (arr_6 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2])));
        var_16 = (var_10 << (((arr_6 [0]) >> (-1071644673 + 1071644685))));
        var_17 = ((~((-1071644665 ? 10459 : -10460))));
        arr_13 [i_2] = ((10459 * (arr_10 [i_2])));

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_3] [i_3] = (((arr_18 [i_2] [i_2] [i_2]) ? (~-10459) : var_10));
                var_18 -= ((-(((arr_18 [i_2] [i_2] [i_2]) - -10460))));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_19 = (min(var_19, (arr_10 [i_2])));
                var_20 = (arr_20 [i_3]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_21 = (-(-10490 == 10474));
                            arr_26 [7] [i_3] [i_6] [i_7] = (arr_25 [i_7] [i_7] [i_5] [i_5] [i_3] [i_2]);
                            var_22 = (min(var_22, 31273));
                            arr_27 [i_2] [i_2] [i_2] [i_3] [1] [i_6] [i_7] = ((7006 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_6] [i_3])));
                            var_23 = (--10474);
                        }
                    }
                }
            }
            arr_28 [i_2] [i_3] [i_3] = (arr_15 [i_3] [0]);
            var_24 = (arr_8 [10] [i_2]);
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_25 = (~(((arr_17 [i_2] [i_2] [i_2]) ? var_4 : 64)));
            var_26 = (arr_11 [i_2] [i_8]);
            var_27 = var_8;
            arr_32 [i_2] = (arr_21 [i_2] [10] [10] [10]);
            var_28 = (((arr_24 [i_2] [i_2] [i_8] [i_8] [i_8] [i_8]) ? (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : var_3));
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            arr_35 [i_2] = (((arr_11 [i_2] [i_9 - 2]) & var_8));
            var_29 = (((arr_21 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9]) && var_5));
            arr_36 [i_2] = (((var_5 && 2303549983) | (arr_15 [i_9 - 1] [i_2])));
            var_30 = 188;
        }
    }

    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_40 [i_10] = (min(((-((min((arr_37 [i_10]), 174))))), (~var_7)));
        var_31 = (min((max(10465, 10455)), 64));
        arr_41 [8] = min((((min(2397255305485359020, var_8)) * -10460)), (((!(arr_39 [i_10])))));
    }
    var_32 = ((var_3 != ((min(((min(8, var_5))), var_2)))));
    var_33 = var_0;
    #pragma endscop
}
