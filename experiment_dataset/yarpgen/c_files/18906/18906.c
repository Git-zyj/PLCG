/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = (min((max(var_15, (arr_1 [i_0]))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((((1411765532 / (min(-1411765532, var_8)))) * var_13));
                        var_20 ^= ((((min((arr_5 [i_2]), var_13))) != (max(261512117, (arr_5 [i_0])))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_3 + 1] [i_1] = (((min(((max(var_1, var_13))), (min(var_15, (arr_5 [i_1]))))) * (min((max(var_7, var_4)), (((1411765532 ? var_13 : (arr_3 [i_1] [i_1]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [i_4] = (max((((-(arr_10 [i_4] [i_4] [i_4] [i_5] [i_4])))), (min((arr_10 [i_5] [i_5] [i_4] [i_4] [i_4]), var_15))));
            arr_21 [i_5] [i_4] = ((var_13 != ((var_1 * (min(var_0, var_6))))));

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_21 = (min(((((arr_0 [i_4]) || (arr_0 [i_4])))), ((((261512117 != (arr_8 [i_4] [i_4] [i_4] [i_5] [i_5] [i_4])))))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_28 [i_4] [i_5] [i_6] [i_7] = var_7;
                    arr_29 [i_4] [i_4] [i_6] [i_7] &= (max((((!var_18) ? (!var_9) : var_12)), (!8886)));
                    var_22 = (((((((arr_13 [i_4] [i_5]) != var_7)))) * (arr_13 [i_7] [i_5])));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_23 = ((1411765532 ? var_14 : ((max((arr_24 [i_4] [i_4] [i_4] [i_4]), (arr_24 [i_4] [i_5] [i_4] [i_9]))))));
                        arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((!((var_11 != (arr_25 [i_4] [i_4] [i_4] [i_5] [i_5] [i_4])))));
                        var_24 &= var_2;
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_38 [i_4] [i_4] [i_4] [i_4] [i_8] [i_4] [i_10] = ((((((-108 ? var_2 : var_0)))) != (~-120)));
                        arr_39 [i_10] [i_8] [i_6] [i_5] [i_4] = (min(var_9, (max((min(1411765532, var_4)), ((max(var_5, -64)))))));
                        var_25 = (max(var_25, ((min(((min(((~(arr_16 [i_5]))), ((((arr_32 [i_8] [i_8] [i_6] [i_5] [i_4]) | (arr_0 [i_6]))))))), ((var_0 ? (min(var_15, (arr_1 [i_4]))) : (~var_10))))))));
                        var_26 = (min(-1411765533, (min(var_10, (min((arr_30 [i_6] [i_6]), (arr_35 [i_4] [i_5] [i_8])))))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_27 = (~(!var_10));
                        var_28 = (min(((((arr_22 [i_8]) && (arr_22 [i_4])))), ((min((arr_10 [i_4] [i_5] [i_5] [i_8] [i_11]), var_16)))));
                    }

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_29 = (((max((min((arr_9 [i_4] [i_5] [i_6] [i_8] [i_4] [i_12]), -113)), var_12)) != (((((9860346670769809998 ? var_8 : var_3))) ? (max(var_12, var_11)) : ((max(var_16, var_12)))))));
                        var_30 += var_9;
                    }
                }
                var_31 = ((((var_7 ? (arr_17 [i_4] [i_4]) : (min(var_4, var_16)))) != ((-432346813 ? (arr_40 [i_5] [i_5] [i_4] [i_4] [i_4] [i_4]) : (max(var_17, var_18))))));
                arr_47 [i_4] [i_4] [i_4] [i_6] = (((((-(arr_7 [i_4] [i_4] [i_4] [i_4])))) ? 120 : var_3));
            }
            var_32 = (arr_14 [i_4]);

            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_51 [i_4] [i_5] [i_5] &= (arr_36 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5] [i_13]);
                arr_52 [i_4] [i_4] = ((-(var_3 / var_2)));
                arr_53 [i_5] = (var_4 != var_3);
                var_33 = arr_0 [i_4];
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_65 [i_4] [i_15] [i_17] = var_15;
                                arr_66 [i_4] [i_14] [i_15] [i_16] [i_17] [i_17] [i_17] = (((5098979208625708500 * var_18) * ((((-113 ? 18446744073709551615 : -99))))));
                            }
                        }
                    }

                    for (int i_18 = 1; i_18 < 8;i_18 += 1)
                    {
                        var_34 = (min(var_34, (((((max(var_12, 34359738367))) ? (min((var_11 != var_0), (max(var_9, var_17)))) : 1748113456)))));
                        arr_69 [i_4] [i_14] [i_4] [i_18] [i_18] [i_4] = ((((min(var_15, var_4)) * 1152026231)));
                    }
                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 8;i_19 += 1)
                    {
                        var_35 = (arr_36 [i_4] [i_4] [i_4] [i_4] [i_14] [i_15] [i_4]);
                        arr_73 [i_4] [i_4] [i_15] [i_19] [i_19] = (~var_7);
                    }
                    arr_74 [i_14] [i_14] [i_15] = (min(15578, ((max((arr_71 [i_14]), var_11)))));
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
    {
        var_36 = ((((min(((((arr_42 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) && var_2))), var_18))) * (min(((((arr_19 [i_20] [i_20] [i_20]) ? -120 : var_8))), (min(6548070130495619639, var_6))))));
        var_37 -= var_6;
        var_38 = (min(46, 69));
        arr_78 [i_20] [i_20] = ((+((var_11 ? (arr_57 [i_20] [i_20]) : var_9))));
    }
    var_39 = ((var_12 != ((max(var_13, 596075324)))));
    var_40 = var_5;
    #pragma endscop
}
