/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = ((((3549808832 + 745158464) ? 38878 : 8)));
            var_17 = var_8;
            arr_4 [i_1] [i_1] [i_1] = ((var_12 ? (max((arr_1 [i_1]), ((var_1 ? var_15 : var_14)))) : ((~((3549808832 ? (arr_3 [i_0]) : (arr_3 [10])))))));
        }
        arr_5 [i_0] = (min((arr_1 [21]), var_10));
        var_18 += ((((var_2 != (arr_3 [17]))) ? ((29276 ? (arr_3 [22]) : 26658)) : (((var_11 >> (var_10 - 52804))))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_19 ^= (((min(((var_3 ? (arr_3 [24]) : (arr_2 [23] [i_2] [1]))), (((arr_2 [i_2] [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : var_8)))) != (max(((var_9 ? (arr_0 [i_2]) : var_0)), -8160))));

        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_20 = (min(var_20, ((max(((var_8 ? var_12 : -var_7)), ((((((var_0 ? (arr_3 [i_2]) : var_14))) ? (var_13 | var_11) : var_10))))))));

            for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_21 = (max(var_21, (((var_7 ? (arr_0 [i_3 + 1]) : -var_0)))));
                    var_22 = ((~(arr_1 [i_5 - 1])));
                }
                var_23 = (min((arr_12 [i_4 + 2] [i_4]), ((var_1 ? (arr_7 [9] [i_4 - 2]) : var_14))));
            }
            for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_17 [i_2] [i_3] = ((((~(arr_14 [1] [10] [i_6] [i_6 + 2])))) ? var_7 : var_11);
                var_24 = (((~(arr_9 [i_2] [i_3] [2]))));
            }
            arr_18 [i_3] [i_3] = var_12;

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_25 = (max(var_25, ((((((var_5 ? var_2 : var_6))) ? (arr_21 [i_2] [i_3 - 4] [i_2 + 2]) : (arr_15 [i_2] [i_3 + 1] [i_7]))))));
                var_26 = ((((26665 ? 17241 : 4294967294)) <= var_3));
                var_27 |= ((var_2 ? -var_6 : (arr_1 [i_2])));
            }
            var_28 = (min(var_28, var_7));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_28 [i_2] [i_2] [i_8] = (arr_8 [i_8] [i_8] [0]);
                arr_29 [i_2] &= (((arr_0 [i_2 - 1]) >> (((arr_22 [i_2] [i_8] [i_2]) - 48770))));

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_34 [i_8] [6] [i_9] [10] = (min(var_1, 20333));
                    var_29 = (min(var_29, (((((var_10 & ((var_9 ? var_12 : (arr_27 [10] [i_2])))))) ? var_3 : (((((var_14 ? var_2 : var_2))) ? (((var_5 ? var_0 : var_3))) : (var_7 - 31236)))))));
                    var_30 = (max(var_30, var_3));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_31 = (max(var_31, (((var_9 <= (arr_26 [i_2] [4]))))));
                        var_32 = (var_12 ? var_8 : (var_2 < var_1));
                        arr_37 [i_2] [i_8] [i_8] [i_10] [i_11] = var_2;
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_41 [0] [i_8] [11] [i_8] = (((((arr_8 [i_8] [i_9] [3]) ? (min(var_2, var_15)) : var_9))) ? (((~(((var_2 > (arr_3 [i_12]))))))) : (max(var_5, (arr_20 [i_2 + 3] [i_2 + 2]))));
                        var_33 = var_6;
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_34 *= (arr_12 [i_2 + 3] [i_8]);
                        var_35 = (((((arr_6 [6]) ? ((38530 ? var_0 : var_6)) : ((((arr_6 [i_8]) ? var_10 : var_11)))))) ? (((((var_9 ? 38821 : var_11))) ? var_13 : (((arr_11 [i_9] [i_13]) ? var_15 : (arr_16 [i_2] [3] [i_8] [i_13]))))) : ((-var_3 ? (arr_27 [i_2 - 1] [i_8]) : (((arr_9 [i_2] [i_8] [10]) ? 4213482387 : 40356)))));
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_48 [8] [3] [11] [i_8] [9] [9] [7] = ((((var_0 ? var_0 : var_6)) <= (((((65517 + (arr_0 [23])))) ? var_7 : (((min(var_0, var_11))))))));
                        var_36 += (min((min(((var_8 ? (arr_14 [1] [i_9] [7] [i_14]) : var_8)), (arr_9 [i_2] [i_2] [i_14]))), (((((min(26660, 27005)))) % (min(var_15, var_2))))));
                        var_37 = (((((var_1 ? var_15 : (arr_14 [11] [i_8] [i_9] [1]))))) ? (33554431 & 1433853870) : (~20904));
                    }
                }
            }
            var_38 = ((var_1 ? (var_15 > var_12) : (((((var_14 ? var_15 : var_3))) ? 33279 : var_12))));
        }
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            arr_53 [i_2] [i_15] = (((arr_14 [i_2 + 2] [i_15] [i_15] [i_15]) ? var_11 : 65535));
            var_39 = ((~(var_6 && var_6)));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_40 += -var_7;
        var_41 ^= var_13;
    }
    for (int i_17 = 4; i_17 < 14;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                arr_63 [14] [7] [14] = ((-((((arr_58 [13] [i_17 + 1] [1]) <= 745158490)))));
                var_42 = ((((((((arr_0 [i_19]) ? var_14 : var_2))) ? (arr_54 [i_18]) : ((var_15 ? var_8 : var_15)))) >= (((53883 ? 22034 : 65535)))));
            }
            arr_64 [i_18] [2] [i_18] = (((arr_58 [3] [i_18] [i_18]) | (((arr_58 [3] [8] [8]) ? (arr_1 [i_17 + 1]) : (arr_61 [2])))));
            var_43 += (((((arr_2 [i_17] [8] [i_18]) ? (arr_0 [i_18]) : var_14))) ? (~var_4) : (arr_0 [13]));

            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                var_44 -= (max(var_3, ((var_9 ? var_14 : (arr_66 [13] [i_17 - 4] [i_20] [i_17])))));
                var_45 = var_2;
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {

                for (int i_22 = 3; i_22 < 14;i_22 += 1)
                {
                    var_46 += ((var_10 && ((((arr_57 [0]) ? (arr_0 [4]) : var_5)))));
                    var_47 &= (arr_73 [i_17] [1] [i_21] [i_22] [i_17] [6]);
                }
                var_48 = (((((arr_3 [6]) ? var_0 : 20306))) ? ((((arr_66 [4] [8] [0] [12]) / 65525))) : ((2885752134 - (arr_55 [i_17]))));
            }
        }
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {

            for (int i_24 = 1; i_24 < 14;i_24 += 1)
            {
                arr_79 [3] [1] [i_23] [0] = 18661;

                for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
                {
                    var_49 = ((((((3273086917 && 3221225472) ? 63 : 1339119593))) ? (((var_3 ? (arr_59 [i_24 - 1] [i_17]) : 26023))) : ((var_7 ? (arr_78 [i_24 + 1] [i_24 + 1]) : var_6))));
                    var_50 = (max(((((min(var_10, 31859))) ? 1073741836 : (arr_59 [2] [i_23]))), ((~(arr_81 [i_25])))));
                    arr_83 [i_25] = ((-((-0 ? ((53885 ? var_11 : var_8)) : (((var_4 ? var_1 : var_1)))))));
                }
                /* vectorizable */
                for (int i_26 = 0; i_26 < 15;i_26 += 1) /* same iter space */
                {
                    var_51 = ((((20356 ? var_9 : (arr_59 [i_26] [i_17])))) ? (arr_67 [i_24 - 1] [4] [i_17 - 1]) : 11651);

                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        var_52 |= (var_5 ? var_14 : (arr_84 [i_17 + 1] [1] [i_24] [i_26]));
                        var_53 = (((((arr_75 [i_17]) ? var_2 : (arr_57 [5]))) != (((arr_70 [i_23] [13] [2]) ^ var_1))));
                    }
                }
                for (int i_28 = 0; i_28 < 15;i_28 += 1) /* same iter space */
                {

                    for (int i_29 = 2; i_29 < 13;i_29 += 1)
                    {
                        arr_94 [i_17] [i_17] [i_24] [i_29] [8] [i_23] [10] |= 24539;
                        var_54 = (-var_2 ? -var_0 : ((767427996 - ((var_8 ? 3221225461 : var_14)))));
                        var_55 = ((-(max((arr_2 [i_17 - 2] [i_24 + 1] [i_29 + 2]), 3))));
                    }
                    var_56 ^= (min((45179 | 8), ((var_5 << (20904 - 20892)))));
                }
                for (int i_30 = 0; i_30 < 15;i_30 += 1) /* same iter space */
                {
                    var_57 = var_7;
                    var_58 = (max(var_58, ((((((arr_92 [14] [i_23] [2] [4] [i_23] [i_17]) - (arr_74 [i_17 - 2] [i_17 - 3]))) ^ ((44815 ? 44815 : 3)))))));
                }
                var_59 = (((var_2 ? var_6 : ((var_4 ? (arr_86 [1] [7] [1] [i_17]) : var_9)))));
                arr_98 [i_17] [i_17] [9] = ((((42000 < (arr_77 [i_17 + 1] [i_17]))) ? (((arr_77 [i_17 - 2] [9]) ? var_8 : var_2)) : ((((arr_77 [i_17 + 1] [i_23]) ? var_3 : (arr_77 [i_17 + 1] [8]))))));
            }
            /* vectorizable */
            for (int i_31 = 0; i_31 < 15;i_31 += 1)
            {
                arr_103 [i_31] [0] [i_31] = var_15;
                arr_104 [i_31] [i_23] [i_23] = (arr_70 [1] [9] [7]);
            }
            var_60 = (max(var_60, (~var_4)));
        }
        var_61 = max(((((((arr_100 [8] [i_17] [0] [i_17]) * var_15))) ? ((var_13 ? 4064 : var_11)) : (((var_3 ? var_0 : (arr_75 [i_17])))))), (((arr_61 [i_17]) + 11)));
        var_62 = (min(var_62, (arr_57 [12])));
    }
    var_63 = (((1679508565 + ((var_2 ? var_15 : var_9)))) - ((var_14 ? ((var_7 ? var_6 : var_6)) : var_11)));
    #pragma endscop
}
