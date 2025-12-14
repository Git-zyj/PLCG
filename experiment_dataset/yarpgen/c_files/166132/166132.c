/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_6) <= var_16));
    var_20 -= var_0;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_21 |= var_11;
            arr_5 [i_0] [13] = ((((((max(var_17, var_16))) ? (var_9 > var_9) : (var_3 / var_0))) << (((max(var_5, var_8)) - 1323285333856821225))));
            arr_6 [i_0 + 3] [i_1] = (max(((var_16 ? var_6 : var_1)), (var_10 & var_18)));
        }
        var_22 = (max(var_22, ((((((var_7 ? var_6 : var_8))) ? (!var_13) : (var_10 | var_7))))));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_11 [10] [i_2] = (((!var_1) < var_7));

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_18 [i_2] [i_2] = (((!var_17) <= var_16));
                    var_23 = ((((min(var_2, var_1))) == (((max(var_16, var_13))))));
                    arr_19 [i_2] = ((!(var_9 * var_13)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_24 = ((var_3 < ((var_8 ? var_3 : var_16))));
                        arr_26 [i_0] [i_0] [i_3] [i_2] [i_6] = ((var_17 ? var_18 : var_18));
                    }
                    var_25 = (max(var_25, (((var_0 ? var_5 : var_0)))));
                }

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_30 [i_2] [i_2 - 1] [i_2 - 1] [i_7] [i_7] = (((((var_5 ? var_13 : var_7))) && ((max(var_4, var_18)))));
                    var_26 = ((((var_9 ? var_17 : var_1)) * ((min(var_6, var_8)))));
                    var_27 -= (((var_1 < var_18) == var_16));
                    arr_31 [i_0] [i_0] [i_2] [i_0 + 3] = (!var_3);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        var_28 = (var_13 | var_13);
                        arr_36 [i_0] [i_8] [i_2] [i_8] [i_9] [i_8] = ((var_2 ? var_14 : var_6));
                    }

                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        arr_39 [i_0] [i_2] [i_0 - 1] [i_0] [i_0 + 2] = ((((((((var_1 ? var_18 : var_17))) <= var_0))) / var_13));
                        var_29 ^= (((var_7 ? var_2 : var_7)));
                    }
                    var_30 = (max(var_30, ((((var_16 < var_1) & ((var_7 % ((max(var_9, var_8))))))))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_31 = (max(var_31, var_3));
                        var_32 = (max(var_32, (((((((!var_1) ? var_17 : (var_12 == var_14)))) | (min((var_6 * var_14), var_2)))))));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_48 [i_2] [i_2] [i_2] = var_3;
                        arr_49 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_2] [0] = ((var_10 ? (((max(var_0, var_9)) * var_11)) : var_9));
                        var_33 = ((max(var_18, var_6)));
                        var_34 ^= ((((max(var_13, var_9))) < (var_0 <= var_9)));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_53 [i_2] [i_2] = ((var_9 + (var_6 <= var_8)));
                        arr_54 [i_2] [i_0] [i_2] [i_3] [i_8] [i_13] [i_13] = (var_1 <= var_5);
                        var_35 |= ((var_10 ? var_14 : (var_18 | var_17)));
                    }
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        var_36 = (((~var_1) ? (var_1 + var_17) : ((((var_9 * var_8) ? var_2 : (var_14 != var_9))))));
                        var_37 = (max(var_37, (((var_16 ? var_11 : var_14)))));
                    }
                }
                for (int i_15 = 1; i_15 < 14;i_15 += 1)
                {
                    var_38 ^= ((((((((var_6 ? var_2 : var_13)) < var_11)))) ^ ((var_3 >> (var_5 - 1323285333856821229)))));
                    var_39 = (((min((var_4 > var_8), var_7)) == (((var_5 <= (var_11 << var_16))))));
                    var_40 = (max((((var_9 ? (max(var_8, var_2)) : (min(var_10, var_7))))), ((var_12 ? (var_16 / var_15) : ((var_0 ? var_4 : var_18))))));
                    var_41 ^= ((((max(var_9, var_14))) + (((var_18 + (var_9 - var_2))))));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_65 [i_2] = var_15;
                        arr_66 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3] = (var_11 > (~var_2));
                        var_42 |= ((((var_5 ? var_0 : var_15)) & var_5));
                        var_43 = (((var_1 < var_12) ? var_18 : (var_13 / var_1)));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        arr_70 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_2] = (((var_4 * var_18) | var_15));
                        var_44 -= (var_6 == -var_9);
                    }
                }
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
            {
                var_45 = var_17;

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_46 = var_15;
                    var_47 = (min(var_47, ((((var_17 == var_12) ? ((max(var_15, var_13))) : (((max(var_15, var_1)) | var_7)))))));
                }
            }

            for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
            {
                arr_78 [i_20] [i_2] [i_2] [i_0 + 2] = ((((var_18 ? var_7 : var_5)) == (var_9 != var_6)));

                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    var_48 = (((((var_6 == var_6) ? (~var_4) : var_5)) < var_4));
                    arr_82 [4] [i_20] [i_20] |= (((var_1 ^ var_12) >> (((max(var_7, var_3)) - 3698190744))));
                }
                var_49 = (((var_1 < var_3) == ((max(var_10, var_9)))));
                var_50 ^= (min((var_15 > var_15), ((var_15 ? ((min(var_13, var_10))) : (!var_11)))));
            }
            for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
            {

                for (int i_23 = 2; i_23 < 14;i_23 += 1)
                {
                    arr_90 [i_0] [i_2] [i_2] [i_23 + 1] = (var_12 < var_9);
                    arr_91 [i_0 + 2] [i_22] [i_2] [11] = (((((var_9 | (max(var_3, var_10))))) * (var_14 ^ var_6)));
                    var_51 = -var_9;
                }
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    var_52 = (max(var_15, (((((var_9 ? var_18 : var_14))) ? ((min(var_11, var_1))) : var_12))));
                    arr_95 [i_2] = min((((var_6 + 2147483647) >> ((((var_3 ? var_14 : var_11)) - 14032303178901761633)))), ((((~var_6) != var_6))));
                }
                var_53 = ((((max((min(var_3, var_8)), var_10))) ? (((((min(var_17, var_10))) << ((var_10 << (var_1 - 2710918776087069555)))))) : var_4));

                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {

                    for (int i_26 = 3; i_26 < 13;i_26 += 1)
                    {
                        arr_102 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_2] = var_10;
                        var_54 = ((((max(var_9, var_1) >> (((var_2 | var_0) + 2215000327768260774))))));
                        var_55 = ((max(var_17, var_0)));
                        var_56 -= var_17;
                    }

                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        arr_105 [i_0] [i_2] [i_0] [i_0] [i_2] = (((min((var_6 - var_5), var_8)) + ((min(var_17, ((var_10 ? var_11 : var_13)))))));
                        arr_106 [i_0] [i_27] [i_0] [i_2] [i_27] [i_0 + 1] [1] = (min(((((var_10 ? var_6 : var_5)) / (var_2 & var_12))), (var_12 != var_12)));
                        arr_107 [i_2 + 3] [i_2] [10] [i_2] [i_2] = (((var_6 <= var_3) ? (var_1 + var_11) : (((((max(var_15, var_9))) | (!var_6))))));
                        arr_108 [i_0] [i_2] = (max((max(var_7, var_10)), (var_6 / var_8)));
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 15;i_28 += 1)
                    {
                        var_57 ^= (((var_0 == var_11) < ((var_18 >> (var_6 + 816444811)))));
                        var_58 = var_8;
                        var_59 ^= (var_15 == var_15);
                        var_60 = (var_8 + var_9);
                    }
                    /* vectorizable */
                    for (int i_29 = 0; i_29 < 15;i_29 += 1)
                    {
                        var_61 -= (~var_13);
                        arr_114 [i_2] [i_2] [i_2 + 1] = var_6;
                    }
                    var_62 = var_0;
                }

                for (int i_30 = 0; i_30 < 15;i_30 += 1)
                {

                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 15;i_31 += 1)
                    {
                        var_63 -= (var_15 - var_16);
                        var_64 |= var_5;
                        var_65 |= ((var_3 ? (~var_12) : var_12));
                        arr_121 [1] [10] [1] [i_2] [i_31] = ((var_4 ? var_9 : var_11));
                    }
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        var_66 = (((var_14 | var_15) * ((((max(var_2, var_16)))))));
                        var_67 += ((((var_14 ? var_10 : var_7))) - (((((var_11 ? var_4 : var_12))) ? var_6 : ((min(var_5, var_3))))));
                    }

                    for (int i_33 = 1; i_33 < 14;i_33 += 1)
                    {
                        var_68 = (min(((((max(var_11, var_5))) ? ((min(var_16, var_12))) : var_1)), ((((min(var_7, var_10))) & var_5))));
                        var_69 = var_4;
                    }

                    for (int i_34 = 0; i_34 < 15;i_34 += 1)
                    {
                        var_70 = (min(var_70, ((((((max(var_18, var_3)) - (var_2 * var_10))) & (max((max(var_3, var_13)), var_9)))))));
                        var_71 = (min(((max(var_18, var_18))), (var_7 ^ var_2)));
                    }
                }
                arr_128 [i_2] [i_2] [i_2] = (((((var_18 ? var_14 : var_15)) << (var_12 - 1219914056))));
            }
        }
        var_72 = (max(var_72, ((max((var_12 ^ var_18), ((((max(var_17, var_14))) ? (min(var_10, var_14)) : (var_7 + var_6))))))));
    }
    for (int i_35 = 0; i_35 < 20;i_35 += 1)
    {
        var_73 = ((((((var_5 ? var_11 : var_5)) == var_11)) ? ((max(((min(var_13, var_13))), (var_11 - var_10)))) : ((((min(var_5, var_11))) ? var_16 : var_4))));
        var_74 = (((var_3 || var_5) / var_4));

        for (int i_36 = 0; i_36 < 20;i_36 += 1)
        {
            arr_135 [i_36] [i_36] [i_35] = (min((max((~var_11), var_14)), var_10));
            arr_136 [i_36] [1] [1] = (((max(((var_8 ? var_8 : var_3)), var_10)) > (((var_18 << (((var_5 + var_13) - 1323285333856821359)))))));
        }
    }

    for (int i_37 = 2; i_37 < 13;i_37 += 1)
    {
        var_75 = (max(var_75, ((((((var_3 ? var_15 : var_2))) ? (((var_6 ? var_17 : var_16))) : ((var_3 ? var_14 : var_8)))))));
        var_76 = (max(var_76, ((((var_4 * var_9) ? ((var_5 ? var_7 : var_13)) : (var_10 ^ var_6))))));
    }
    var_77 |= (min(var_13, ((((((var_5 ? var_7 : var_12)) + 2147483647)) << (var_17 == var_12)))));
    #pragma endscop
}
