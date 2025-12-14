/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, var_12));
        arr_2 [i_0] = 31051;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = (((arr_0 [i_1]) ? ((((arr_3 [3]) >> (var_11 - 8499)))) : var_5));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    var_18 = (((arr_14 [i_1] [i_2] [i_3] [i_4 + 1]) | var_15));
                    var_19 = ((arr_14 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 2]) ^ (arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2]));
                    var_20 = (max(var_20, (arr_1 [i_1] [i_2])));
                    arr_16 [i_1] = ((3984254108 ? (arr_1 [i_4 + 2] [i_4 + 3]) : 12288));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_21 = ((arr_18 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3]) + var_15);
                        var_22 = 427544062;
                    }
                    var_23 = 163383473;
                    var_24 = (min(var_24, (arr_8 [2])));
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    arr_24 [i_2] [i_2] [i_2] = (((arr_7 [i_1] [i_2]) < 20247));
                    var_25 = arr_5 [i_3];
                    var_26 = -1841953569;
                }
                var_27 = (-1841953569 > var_1);
                var_28 = (~-31051);
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_27 [i_1] [i_2] [i_2] [i_8] = (((arr_11 [i_1] [i_2] [i_2] [i_1]) * (6 & 0)));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_29 &= (arr_11 [i_1] [i_2] [i_8] [i_9]);
                    var_30 &= ((26628 ? var_1 : var_4));
                    arr_30 [i_2] [i_2] [i_1] = ((23849 ? -0 : 4137284333));
                    var_31 = ((163383472 ? 163383492 : var_1));
                    var_32 = ((((!(arr_3 [i_9]))) ? (((arr_3 [i_1]) ? var_5 : (-32767 - 1))) : ((((arr_23 [i_1] [i_1] [i_2] [i_9]) ? var_9 : var_12)))));
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_33 = (arr_15 [i_1] [i_10 + 2] [i_10 + 1] [i_10 + 2]);

                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        var_34 = (var_14 ? var_0 : (arr_34 [i_1] [i_2] [i_8] [i_1]));
                        var_35 = (min(var_35, (arr_1 [i_8] [i_8])));
                    }
                    var_36 ^= var_7;
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_37 *= (((arr_5 [i_1]) && 268433408));
                        var_38 ^= ((arr_23 [i_1] [i_13] [5] [i_12]) ? (arr_40 [i_1] [i_8] [i_8] [i_12] [i_13]) : var_1);
                        var_39 = var_7;
                    }
                    var_40 ^= ((-(~1005686259)));

                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        var_41 ^= (arr_11 [i_1] [i_2] [i_2] [i_8]);
                        arr_45 [1] [i_2] [i_14] [i_2] [i_2] [i_2] [i_2] = 3717257654;
                        var_42 = (max(var_42, -0));
                        var_43 = (arr_26 [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 2]);
                    }
                    var_44 ^= ((21782 ? -21637 : 1595172775));
                }
                var_45 = (max(var_45, ((var_5 ? (arr_14 [i_8] [10] [i_8] [i_8]) : -1232787316))));
            }
            var_46 = -10102;
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_47 ^= arr_42 [i_1] [i_1] [i_1] [i_1] [i_1];
            var_48 = ((~(arr_40 [i_1] [i_1] [i_1] [i_1] [i_15])));
            var_49 = ((((var_11 ? 3950275504 : var_0)) << (var_13 + 4257)));
        }
        var_50 ^= ((((var_10 ? -32468 : var_4)) ^ var_10));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_51 [i_16] = var_1;
        var_51 = (max((max((-2147483647 - 1), ((~(-32767 - 1))))), -18838));
        var_52 = ((4636 ? 19968 : -1181138445));
    }

    /* vectorizable */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_53 = ((3101546922 != (arr_49 [i_17])));

        for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
        {
            arr_56 [i_18] = (((((arr_54 [i_18] [i_17]) ? 14062 : 480))) ? (var_2 * var_4) : (arr_54 [i_18] [i_18]));
            var_54 = (min(var_54, (((~(-2147483647 - 1))))));
            var_55 *= ((3101546922 >= (arr_50 [i_17])));

            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                arr_60 [i_17] [i_18] [i_19] = (arr_57 [i_18] [i_18] [i_19]);
                arr_61 [i_18] [i_19] [i_19] = ((~(arr_55 [i_18])));
                var_56 = (min(var_56, ((((1126054772 ? 435935980 : 0))))));
                var_57 = (max(var_57, (((-14062 - ((var_4 << (-31239 + 31240))))))));
            }
            var_58 = 2898650504;
        }
        for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 14;i_22 += 1)
                {
                    {
                        arr_72 [i_21] = (((arr_54 [i_21] [i_21]) ? (arr_69 [i_21] [i_21 - 1] [i_21 - 3] [i_21 - 3] [i_21] [i_21]) : (arr_49 [i_21])));
                        var_59 = (min(var_59, ((((arr_69 [i_22 + 2] [i_20] [i_20] [i_21 - 2] [0] [0]) ? (((!(arr_58 [i_17] [i_17])))) : var_12)))));
                        var_60 = (max(var_60, (arr_66 [i_22 + 3] [i_21 + 1] [i_22 + 3] [i_21 + 1])));
                    }
                }
            }
            var_61 = (max(var_61, (arr_70 [i_17] [i_20] [i_20] [i_20] [i_20] [i_17])));
            var_62 = ((10916 ? 879619182 : 3114));
        }
        var_63 ^= var_15;
        var_64 = (max(var_64, var_5));
        arr_73 [i_17] &= (arr_58 [i_17] [i_17]);
    }
    #pragma endscop
}
