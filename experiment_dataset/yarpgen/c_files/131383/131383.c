/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, var_4));
        var_20 = var_15;
        arr_2 [i_0] |= var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (!var_16);

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 |= ((~((var_14 ? (arr_1 [i_2] [i_1]) : (arr_1 [i_2] [i_2])))));
            var_22 -= (((arr_8 [1] [i_2] [1]) ? 0 : (arr_8 [i_1] [i_1] [14])));
        }
        var_23 = (((var_4 / 2001726486) ? 1 : 1));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_12 [i_3] |= var_13;
        var_24 = (((((var_12 ? 1 : (arr_0 [i_3])))) ? 6073221518005498438 : (arr_3 [i_3 + 2])));
        arr_13 [i_3] = var_16;
        var_25 = (arr_1 [i_3] [i_3 + 3]);
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_26 = ((~((-2001726487 ? (arr_14 [i_4]) : (arr_17 [i_4] [i_5])))));
            arr_19 [i_5] [i_5] = (((arr_17 [i_4] [i_4]) / ((-6073221518005498437 ? -6073221518005498438 : var_2))));
            arr_20 [i_4] [i_5] = (((min((arr_14 [i_5]), var_10)) >> ((((~(arr_18 [6] [11] [i_5]))) - 16044475036531557121))));
            var_27 = (max(var_27, (((((((min(54, var_17))) ? var_13 : var_18)) / var_0)))));
        }

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_28 += (arr_18 [i_4] [i_6] [i_4]);
            arr_24 [i_6] = ((((arr_16 [i_4] [i_4]) ? -6073221518005498438 : ((8252 ? var_12 : (arr_23 [i_4] [i_6]))))));
            arr_25 [i_4] = -1439686022;
            var_29 ^= (min((((((min(var_3, var_18)))) ^ (arr_23 [i_6] [i_4]))), ((min((arr_14 [i_4]), (arr_14 [i_6]))))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_30 [i_7] [i_4] = (var_12 ? (var_16 * var_16) : ((min((arr_23 [i_7] [i_7]), 3))));
            var_30 = ((var_13 && (arr_23 [i_4] [i_7])));

            for (int i_8 = 4; i_8 < 21;i_8 += 1)
            {
                var_31 = (min(var_31, ((((!-1714352076) ? (((arr_33 [i_8 + 2] [i_7] [i_8] [i_4]) ? (arr_29 [i_8 + 2] [i_7] [i_7]) : (arr_32 [i_8 - 3] [19] [i_7] [i_8]))) : ((~(arr_32 [i_8 + 3] [i_7] [i_8] [i_8]))))))));

                /* vectorizable */
                for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    var_32 = ((-(arr_26 [i_8 - 2] [i_8 + 1])));
                    arr_37 [i_4] [i_8 + 1] [i_8 + 1] = var_16;
                }
                for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_4] [i_10] = ((min((arr_41 [i_4] [i_4] [i_8 + 2] [i_10 - 2]), -2001726486)));
                        arr_44 [12] [i_7] [i_7] [i_10] [i_10] [i_11 - 1] = (~var_2);
                        var_33 = var_2;
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_34 -= var_11;
                        arr_47 [i_4] [i_7] [i_4] [i_10] = var_11;
                        var_35 = (((arr_41 [i_8 - 2] [i_10 + 1] [i_12] [i_12 - 1]) - ((-(arr_41 [i_8 - 2] [i_10 + 1] [i_12] [i_12])))));
                        var_36 -= 0;
                    }
                    arr_48 [i_7] [i_7] [i_10] [i_10] [i_8] = var_5;
                    var_37 = -3919;
                }
                var_38 = var_3;
            }
            for (int i_13 = 4; i_13 < 20;i_13 += 1)
            {
                arr_52 [i_13 + 2] = var_16;
                arr_53 [i_13] [i_7] [i_4] = (min(var_12, var_16));
                var_39 = (((arr_33 [i_4] [i_7] [i_13 + 2] [i_13 - 2]) ^ (min(47, ((min(24, var_17)))))));

                for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    arr_57 [i_4] [4] = (min(var_1, (((!-7206330854498782650) ? ((((!(arr_50 [i_13]))))) : (((arr_55 [i_7] [i_14]) ? 1 : -7206330854498782660))))));

                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_40 = (max(var_40, (arr_56 [i_14 + 2])));
                        var_41 -= (arr_49 [i_15] [i_14 + 1] [i_15 - 1] [i_13 - 1]);
                        arr_61 [i_4] [i_4] [i_7] [i_13] [i_14] [i_4] [i_15] = var_6;
                        var_42 *= (~(arr_49 [i_13 - 3] [i_14 + 1] [i_15 - 1] [i_15 - 1]));
                        arr_62 [i_7] [i_7] [i_7] [i_7] [i_7] |= ((-(arr_50 [i_15])));
                    }
                    /* vectorizable */
                    for (int i_16 = 4; i_16 < 21;i_16 += 1)
                    {
                        arr_67 [i_16 - 4] [i_16 + 1] [i_4] [i_13] [i_7] [i_4] = (arr_31 [i_13 - 4] [i_13 - 3] [i_13 - 2]);
                        arr_68 [i_4] [i_7] [i_13] [i_14] [i_14] [i_16] = (arr_65 [22] [i_7] [i_7] [i_14] [i_16] [i_14]);
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_43 *= ((((((arr_42 [i_13 + 2] [i_14 + 3] [i_14 + 1] [i_14] [i_13]) >= 1))) == ((((var_0 * (arr_17 [14] [5]))) * (arr_58 [i_13 + 2])))));
                        arr_71 [i_4] [i_7] [i_7] [i_13] [i_14] [i_17] = ((min(7206330854498782660, 65535)));
                        arr_72 [i_14 + 3] [i_17] [i_14 + 3] [i_13] [i_4] [i_7] [i_4] = var_0;
                    }
                    var_44 = (max(var_44, (((~(~3906))))));
                    var_45 &= ((-(arr_58 [i_4])));
                    var_46 = var_6;
                }
                for (int i_18 = 1; i_18 < 21;i_18 += 1) /* same iter space */
                {
                    var_47 = var_6;
                    arr_77 [i_13 - 3] |= ((((arr_56 [i_13 + 3]) && (arr_56 [i_13 - 4]))));
                    var_48 = arr_38 [i_4] [i_13];
                    arr_78 [i_4] [i_4] [i_13] [i_18] = (arr_35 [i_13]);
                }
                for (int i_19 = 1; i_19 < 22;i_19 += 1)
                {
                    var_49 = (arr_81 [i_4] [i_4] [i_13] [i_4]);
                    var_50 = ((((~(-7980107791905745954 & var_9))) ^ 2043378683));
                }
            }
            var_51 &= ((((var_17 ? var_3 : 3906))) ^ (min((arr_29 [i_4] [i_7] [i_7]), (arr_76 [i_4]))));
            arr_82 [i_4] = ((((min(65535, 0))) ? (arr_66 [i_7] [i_4]) : (min(((var_16 % (arr_80 [i_4] [i_7] [i_7]))), (arr_74 [i_4] [i_4] [i_4] [i_4] [i_7] [i_7])))));
        }
    }
    var_52 ^= (((var_1 + 2147483647) >> var_9));
    var_53 = var_11;
    #pragma endscop
}
