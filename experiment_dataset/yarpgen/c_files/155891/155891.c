/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (max((((var_10 & var_12) ? var_16 : (arr_7 [11] [17] [i_0]))), (((128 ^ var_8) ? var_13 : (max((arr_7 [i_0] [i_1 + 2] [i_2]), (arr_3 [18] [13] [0])))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = ((-((209 ? -15 : -1167129473))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] |= (max(((var_13 ? 4622 : 255)), var_13));
                        var_21 = (~var_0);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_14 [i_0] [5] = ((~((((max((arr_13 [i_0] [i_4]), (arr_0 [i_0])))) ? ((var_6 ? (arr_3 [15] [i_4] [i_0]) : var_2)) : -57709))));
            var_22 = (((arr_8 [i_4] [i_0]) == var_10));
        }
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5] = ((((!(arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]))) ? var_8 : (arr_11 [i_5] [6] [i_5 - 1])));

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_23 = arr_17 [i_5];
            var_24 = (arr_8 [i_5] [i_5]);
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_25 = var_11;
            arr_24 [i_7] = (max((((18446744073709551608 && ((max(7, 6760)))))), (~var_1)));
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_26 = (max((arr_27 [i_7 + 1] [14] [i_9]), (((~4108869513) ? (~1920) : (19114 & 26)))));
                            arr_33 [i_7] = ((((max((arr_27 [i_5 + 1] [i_8 - 1] [i_9]), var_10))) ? (max(-87, 7987731248241208461)) : (((-(arr_9 [i_5 + 1] [i_8 - 2] [i_8] [i_10]))))));
                            var_27 = (((((-(arr_21 [i_10] [11] [i_7 - 1])))) ? (((((~var_16) + 2147483647)) << (((arr_20 [i_5 - 1] [i_5 - 1] [i_10]) - 3850)))) : (((arr_11 [13] [i_7] [i_5]) ^ var_15))));
                            arr_34 [i_5] [4] [14] &= (max(((max(var_16, (var_9 | var_8)))), var_12));
                        }
                    }
                }
            }
        }
        arr_35 [i_5 + 1] [i_5] = ((!(((((var_1 || (arr_26 [1] [i_5 + 1] [i_5] [1]))) ? var_5 : 18446744073709551580)))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_28 = ((((((-1856936060 ? 2147483630 : 7)) / var_16)) + (((-((max(var_14, var_4))))))));
        arr_39 [10] [i_11] = (max((max(((max(-60, var_13))), ((-(arr_31 [8] [i_11] [i_11] [i_11] [8]))))), ((max(var_14, var_5)))));
        arr_40 [i_11 + 1] [i_11] = (max((max(33085, 36741)), -28184));
        var_29 = (max(((31151 ? 60 : -5699374359316429177)), -64762709));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                arr_46 [i_12] [i_13] = (~(max(((max(var_1, var_2))), ((var_9 ? (arr_45 [i_12] [4] [i_13]) : var_18)))));
                arr_47 [i_13] [i_12] = (arr_44 [10] [10] [0]);
                arr_48 [2] = ((((!(((~(arr_9 [i_12] [i_13] [i_13] [i_12]))))))));

                for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
                {
                    var_30 += (((((~(arr_6 [2] [i_14 + 1] [i_14 - 1])))) ? var_8 : ((((((var_4 ? var_1 : var_10)) + 9223372036854775807)) >> (((arr_49 [i_14] [16] [16] [i_12]) - 5001916894151600385))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                var_31 = (max((max(var_12, (arr_9 [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]))), var_6));
                                var_32 = var_7;
                            }
                        }
                    }
                    var_33 = var_15;
                }
                /* vectorizable */
                for (int i_17 = 1; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    arr_61 [i_12] [15] [i_17] [i_17] = (!var_7);
                    arr_62 [2] [6] [6] &= (((arr_6 [i_12] [i_12] [i_17 + 1]) ? (arr_8 [i_12] [i_17 - 1]) : ((~(arr_11 [i_12] [i_13] [i_17 + 1])))));
                    arr_63 [i_17] [i_17] [i_17] = (((-(arr_0 [i_12]))));
                }
                for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
                {
                    var_34 = (max(18446744073709551594, -31723));
                    var_35 = (((((84 != ((var_7 ? var_10 : var_10))))) ^ (arr_12 [0] [0])));
                    var_36 = (min(var_36, (((((((arr_43 [i_13]) ? ((((arr_0 [i_13]) ? (arr_11 [i_12] [i_12] [i_12]) : (arr_3 [i_12] [i_12] [i_12])))) : (~var_18)))) && ((max((var_18 + var_15), (arr_41 [i_18 - 1])))))))));
                    var_37 = (min(var_37, var_17));
                    arr_66 [i_12] = (((max(158, ((var_17 ? var_17 : var_11))))) ? ((13 / (((max(var_9, var_9)))))) : (((~((max((arr_57 [i_18 + 1] [3] [1] [i_13] [i_12]), var_10)))))));
                }
            }
        }
    }
    var_38 = var_11;
    #pragma endscop
}
