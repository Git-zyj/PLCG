/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 ^= var_12;
        var_21 = (((var_12 ? var_2 : (arr_0 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 += ((((min((~var_19), var_3))) ? ((var_3 ? (arr_3 [i_1] [i_1]) : (arr_3 [i_0] [i_1]))) : (max(var_8, -var_1))));
            var_23 &= var_13;
            arr_6 [i_0] [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_9 [i_2] [i_0] = (max(((var_13 != (((var_3 != (arr_8 [i_0] [i_2] [i_2])))))), (arr_8 [i_0] [i_0] [i_2])));
            var_24 = (((min(var_11, (arr_1 [i_0]))) | (min((arr_1 [i_2]), (arr_1 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_25 = (((var_10 - (arr_0 [i_0] [i_0]))));
            arr_12 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
            var_26 = (min((min((arr_8 [i_0] [i_3] [i_3]), ((var_15 + (arr_7 [i_0]))))), ((((min((arr_11 [i_0] [i_0]), 12854))) ? (~var_13) : ((~(arr_1 [i_3])))))));
        }
        var_27 = ((+(((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
        var_28 = ((((((arr_1 [i_0]) ? (max(var_12, var_12)) : (((var_13 ? (arr_5 [i_0]) : (arr_10 [i_0]))))))) ? (max(-var_10, ((min(1, (-32767 - 1)))))) : ((((((arr_1 [i_0]) ? 4294967295 : (arr_5 [i_0])))) ? ((max((arr_8 [i_0] [i_0] [i_0]), var_15))) : (arr_3 [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (((((arr_14 [i_4] [i_4]) < (arr_15 [i_4]))) ? (((arr_16 [i_4] [i_4]) << (((arr_16 [i_4] [i_4]) - 3401356878)))) : (((max((((arr_13 [i_4]) || var_14)), 1))))));
        arr_18 [i_4] = (arr_15 [i_4]);
        arr_19 [i_4] = ((-((-(arr_15 [i_4])))));
        arr_20 [i_4] = ((-32767 & (arr_14 [i_4] [i_4])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_29 = (~-1406786659);

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_26 [i_6] = (var_19 - var_7);
                var_30 = ((~((1 ? (arr_22 [i_4]) : -15))));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_31 = (!var_13);

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_32 = ((17343 << (((var_13 + 19209) - 23))));
                    var_33 = ((-(arr_23 [i_4] [i_5] [i_7])));
                    arr_34 [i_4] [i_4] [i_8] [i_4] = -27879;
                    arr_35 [i_4] [i_4] [i_8] [i_4] [i_4] = (arr_29 [i_4] [i_4] [i_4] [i_4]);
                }

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_34 = (min(var_34, (var_0 / var_5)));
                    var_35 = var_15;

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_36 = (((arr_24 [i_4] [i_7]) ? -var_14 : (((~(arr_38 [i_4] [i_4] [11] [i_4]))))));
                        var_37 = ((-((1 ? (arr_37 [i_4] [i_5] [i_7] [i_4]) : var_5))));
                    }
                }
                var_38 = (arr_30 [i_5] [1] [i_4]);
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_39 = (((((var_11 ? (arr_32 [i_4] [i_4] [i_4]) : (arr_28 [i_11])))) ? (max((arr_24 [i_4] [i_4]), var_18)) : (((arr_15 [i_4]) ? (arr_24 [i_4] [i_4]) : var_11))));
            arr_44 [i_4] [i_11] = (+(((arr_13 [i_11]) ? (arr_27 [i_11] [i_11] [i_11] [i_4]) : (arr_14 [i_11] [i_4]))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_40 = ((arr_43 [i_4] [i_4]) < (arr_21 [i_12]));
            var_41 ^= ((1 ? (arr_22 [i_4]) : var_15));
            var_42 = (((arr_21 [i_4]) - (arr_21 [i_4])));
            var_43 = 3976;
        }
    }
    var_44 = (var_4 % (min((var_7 ^ var_13), ((var_11 ? var_13 : var_8)))));

    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        arr_52 [i_13] [i_13] = (((arr_15 [i_13]) == var_19));
        var_45 = (((max(-var_16, (arr_49 [i_13] [i_13])))) ? var_11 : ((max(5501, var_2))));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_46 = (min(var_46, var_5));

            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {
                var_47 = ((-(arr_50 [i_14] [i_14])));
                arr_58 [i_15] [i_15] [i_15] = ((var_14 | (arr_49 [i_13] [i_14])));
                arr_59 [i_15] = ((arr_57 [i_15] [i_14] [i_13] [5]) + var_1);
                arr_60 [i_13] [i_14] [i_15] [9] = (((arr_30 [i_15] [i_14] [i_15]) < var_12));
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
            {
                arr_63 [i_13] = (((arr_32 [i_16] [i_14] [i_13]) | var_10));

                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_48 ^= ((-(arr_27 [i_13] [i_14] [i_14] [i_17])));
                    var_49 = var_18;

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_68 [i_13] [i_14] [i_16] [i_17] [i_14] = var_4;
                        arr_69 [i_13] = (arr_49 [i_17] [12]);
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        var_50 = var_15;
                        arr_72 [i_16] [i_17] [i_19] = (arr_49 [i_16] [i_19]);
                        var_51 = (((var_18 && var_2) ? (arr_36 [i_13] [i_14] [i_16] [i_16]) : (arr_25 [i_13] [i_13] [i_14] [i_13])));
                        var_52 += -var_11;
                    }
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_53 = (((arr_61 [i_16] [i_14] [i_13]) % (((var_5 << (((arr_21 [i_13]) - 23945)))))));
                        var_54 += var_12;
                        arr_75 [i_13] [i_14] [i_16] [i_17] [i_20] [i_14] [i_14] = (((arr_71 [i_13]) || (arr_62 [i_13] [i_16] [i_17] [i_20])));
                        var_55 = (var_5 ^ var_16);
                        var_56 = ((var_10 != (arr_24 [i_14] [i_20])));
                    }
                    var_57 = (max(var_57, (((arr_67 [i_13] [i_17]) ? -var_14 : 6756))));
                }
                arr_76 [i_13] [i_13] [i_13] [i_13] &= ((arr_42 [i_13] [i_13] [i_16]) ? ((((arr_57 [i_13] [i_13] [i_16] [i_13]) <= (arr_51 [i_16])))) : ((((arr_41 [i_14]) > (arr_28 [i_16])))));
                arr_77 [i_16] [i_14] [i_14] [i_13] = ((arr_16 [i_13] [i_14]) ? ((var_4 ^ (arr_29 [i_13] [i_13] [12] [i_13]))) : (((2996 ? 6673 : var_11))));
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            arr_80 [i_21] [i_21] = var_12;
            var_58 += (arr_42 [i_13] [i_21] [i_21]);

            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                var_59 = (arr_22 [i_13]);

                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    var_60 ^= ((7782 ? var_18 : var_17));
                    var_61 = (arr_24 [i_23] [i_13]);
                    arr_85 [i_13] [i_21] [i_22] = ((-(arr_40 [i_23] [i_23] [i_22] [i_21] [i_21] [i_21] [i_13])));
                }
                var_62 = (((var_4 ? var_6 : var_11)));
            }
        }
        var_63 *= (((arr_64 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (-1826905153 % var_12) : var_12));
    }
    for (int i_24 = 0; i_24 < 14;i_24 += 1)
    {
        var_64 = ((var_5 * ((max((arr_54 [i_24]), var_6)))));
        var_65 += var_18;
    }
    var_66 = var_10;

    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        arr_92 [i_25] = ((arr_39 [i_25] [i_25] [i_25] [i_25] [i_25]) ^ (min(-var_9, (arr_91 [i_25] [i_25]))));
        var_67 = var_11;
    }
    #pragma endscop
}
