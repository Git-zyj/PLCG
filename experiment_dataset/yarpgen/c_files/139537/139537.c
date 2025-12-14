/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((max((min(37882, 18446744073709551615)), ((var_14 ? var_1 : -32757))))) || -1911910414));
    var_17 = (min(var_17, var_1));
    var_18 = ((var_15 ? (((37869 << (((-4703813924995690192 + 4703813924995690208) - 5))))) : (max(127, 423745973))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((var_1 ? (((!(((37882 ? -127 : 8)))))) : ((max(var_13, var_12)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 -= (((((var_11 ? (max(var_3, var_1)) : (((~(arr_1 [18]))))))) ? (((8 < ((var_4 ? (arr_4 [8] [i_2 + 1]) : var_12))))) : (max(-676565168, (arr_9 [i_0 - 1])))));
                    var_20 = var_14;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = (min(var_21, var_7));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] = 8;
                            var_22 = (min((var_15 + var_14), (max(423745973, 11491381869086087232))));
                        }
                    }
                }
            }
        }
        var_23 = (((arr_4 [i_0] [i_0]) / (((((arr_9 [i_0]) != (((!(arr_15 [i_0] [i_0] [i_0 + 1]))))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_24 = ((((((arr_7 [i_5] [i_5 - 1] [i_5]) <= var_6))) << (((arr_15 [i_5] [i_5] [i_5]) ? (arr_0 [i_5]) : -32765))));
        var_25 = ((var_6 - ((var_12 ? var_9 : var_5))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_26 = ((((!(arr_19 [i_6 - 1]))) ? (((arr_4 [i_6 + 1] [i_6 - 1]) ? (arr_19 [i_6 + 2]) : (arr_19 [i_6 + 2]))) : (max((arr_19 [i_6 + 2]), (arr_19 [i_6 + 1])))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_26 [i_6] [i_7] = var_12;
            var_27 = ((!(arr_7 [i_6] [i_6] [i_6])));
        }
        var_28 = ((!((!(((3306 << (((arr_11 [i_6] [i_6]) - 65453)))))))));
        arr_27 [i_6] = ((((!((max(37882, (arr_14 [i_6] [i_6] [1] [i_6] [i_6 + 2] [i_6] [i_6])))))) || ((!(6 / 27672)))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_31 [i_6] = (((((2147483647 ? (arr_12 [i_8] [i_8] [i_8] [i_6]) : -22))) || (arr_17 [i_6])));
            var_29 -= ((((((arr_13 [i_6 + 2] [i_6 + 2] [i_8] [i_8] [i_6 + 2] [i_8]) ? -125 : (arr_2 [i_8])))) ? var_9 : (var_5 && var_13)));
            var_30 = ((!(arr_10 [i_6 + 2] [i_8] [i_8] [i_6])));

            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_31 = (((!var_11) ? (!127) : (arr_21 [i_6])));

                for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_32 = (arr_14 [i_10] [i_9] [i_9] [14] [5] [i_8] [i_6 + 2]);
                    arr_37 [i_6] [i_6] [i_6] [i_10] = (arr_2 [i_6]);
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_33 = ((~(arr_17 [i_6])));
                    var_34 = ((421963299 ? 3306 : var_13));
                    arr_41 [i_11] [i_6] [i_9] = (arr_11 [i_11] [i_11]);
                }
                arr_42 [i_6] [i_8] [i_6] = var_1;
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_35 = (!var_8);
                            var_36 = (min(var_36, (((!(arr_39 [i_12 + 3] [i_12 + 3] [i_12 + 1] [i_12 + 3] [i_12 + 3]))))));
                            var_37 = (max(var_37, var_9));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                var_38 = (min(var_38, (arr_51 [3] [i_8] [i_8] [i_14])));
                var_39 |= (arr_10 [i_6] [i_6] [i_6] [i_8]);

                for (int i_15 = 1; i_15 < 22;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_40 = ((arr_19 [i_6 + 1]) | (arr_23 [i_6]));
                        var_41 = 16983;
                        var_42 |= var_8;
                    }
                    var_43 = (max(var_43, 16395599903201524309));
                    arr_57 [i_6] [i_8] [i_6] [i_6 + 2] = (-4 / 65529);

                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_44 = (arr_0 [i_6 - 1]);
                        var_45 = (max(var_45, ((((arr_59 [i_6] [i_6]) <= -15)))));
                        var_46 -= 3087583348;
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                    {
                        var_47 = (max(var_47, (var_15 || var_6)));
                        arr_62 [i_6] = (!18861);
                        arr_63 [i_6] [i_8] = (((arr_17 [i_6]) ? (arr_17 [i_6]) : var_6));
                        var_48 = (((arr_19 [i_6 - 1]) ^ (var_13 / var_5)));
                        var_49 -= var_8;
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                    {
                        arr_68 [i_19] [i_6] [i_15] [i_14] [i_8] [i_6] [i_6 + 1] = (!var_12);
                        var_50 = (max(var_50, var_3));
                        var_51 = (min(var_51, (arr_8 [i_8] [i_15 + 1])));
                        var_52 = (arr_17 [i_6]);
                    }
                }
                for (int i_20 = 1; i_20 < 22;i_20 += 1) /* same iter space */
                {
                    var_53 = (arr_2 [i_6 - 1]);
                    var_54 = (((!var_4) || (((-120 ? var_1 : (arr_61 [8] [i_8] [i_14] [i_20 + 1] [i_20] [i_8]))))));
                    arr_72 [i_6] [i_6] [i_14] [i_6] [i_20 + 1] = ((!(arr_9 [i_6 + 2])));
                    var_55 = (((var_11 || 2147483645) <= (((!(arr_45 [i_6] [i_8] [i_8] [i_20]))))));
                }
                for (int i_21 = 1; i_21 < 22;i_21 += 1) /* same iter space */
                {
                    var_56 = (((arr_39 [i_6 - 1] [i_8] [i_14] [i_21 - 1] [i_21 + 1]) ? (arr_39 [i_6 + 1] [i_8] [i_6] [i_6 + 1] [i_6 + 1]) : var_5));
                    var_57 = ((27908 <= (arr_61 [i_6 - 1] [i_8] [i_8] [i_21] [i_8] [i_21 - 1])));
                    var_58 = (min(var_58, ((((arr_21 [i_8]) ? (arr_33 [i_21 + 1] [i_21] [6] [i_21]) : (((((arr_32 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_14]) >= var_13)))))))));

                    for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
                    {
                        var_59 = var_12;
                        var_60 -= var_1;
                        arr_78 [i_6] [i_8] [i_14] [i_14] [i_22] = ((var_6 ? (arr_69 [i_6]) : (arr_25 [i_6] [i_8] [i_21 + 1])));
                    }
                    for (int i_23 = 0; i_23 < 23;i_23 += 1) /* same iter space */
                    {
                        arr_82 [i_6] [i_6] [1] [i_21] = ((8 ? (8 == 423745990) : 3871221322));
                        var_61 = (min(var_61, (!27642)));
                    }
                    for (int i_24 = 0; i_24 < 23;i_24 += 1) /* same iter space */
                    {
                        arr_85 [i_24] [i_24] [i_6] [i_24] [i_24] = 8;
                        var_62 = var_8;
                        var_63 = ((!((((arr_25 [i_6] [i_6] [i_6]) ? var_11 : 10906)))));
                        arr_86 [i_6] [3] [i_8] [i_14] [i_21 - 1] [i_24] = (((!5743) < 27));
                    }
                }
                var_64 = (3871221312 ^ -3773);
            }
        }
    }
    for (int i_25 = 1; i_25 < 21;i_25 += 1) /* same iter space */
    {
        var_65 -= ((((max(255, -34))) ? var_12 : (arr_34 [i_25 + 1] [i_25] [10] [i_25 + 1] [10] [17])));
        var_66 = (!var_11);
        var_67 = (!3131273290);
        var_68 = ((!((var_6 <= ((27 ? var_10 : 27685))))));
    }
    #pragma endscop
}
