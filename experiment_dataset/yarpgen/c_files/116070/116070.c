/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max(var_4, (min(var_7, var_5)))), var_10));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 ^= (((arr_0 [i_0 + 1] [i_1]) >> (var_8 - 1850488570)));
            arr_5 [i_0] [i_0] = (((arr_1 [i_0 - 1] [i_1]) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0] [i_1])));
        }
        var_17 = (((var_14 ? (arr_4 [i_0]) : var_14)) + (arr_4 [i_0 + 2]));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (arr_3 [i_0 - 1] [i_0 + 2]);
            var_19 ^= var_13;
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_20 = ((((((0 ? 0 : 2191188958277473936)) << (((arr_6 [i_3] [i_3] [i_3]) - 10026)))) == (((var_11 ? ((var_5 ? (arr_14 [i_3] [i_4]) : (arr_4 [i_3]))) : (arr_8 [i_4 + 4]))))));
            var_21 = (min(0, 154));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_22 = (((arr_3 [9] [i_5 + 3]) ? var_1 : (arr_3 [i_5 - 1] [i_6 - 1])));
                var_23 = (arr_8 [i_3]);
                var_24 *= (((arr_8 [i_3]) || (arr_14 [i_3] [i_6 + 1])));
            }
            var_25 = var_14;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_26 = ((0 + (((arr_1 [i_7] [i_3]) ? 187 : 16))));
            arr_23 [i_3] [i_3] [i_3] = (((arr_6 [i_7 + 4] [i_7 + 4] [i_7 + 1]) >> (var_4 - 6434)));
            arr_24 [i_3] [1] = var_6;
            var_27 = (((arr_16 [i_7 + 4] [0] [i_7]) | (arr_0 [i_7 + 1] [i_7])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_28 = (arr_6 [i_3] [i_8 + 1] [i_9]);
                arr_31 [i_8] [i_8 + 1] [i_9] [i_3] = (arr_12 [i_3] [i_8] [i_3]);
                var_29 -= ((0 << (44502 - 44486)));
            }
            arr_32 [i_3] [i_8 + 1] [i_8] = var_4;
            arr_33 [i_8] = (((arr_15 [i_8] [i_8 + 3] [i_8 + 4]) + (-5 - 0)));
        }

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_30 *= ((((min(0, 30554))) ? var_11 : var_10));

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    arr_42 [i_11] [i_10] [i_11] [i_12] [i_11] = (max(((((((arr_28 [i_10] [i_11]) + var_3))) ? (min(1899358473543077392, 0)) : (max((arr_7 [i_12] [i_10] [i_3]), var_9)))), (min((min(var_14, (arr_7 [i_3] [i_3] [15]))), (((var_11 ? var_2 : (arr_13 [i_11] [i_10]))))))));

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_3] [i_11] [i_11] = ((arr_34 [i_3]) ? (arr_34 [i_12]) : var_3);
                        var_31 = ((((var_12 % (arr_27 [i_11]))) == var_9));
                        var_32 = (arr_8 [i_3]);
                        arr_48 [i_11] [i_10] [i_10] [i_10] [i_10] = (arr_39 [i_13] [i_13] [i_11] [i_12]);
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        arr_51 [i_3] [i_3] [i_10] [i_10] [i_3] [i_11] [i_14] = ((var_13 >= ((max(1463601314, 4)))));
                        arr_52 [i_3] [i_10] [i_11] [i_11] [i_12] [i_11] = var_11;
                        var_33 = (((((arr_46 [i_14] [i_12] [i_11]) + 2147483647)) >> (var_2 - 29)));
                        arr_53 [0] [i_11] = max((arr_36 [i_3] [i_10]), (max((arr_36 [i_3] [i_10]), (arr_36 [i_3] [i_10]))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_34 = ((var_7 && (arr_8 [i_3])));
                        var_35 -= (6 > -708067896);
                        var_36 = (arr_49 [i_3] [i_3] [i_15] [i_12] [i_3] [i_11]);
                        var_37 = (arr_8 [i_10]);
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_38 |= (((((arr_1 [i_10] [i_17]) ? (arr_9 [i_10]) : (arr_25 [8] [i_10])))) && (var_9 << var_2));
                        var_39 = (max(var_39, var_9));
                        var_40 = (21033 + 44511);
                        var_41 |= (arr_2 [i_3] [i_3] [i_3]);
                    }
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        var_42 -= ((arr_58 [2] [2] [2] [i_18 - 1] [i_18 - 1] [i_3] [2]) ? (arr_58 [0] [0] [i_11] [i_18 - 1] [i_18] [i_11] [i_16]) : (arr_58 [12] [i_3] [i_11] [i_18 - 1] [10] [i_10] [i_11]));
                        arr_63 [i_11] [i_11] = ((var_10 / (arr_18 [i_3] [1] [i_18 - 1] [i_16])));
                        var_43 = (var_6 - var_5);
                    }
                    var_44 = (arr_54 [i_3] [i_3] [i_3] [i_11]);

                    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
                    {
                        arr_66 [i_11] [i_11] [i_10] [i_11] [i_11] [i_16] [i_11] = (((arr_22 [i_3] [i_3]) ^ var_0));
                        arr_67 [i_10] [i_10] [i_11] [i_16] [i_10] [i_11] = var_3;
                        arr_68 [i_11] = var_2;
                        var_45 = (arr_8 [i_10]);
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
                    {
                        var_46 = var_5;
                        var_47 = ((234 ? 3173 : 4854));
                    }
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {
                    var_48 = var_9;

                    for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
                    {
                        arr_76 [i_11] [i_11] [i_11] [i_21] [i_22] = var_11;
                        var_49 = (arr_56 [i_10] [i_10] [i_21] [i_22]);
                    }
                    for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
                    {
                        arr_80 [i_3] [i_3] [i_11] [i_3] [i_3] = (((arr_28 [i_10] [1]) >> (var_2 - 17)));
                        var_50 = (((arr_22 [i_3] [i_3]) >= (arr_22 [i_3] [i_3])));
                        var_51 = ((arr_18 [i_23] [i_11] [i_10] [i_3]) ? (var_0 >> var_0) : (arr_60 [i_11] [i_10] [i_10]));
                    }
                    for (int i_24 = 2; i_24 < 14;i_24 += 1)
                    {
                        var_52 = (((arr_41 [i_24 + 1] [i_24 + 1]) ? (arr_19 [i_24 - 2] [i_24 + 1] [i_24 - 2]) : (arr_19 [i_24 - 2] [i_24 - 1] [i_24 - 1])));
                        var_53 = (arr_4 [i_3]);
                    }
                    var_54 = (((arr_9 [i_11]) ? (arr_57 [i_10] [i_11] [i_10] [i_10]) : var_7));
                    arr_83 [i_3] [i_11] = (arr_3 [i_21] [i_10]);
                }

                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 15;i_26 += 1)
                    {
                        arr_89 [i_3] [i_3] [i_3] [i_11] [i_3] [i_3] = (11019 % 18407674873562048399);
                        arr_90 [i_3] [i_10] [i_3] [2] [i_11] [i_11] [i_11] = ((((min((arr_39 [i_3] [i_10] [i_3] [i_10]), (arr_16 [i_10] [i_11] [i_26])))) != var_6));
                        var_55 = arr_25 [i_3] [i_26];
                    }

                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        var_56 &= (arr_13 [i_25] [8]);
                        arr_94 [i_11] [i_11] = var_13;
                        arr_95 [i_27] [i_10] [i_11] [i_11] [i_27] [11] = (arr_11 [i_25]);
                    }
                    /* vectorizable */
                    for (int i_28 = 1; i_28 < 14;i_28 += 1)
                    {
                        arr_98 [i_3] [i_11] [i_11] [i_25] [i_28] = var_4;
                        arr_99 [i_25] [i_25] [i_25] [i_25] [i_11] [i_25] [i_25] = var_3;
                        var_57 = (arr_71 [i_10] [i_11] [i_25] [i_11]);
                    }
                    for (int i_29 = 4; i_29 < 11;i_29 += 1)
                    {
                        var_58 = (min(var_58, (((var_3 ? ((min(((5983853285510071509 ? -843087378 : 0)), ((var_1 ? (arr_74 [i_29] [i_25] [i_3] [i_10] [i_29]) : var_2))))) : (max((max(var_6, var_14)), var_7)))))));
                        var_59 = var_12;
                        var_60 = (max((arr_86 [i_29] [i_29] [i_29 + 2] [i_29] [i_29 - 4] [i_29 + 3]), (((var_14 || (arr_86 [i_10] [2] [i_29 + 4] [3] [i_29 - 2] [i_29 - 1]))))));
                        arr_102 [i_29] [i_29] [i_11] [13] [i_29] [i_29] = var_5;
                    }
                }
            }
            var_61 = (max(6, 44363));
            var_62 = ((((((arr_88 [i_3] [i_10] [i_3] [i_3] [i_10] [i_3]) ^ (max(var_12, (arr_14 [i_3] [i_10])))))) ? (arr_15 [i_3] [i_3] [i_10]) : var_9));
        }
    }
    #pragma endscop
}
