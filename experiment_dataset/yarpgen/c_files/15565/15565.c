/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 &= (((-5 ? (arr_5 [i_0] [i_1] [i_1] [6]) : 1)));
                    var_22 = -16;
                    var_23 = (((((-(arr_2 [i_0] [1] [i_2])))) || (var_15 + -40)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_24 = ((-(arr_2 [i_0] [9] [1])));
                        var_25 = (arr_4 [i_2]);
                        var_26 |= -18;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_27 = ((27 ? (~var_9) : (arr_4 [i_0])));
                        arr_12 [7] [4] = var_16;
                        var_28 = (93 != -115);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [10] [5] [i_5] = 72;
                        arr_18 [1] [5] [i_2] [1] = ((!(arr_7 [i_0] [i_0] [6] [i_5])));
                        arr_19 [1] [1] [1] [1] |= (~11);
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_29 = (4294967289 / var_19);
                        var_30 = (max(var_30, var_3));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_31 = (arr_11 [i_0] [i_1] [i_2]);
                            var_32 ^= (arr_14 [i_0] [6] [6] [i_6] [5]);
                        }
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_33 = -42;
                            arr_28 [i_0] [9] [i_6] [i_6] [i_2] [i_6] [6] = (~55412);
                        }
                    }
                }
            }
        }
        var_34 = (~15050242650681836419);
    }
    for (int i_9 = 3; i_9 < 14;i_9 += 1)
    {
        var_35 = (min(var_35, (arr_30 [i_9 - 3] [10])));
        var_36 = (max(var_9, 3758096384));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_37 = (max((-86 & -12), 248));
        arr_33 [i_10] = 39375;

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_37 [i_10] &= 125;
            var_38 = (((((!((min((arr_34 [8] [4]), (arr_34 [i_10] [i_11]))))))) / 10109));

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_39 = 7600139202964233575;
                var_40 = (min(var_40, ((max((arr_39 [i_10] [i_10] [i_12] [i_12]), var_17)))));
                arr_42 [5] [5] = arr_41 [i_10] [16] [1] [1];
                var_41 *= (arr_31 [18]);
                var_42 = var_2;
            }
            for (int i_13 = 3; i_13 < 20;i_13 += 1)
            {
                var_43 = (max(var_43, var_4));
                var_44 *= var_13;
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                var_45 = (min(var_45, (~18446744073709551609)));
                var_46 = ((!(arr_31 [i_10])));
            }
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                var_47 = (((((var_2 ? -103 : (arr_44 [i_10] [i_10] [i_14] [i_16 + 2])))) ? (((arr_44 [i_10] [i_10] [6] [3]) / (arr_44 [i_10] [i_14] [i_16] [i_16 - 1]))) : (((arr_44 [i_10] [1] [1] [i_16 + 3]) ? 102 : var_1))));
                var_48 = (((!var_13) ? 10 : (((min(653792952, (arr_43 [1] [i_14] [21]))) ^ ((((arr_47 [i_10] [i_14]) + var_12)))))));
                var_49 |= (max(15928532250618122768, 238));
                arr_55 [8] [7] [19] [i_16] = ((+((max((arr_53 [i_16 + 2] [i_16 + 2] [i_16 + 2]), (arr_44 [i_16 + 3] [i_16 + 2] [i_16 + 2] [i_16]))))));
            }
            /* vectorizable */
            for (int i_17 = 3; i_17 < 21;i_17 += 1)
            {

                for (int i_18 = 1; i_18 < 21;i_18 += 1)
                {
                    arr_61 [i_10] [15] [i_17] [i_10] [i_18] = (((arr_52 [i_10] [i_14] [i_17 - 2]) ? (arr_32 [i_17 - 3]) : (arr_49 [i_14] [i_17])));

                    for (int i_19 = 3; i_19 < 21;i_19 += 1)
                    {
                        arr_65 [i_14] [1] [i_19] = var_4;
                        var_50 = var_5;
                        arr_66 [i_19] = var_5;
                        var_51 = (((arr_54 [i_17 + 1] [i_18 - 1] [i_18 - 1] [i_19 + 1]) * (arr_54 [i_17 + 1] [i_18 - 1] [i_18 - 1] [i_19 + 1])));
                    }
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        var_52 = ((~(((arr_32 [13]) + var_13))));
                        var_53 = (min(var_53, ((((arr_63 [i_10] [i_10] [i_10] [21] [i_10] [i_20]) ? ((((arr_47 [i_14] [i_14]) || (arr_67 [i_14])))) : var_14)))));
                        arr_70 [17] [i_14] [i_17] [i_18 + 1] [i_20] = var_10;
                    }
                }
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    var_54 -= (((arr_71 [i_17 + 1] [i_17 - 1] [i_17 - 1] [19] [i_21] [i_21]) << (var_7 - 26174)));
                    arr_73 [i_14] [i_14] = ((-(36537 < var_18)));
                }
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_55 = (min(var_55, (arr_39 [i_10] [i_14] [i_17] [i_22])));
                    var_56 = (arr_48 [i_14] [1] [i_22]);
                }
                var_57 = (((arr_72 [i_10] [i_10] [10] [i_10]) ? var_9 : -140));
                arr_76 [i_10] = (arr_32 [20]);
            }
            var_58 ^= var_8;
            var_59 = (((18446744073709551615 || 28988) / (max(1466133545, 1))));
            var_60 = (max(var_60, ((max(var_1, (((arr_53 [i_10] [i_14] [i_14]) ? 686224248105621253 : (var_14 / 3206203276558028871))))))));
        }
        arr_77 [12] = ((~((-(arr_67 [i_10])))));
    }
    var_61 = var_17;
    var_62 = var_2;
    #pragma endscop
}
