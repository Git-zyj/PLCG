/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_17 = (min(((0 ? 2890 : -984861583)), ((((((var_4 << (38355 - 38340)))) >= (max(var_16, 3)))))));
            arr_6 [i_0] = (arr_4 [i_0 - 1] [i_0] [i_0 - 1]);
            var_18 = (min(var_18, ((min((min(var_15, ((8991537428958479259 ? 18446744073709551615 : 2921)))), (((var_15 << (((arr_3 [i_1 + 2] [i_0 + 1]) - 15808256055671518114))))))))));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_19 = ((((var_14 && (arr_7 [i_2 - 2] [i_2]))) ? ((((-25879 + 2147483647) >> ((((min(101, var_14))) - 91))))) : (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0]) : (min((arr_5 [i_0 + 1]), 25879))))));
            arr_10 [i_0] [3] = ((!((((arr_1 [i_0 - 1]) ? var_5 : ((3620271706 ? 62657 : var_14)))))));
            var_20 *= 6554587718908684442;
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] = (((((2418892581 == 20926) != ((min(var_12, var_7))))) ? (min(var_16, (((arr_13 [i_0]) ? (arr_8 [i_0] [i_3]) : (arr_12 [i_3] [i_3]))))) : var_11));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_18 [i_0] = ((~((((((arr_17 [i_0] [i_3 - 2] [i_0]) * (arr_4 [i_0] [i_0] [i_4])))) ? ((var_15 >> (38353 - 38338))) : 62658))));
                arr_19 [i_0 - 1] [6] [6] [i_0] = (((((((var_12 ? var_7 : 1))) && var_12)) ? (((-(arr_5 [i_0 - 1])))) : (((1056964608 | var_6) | var_12))));
                var_21 = (min((((!(((var_11 ? (arr_17 [i_0] [i_0] [i_0]) : var_10)))))), (16378 <= 150)));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 = ((var_15 / (arr_16 [i_0] [i_0 + 1] [i_6] [6])));
                    arr_24 [i_0] [i_3 - 2] [i_3 - 2] [i_0] = ((-(arr_12 [i_0 + 1] [i_0 + 1])));
                }
                var_23 *= ((-(min((arr_14 [i_5] [i_3 - 2]), var_14))));
                var_24 -= var_5;
                var_25 = (max(var_25, ((max((arr_8 [i_0 + 1] [i_3 - 2]), var_9)))));
            }
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                var_26 -= ((min(4376855672714333461, (((arr_25 [i_0] [i_3] [i_7]) + var_10)))));
                var_27 -= (((((max(var_3, var_14)))) | (arr_14 [0] [i_3 - 2])));
                var_28 = (min(var_28, var_13));
            }
        }

        for (int i_8 = 2; i_8 < 7;i_8 += 1)
        {
            arr_30 [i_0] [i_8] [i_0] = (arr_14 [i_0] [i_0]);
            arr_31 [i_0] [i_0] = var_1;
        }
        arr_32 [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    arr_39 [i_0] [1] [i_10] = var_9;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 7;i_12 += 1)
                        {
                            {
                                arr_44 [i_0 + 1] [i_9] [i_0 + 1] [i_11] [i_0] = (((1 | 0) | (((max((arr_36 [i_9] [i_9] [i_0] [i_12 + 1]), (arr_36 [i_0] [i_0] [i_0] [i_12 + 3])))))));
                                arr_45 [i_0] [i_9] [i_9] = (min(36822, (var_8 != -var_11)));
                            }
                        }
                    }
                    var_29 *= ((((((arr_8 [i_0] [i_0 - 1]) ? 511 : (arr_42 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? (((arr_41 [i_10]) << (var_13 - 8140))) : ((min((arr_23 [i_10] [i_9]), (arr_26 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
    {
        var_30 = (((29653 + 1) ? (min((arr_28 [2] [i_13] [i_13 - 1]), var_1)) : ((((arr_11 [i_13 - 1]) - ((var_8 ? -81 : 9717)))))));

        /* vectorizable */
        for (int i_14 = 3; i_14 < 7;i_14 += 1)
        {
            var_31 = var_13;
            var_32 = (min(var_32, var_4));
            var_33 = (max(var_33, (var_16 | -39321)));
        }
        var_34 = var_0;
        var_35 = (((arr_43 [i_13] [i_13] [i_13] [5] [i_13 + 1] [i_13 - 1] [i_13 + 1]) ? (min(45232, 6279888898148441322)) : ((max((arr_43 [i_13] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [5] [i_13 + 1]), var_2)))));
    }
    var_36 = (max(var_36, 0));

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_37 = ((((((min(var_14, var_3)) - var_14))) && var_7));

        /* vectorizable */
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            arr_56 [i_16] = var_11;
            arr_57 [i_16] [12] [20] = (((((1 ? 45232 : 86))) ? (arr_55 [i_16 - 1] [i_16 - 1]) : var_13));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {

                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_67 [i_15] [i_18] [i_16] [i_15] [i_15] = ((!(arr_65 [i_15] [4] [i_15] [i_15] [i_15] [i_15] [i_15])));
                            arr_68 [i_19] [i_16 + 2] [i_17] [i_16] [i_16] = (((((var_16 >> (4257600475734533366 - 4257600475734533350)))) | 2519960667));
                        }
                        var_38 = (max(var_38, 128));
                    }
                }
            }
            var_39 = (arr_60 [i_16 + 2] [i_16 + 1] [0] [i_16 + 1]);
        }
        arr_69 [i_15] = ((((min((arr_60 [i_15] [i_15] [i_15] [i_15]), var_13))) ? (min(1, var_6)) : var_14));
        var_40 = ((var_3 * (((((min(3841680858, var_13)) == var_13))))));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 1;i_20 += 1)
    {
        var_41 = 0;
        arr_74 [i_20 - 1] = (!5668266479471054468);
    }
    var_42 = ((((((((var_16 ? var_2 : 1))) ? 1 : var_1))) ? 4216670137 : ((max((max(var_7, var_10)), 2097151)))));
    #pragma endscop
}
