/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_13 = ((arr_0 [i_0]) ? (var_0 + 9287303320370794480) : 5);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 = ((((min(-1437004137341376642, 959024108))) ? ((1 ? 26679 : 74)) : ((-82 ? -66 : 63487))));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] = (((-2330405851902927996 || 215) ? var_7 : 5071812532859141310));
                        arr_17 [i_2] [i_1] [i_4] = 1152921504606846975;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 = var_0;
                        var_16 = (arr_1 [i_1]);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_23 [i_1] = ((!(((var_0 ? 27214513759345629 : 96)))));
                            arr_24 [i_1] [i_2] [i_1] [11] [i_5] [i_5] [i_6] = (((36500 ? (arr_13 [i_3]) : var_1)) <= ((-(arr_15 [i_1] [i_2] [0] [6] [i_5] [i_6]))));
                            arr_25 [i_1] [i_2] [i_1] [i_5] [i_6] = var_12;
                        }
                        var_17 += (max(16, var_5));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_30 [6] [i_2] [i_3] [i_3] [i_1] [i_8] = ((((var_11 ? (arr_8 [i_1] [i_7 - 2]) : (max(31613, 10274749699368268601)))) / var_12));
                                var_18 = (min(var_18, (1 + 1)));
                            }
                        }
                    }
                }
            }
        }
        arr_31 [i_1] = (-(max((max(0, var_7)), (-30078 + 1721099178))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_34 [i_9] |= ((var_8 ? ((((((1 ? 6 : (arr_33 [i_9] [i_9])))) || ((min((arr_32 [i_9] [i_9]), var_2)))))) : (((!(((arr_32 [i_9] [19]) || var_7)))))));
        arr_35 [i_9] &= ((~(arr_32 [i_9] [i_9])));
    }
    var_19 = ((max((min(var_11, var_2)), (~var_7))) > (((~(var_7 - var_3)))));

    for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_20 = (min((!var_6), 1833628627));
        arr_39 [i_10] [i_10] = -0;
    }
    for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            var_21 = ((-((-(arr_12 [0])))));
            arr_48 [i_11 - 2] [2] [i_12] = (-67 > var_8);
            arr_49 [i_11] [i_11] = (((arr_46 [i_11 + 1]) ? (arr_46 [i_11 + 1]) : var_5));
        }
        var_22 = ((max((arr_46 [i_11 + 1]), (arr_46 [i_11 + 1]))) == var_4);
        var_23 = ((1545 ? (arr_21 [i_11] [i_11 + 1] [i_11] [2]) : (arr_11 [i_11 + 1] [1] [i_11] [i_11 - 1])));
        arr_50 [i_11] = (18405 * 15105);
        var_24 = (((((max(var_2, 0)))) > -6429599654067653192));
    }
    #pragma endscop
}
