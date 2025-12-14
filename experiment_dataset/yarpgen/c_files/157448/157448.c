/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(-var_6, 1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((((arr_1 [i_0]) ? var_7 : -878211873)), (((var_15 ? var_9 : var_6)))))) ? var_8 : ((-(min(878211872, -29759))))));
        arr_3 [i_0] = ((((((max(var_4, -878211888))) && ((min(var_13, -4072320663188991866))))) ? (min(((var_0 ? (arr_0 [i_0] [i_0]) : var_5)), (~var_10))) : (min(169, -1))));
        var_17 = var_11;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [10] |= -18475;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_18 -= 878211875;
                                arr_20 [i_3] [i_4] [i_1] = 1;
                                arr_21 [i_5] [i_1] [i_3] [i_1] [i_1] = (min((arr_1 [i_3]), ((min(((0 ? var_14 : var_0)), (max((-32767 - 1), 878211867)))))));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] [i_1] = ((((((~(arr_6 [i_1] [i_1]))))) ? (((var_0 || (arr_1 [i_2])))) : var_1));
                    arr_23 [i_1] [i_1] [i_1] = var_11;
                    var_19 = (max(((min(1, -21334))), -88612042));
                    arr_24 [i_1] = (arr_12 [i_3] [i_1] [i_1] [i_1]);
                }
            }
        }
        var_20 = ((~(((var_12 != ((var_10 ? (arr_1 [i_1]) : var_4)))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 = (min(var_21, var_13));
        var_22 = (((((var_2 ? var_13 : 830))) ? ((((arr_26 [i_6]) ? (arr_26 [i_6]) : var_9))) : (-1 * 1349921568851711123)));
    }

    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_35 [i_7] [i_7] = (arr_29 [i_8] [i_8]);
            var_23 = (((((~1) < -0)) ? (~803424515) : 317592713710735047));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_24 = ((-878211873 >= (arr_30 [i_7 - 1])));
                    var_25 = (arr_37 [i_7] [i_8] [i_9]);
                    var_26 = (max(var_26, (arr_38 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1])));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_42 [i_7] = -var_2;
                    arr_43 [i_7] = ((((((arr_34 [i_7]) ? 1386479188 : -106))) ? (arr_29 [i_7 + 1] [15]) : var_15));
                }
                arr_44 [i_7] = (arr_29 [i_9] [i_7]);
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_27 = var_9;
                    var_28 = (((arr_46 [i_7 + 1]) - (arr_46 [i_7 - 1])));
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_29 = ((var_9 || (var_0 | var_2)));
                    var_30 = (min(var_30, ((((var_11 + 878211874) ? var_11 : 1)))));
                }
                arr_52 [i_7] = 878211884;
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_31 = var_5;
                var_32 = (min(var_12, ((min(((min(var_9, 1))), (arr_47 [i_7]))))));
                var_33 = (-24 >= 2876481638);
                var_34 = (max(((max(95, 14845))), ((-((((arr_39 [i_7] [i_7] [i_15]) || var_12)))))));
            }
            arr_57 [i_7] = var_6;
        }
        var_35 = ((((min((arr_48 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]), (arr_37 [i_7 + 1] [i_7] [i_7])))) ? (min((arr_37 [i_7] [11] [i_7 + 1]), var_15)) : (((min((arr_48 [i_7 - 1] [i_7] [i_7] [i_7 - 1]), (arr_48 [i_7] [i_7 + 1] [i_7] [i_7 + 1])))))));
        arr_58 [i_7] [i_7] = ((((((arr_49 [i_7]) ? (~-32) : (((arr_38 [19] [19] [i_7 - 1] [19] [i_7]) / var_5))))) ? (((((var_0 ? (arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : -1))) ? -var_3 : 1)) : var_11));
        var_36 = (max(var_36, (((-(((var_7 >= (arr_53 [18] [i_7] [3])))))))));
    }
    for (int i_16 = 1; i_16 < 23;i_16 += 1) /* same iter space */
    {
        var_37 = (((arr_30 [i_16]) ? ((min(var_3, (((arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) ? var_13 : 2336991842))))) : ((1 ? (var_1 | 1) : var_12))));

        /* vectorizable */
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            arr_64 [i_16] [i_17] = (!var_1);
            arr_65 [i_16] = (+-102);
        }
        arr_66 [i_16] = ((var_7 ? -583035299 : (~1)));
        var_38 = (max(var_38, (((-var_11 * (((((var_10 ? var_9 : (arr_45 [16])))) ? 18446744073709551615 : var_4)))))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                {
                    arr_73 [i_16] [i_16] [i_16] = (~var_12);
                    arr_74 [i_16 + 1] [i_16] [6] [i_16 + 1] = -0;
                }
            }
        }
    }
    for (int i_20 = 1; i_20 < 23;i_20 += 1) /* same iter space */
    {
        var_39 = -113;
        arr_77 [i_20 - 1] [i_20] = ((((min((var_11 && 31), (min(255, var_13))))) < (var_9 && var_9)));
    }
    for (int i_21 = 1; i_21 < 6;i_21 += 1)
    {
        arr_82 [i_21] = ((((((arr_50 [i_21 + 1] [i_21] [i_21 + 3] [i_21] [i_21] [i_21]) ? (11257693823743792864 - 1) : -var_3))) ? ((((min(4294967273, var_6))) ? 13605429678801245424 : 3611741092)) : ((min(var_11, var_5)))));
        arr_83 [i_21] &= (+(min((arr_1 [i_21 + 1]), (arr_1 [i_21]))));
        var_40 = (min((((6703420595624010612 ? (arr_12 [i_21 + 3] [4] [i_21] [i_21 + 3]) : (max(-2564576632708993182, 878211865))))), (((arr_9 [4] [i_21] [i_21]) ? (arr_9 [10] [i_21] [i_21]) : var_15))));
        var_41 |= (max((((33339 ? 1 : ((max(var_15, 32315)))))), (max((arr_30 [i_21 + 3]), (arr_26 [i_21])))));
        var_42 = ((((((-112 * -125) ? -var_14 : (((arr_72 [i_21]) ? 4294967282 : var_1))))) ? (min(-7869707997078410510, (((arr_18 [6] [6] [i_21 - 1] [i_21] [i_21]) / var_4)))) : ((min(var_0, var_14)))));
    }
    #pragma endscop
}
