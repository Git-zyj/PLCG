/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, ((min(var_8, (((((arr_1 [i_0]) ? var_3 : var_2)) | (var_17 % var_10))))))));
        var_21 = 1;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = arr_3 [i_1];
        var_23 = (arr_3 [i_1]);
        arr_5 [i_1] = var_0;
    }

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_24 = (arr_11 [i_3 + 1] [i_2 + 3]);

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_3] = (((((arr_14 [i_2 + 2] [i_2 + 2]) ? (arr_14 [i_2 - 3] [i_2 + 2]) : (arr_14 [i_2 - 1] [i_2 + 1]))) << ((((~(((1 > (arr_6 [i_2])))))) + 20))));
                    arr_17 [i_3 + 1] [i_3] [i_5] = ((((((arr_7 [i_3 + 1]) ? (arr_7 [i_3 + 1]) : var_10))) ? var_2 : (arr_7 [i_3 + 4])));
                    var_25 = ((~(arr_9 [i_3 + 2] [i_3] [i_4 - 1])));
                    arr_18 [i_3] [i_5] [i_5] [i_5] [10] [i_5] = ((((var_11 + 9223372036854775807) >> (((arr_7 [10]) - 13202)))));
                    var_26 = ((((((var_5 ? var_12 : var_9)))) | var_17));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_27 = ((~(arr_7 [i_2 + 2])));
                    var_28 = var_11;
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_26 [i_2 + 3] [i_2 + 3] [i_4] [i_3] [i_7] [i_2 + 3] [i_8] = (max(var_19, var_13));
                        var_29 -= ((var_10 ? ((((-2147483647 - 1) ? 28664 : 8953254675396117318))) : ((((var_5 || (arr_15 [20] [20] [i_4 + 1] [i_7] [i_7]))) ? (min((arr_25 [i_2] [i_3] [i_4] [i_7] [i_8]), var_9)) : var_10))));
                    }

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        var_30 = ((~var_1) ? (arr_10 [i_2] [i_2]) : (arr_14 [i_2 + 2] [2]));
                        var_31 = (((~var_12) ? (~2147483648) : ((var_0 ? (arr_7 [i_2]) : var_16))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_31 [i_10] [i_3] [i_4] [i_7] [10] = var_17;
                        var_32 |= ((185 ? 10 : 16));
                    }
                    arr_32 [i_3] [i_3] = (min(((min((max(var_14, var_4)), (((var_19 ? (arr_8 [12]) : var_17)))))), (arr_15 [i_2] [i_2 - 2] [i_2] [i_2] [i_3])));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        var_33 = (((~var_0) ? ((((var_18 ? var_6 : var_9)) - var_2)) : ((~(arr_6 [i_2])))));
                        arr_35 [10] [10] [i_3] [i_7] [10] = var_0;
                        var_34 += (min(var_16, var_3));
                        arr_36 [i_2] [i_3] [i_2 - 3] [i_2 + 3] [11] [i_2] = (((((var_10 ? (arr_15 [i_2 - 1] [i_3 - 1] [i_4 + 1] [i_3] [i_3]) : (arr_15 [i_11] [i_3 + 3] [i_4 + 1] [i_7] [i_3])))) ? (arr_15 [i_3] [i_3 + 3] [i_4 + 1] [i_7] [i_3]) : var_9));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_35 = ((((((arr_37 [i_2] [i_3] [i_4] [i_7] [i_7] [i_12]) ? (arr_12 [i_2 - 3] [i_3 - 1]) : (min(var_1, var_1))))) ? ((((var_0 == ((-1473428813 ? 0 : 0)))))) : (~var_4)));
                        var_36 = (max(var_36, var_16));
                        var_37 = min(((max(1, 511))), (min((((-16290 + 2147483647) << (((-3686070163038568537 + 3686070163038568554) - 17)))), (min((arr_22 [i_4] [i_7] [i_4] [i_3 + 2] [20]), var_9)))));
                        var_38 = ((var_10 >> ((((((58692 ? 2767992478 : 16289)) << (((((arr_8 [i_3]) & var_7)) - 32772)))) - 2115718898))));
                        var_39 = (var_10 / var_19);
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_40 *= ((~(min((arr_9 [i_2] [i_7] [i_7]), var_10))));
                        var_41 = ((((max((arr_28 [i_2 + 1] [i_3 - 1] [i_3 + 3] [i_4 + 1]), var_11))) ? (((arr_9 [i_4 - 1] [i_3] [i_2 + 2]) ? (arr_7 [i_2 - 1]) : var_16)) : (-30867 != 1)));
                        var_42 = (arr_40 [6] [6] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                    }
                }

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_43 += ((~(((min(var_15, var_0)) << ((1 >> (255 - 229)))))));
                    var_44 = var_19;
                    var_45 = (((var_9 - var_7) ? (arr_24 [i_3] [i_3] [i_3 + 3] [i_4] [i_4] [2]) : (((var_12 ? (((arr_10 [i_4] [11]) ? (arr_41 [6] [i_14] [i_3] [i_14] [i_14]) : (arr_29 [i_3]))) : (var_18 > var_0))))));
                }
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    arr_46 [i_2] [i_3] [i_3] [i_15 + 2] = (min((-32767 - 1), -30867));
                    arr_47 [11] [i_3] [i_4 - 1] = var_8;
                    var_46 = (((~var_10) ? ((((((((arr_28 [i_2] [i_2 - 2] [i_4 + 1] [i_15]) + 9223372036854775807)) >> (var_2 - 13540222162443327980)))) ? (arr_13 [20] [12] [i_15] [i_15]) : (var_13 / var_0))) : (((((((var_12 >> (arr_37 [19] [i_3 + 1] [i_3] [i_4 + 1] [i_15 + 1] [i_3])))) < (arr_28 [i_15 + 2] [i_4 + 1] [i_3 + 3] [i_2 - 2])))))));
                }
                var_47 -= (arr_44 [14] [14] [14] [i_2]);
            }
            var_48 = (arr_39 [12] [i_2] [i_2] [i_2] [i_3]);
            var_49 = var_7;
        }
        arr_48 [1] |= var_18;
    }
    var_50 -= (var_5 == var_4);
    var_51 = (((((var_12 > var_3) * var_14)) == var_15));
    #pragma endscop
}
