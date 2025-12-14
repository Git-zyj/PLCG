/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = ((var_2 ? var_11 : (arr_1 [i_0 - 1])));
        arr_2 [i_0] = (!2678189583555795604);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(((((-(-32767 - 1))))), var_7));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_13 = (((min(var_0, var_5)) > ((((1306399816 ? (-2147483647 - 1) : var_10))))));
                        var_14 = (((-5957155726088941930 + var_8) == (~var_6)));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (min(var_11, (((var_4 || 0) & ((var_10 & (arr_11 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1])))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_15 = (min(var_15, (((((arr_14 [i_5 + 4]) << (-14900 + 14904)))))));
        var_16 = (arr_11 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_18 [i_5 - 1] [i_5 - 1] = ((~((var_10 ? -2902216463042147795 : (-2147483647 - 1)))));
        var_17 = (max(var_17, ((((((var_7 ? (arr_10 [i_5] [i_5] [i_5]) : 25680))) ? 0 : (((var_6 ? (arr_3 [i_5]) : var_11))))))));
        arr_19 [i_5 + 1] |= (arr_16 [i_5]);
    }
    var_18 = (!var_10);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_19 = (min(var_5, var_4));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                arr_37 [i_6] [i_6] [i_6] = (arr_10 [i_6] [i_8] [i_10]);
                                var_20 ^= (((var_6 | var_0) & (arr_31 [i_6] [i_6])));
                                var_21 = (arr_22 [i_6] [i_9] [i_10]);
                                arr_38 [i_6] [i_7] [i_8] [i_9] [i_10] = (arr_11 [i_10] [i_6] [i_8] [i_7] [i_6] [i_6]);
                            }
                            arr_39 [i_6] [i_7] [i_6] [i_9] = -936816362;
                            arr_40 [i_6] = (min(((!(arr_26 [i_9]))), ((!(arr_9 [i_7] [i_8] [i_9])))));

                            for (int i_11 = 3; i_11 < 10;i_11 += 1)
                            {
                                arr_43 [i_6] [i_6] [i_8] [i_11] [i_9] [i_9] [i_11] = (!-var_5);
                                arr_44 [i_11] [i_9] [i_11] [i_11] [i_6] [i_6] = (-(-19 ^ 0));
                                arr_45 [i_6] [i_7] [i_8] [i_9] [i_11] = var_1;
                            }
                        }
                    }
                }
                var_22 = (((((1429123228 ? 34038 : 1))) >= 65520));
                var_23 |= var_7;

                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_48 [i_6] [i_6] = 57848;
                    var_24 ^= (((((var_1 << ((((-(arr_34 [i_6] [4] [i_7] [i_7] [i_7] [i_12]))) + 44))))) && (((-(arr_29 [i_6]))))));

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_25 &= (((((var_2 <= var_1) ? ((min(var_3, var_9))) : var_10)) | ((1 ? (var_0 || var_8) : (~var_3)))));
                        arr_51 [i_13] [i_6] [i_7] [i_6] &= (arr_28 [i_6] [i_7] [i_12] [i_13]);

                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 10;i_14 += 1)
                        {
                            var_26 = (!45);
                            var_27 = var_8;
                            arr_54 [i_14] [i_14] [i_14] [i_7] [i_6] = 936816361;
                            var_28 &= (var_3 && var_4);
                        }
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_63 [i_6] [i_7] [i_7] [i_12] [i_15] [i_15] [i_16] = (((-2147483647 - 1) ? (arr_20 [i_7]) : var_4));
                            arr_64 [i_12] |= var_8;
                            var_29 |= var_4;
                            var_30 *= (!var_9);
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_31 &= (arr_65 [i_17] [i_15] [i_7] [i_7] [i_6]);
                            var_32 = (max(var_32, (((((-2147483629 ? (arr_5 [i_12]) : var_10)) >> (var_7 - 3736644519))))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            arr_70 [i_6] [i_7] [i_12] [i_18] [i_18] = (arr_47 [i_6] [i_6] [i_6]);
                            var_33 ^= -364830690;
                        }
                        arr_71 [i_6] [i_6] [i_7] [i_12] [i_12] [i_15] = ((12007045493990736759 ? var_8 : (arr_34 [i_6] [i_7] [i_12] [i_15] [i_15] [2])));
                    }
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_34 = var_8;
                        var_35 = (min(var_0, (((((max(var_9, var_9))) + var_11)))));
                        arr_74 [i_6] [i_6] [i_6] [i_6] = (-32761 % 897752302);
                    }
                }
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {

                    for (int i_21 = 3; i_21 < 12;i_21 += 1)
                    {
                        var_36 = (max(var_36, (((-((var_2 ? var_8 : (((-936816382 == (arr_33 [i_6] [i_21 - 3] [i_20] [i_21 - 3] [i_7] [i_20])))))))))));
                        arr_79 [1] [i_21] = min((((min((arr_69 [i_6] [i_21] [i_6]), (-127 - 1))))), var_2);
                        arr_80 [i_6] [i_21] [i_6] [i_6] = var_9;
                        var_37 = (((-1180153550249831120 ^ (arr_33 [i_21 - 1] [i_20] [i_20] [i_20] [0] [i_6]))));
                        var_38 = (min(var_38, ((((arr_53 [i_6] [i_7] [i_20] [i_21] [i_21]) ? (((0 ? (arr_34 [i_6] [i_6] [i_7] [i_20] [i_20] [i_21]) : var_7))) : -var_1)))));
                    }
                    for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
                    {
                        var_39 *= ((min(var_3, -var_3)));
                        arr_84 [i_6] [i_7] [i_20] [i_22] = ((!((((!31497) ? (min(var_4, var_10)) : 64971893)))));
                        var_40 = ((((arr_47 [i_6] [i_7] [i_22]) ? (arr_47 [i_6] [i_7] [i_6]) : (arr_47 [i_6] [i_7] [6]))) + ((-(var_11 ^ var_10))));
                        arr_85 [i_6] [i_7] [i_20] [i_7] &= (min(((var_1 ? var_6 : (arr_41 [i_6] [i_7] [i_7] [i_20] [i_6]))), (min(1676136372, (arr_61 [i_6] [i_7] [i_20] [i_7])))));
                    }
                    for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
                    {
                        arr_89 [1] [i_7] [i_7] [i_20] [i_20] [i_23] = (((((34020 | (arr_60 [i_6] [i_6] [i_6])))) ? ((min((arr_30 [i_7] [i_23] [i_20] [i_20] [i_7] [i_6]), var_3))) : var_3));
                        arr_90 [i_23] [i_20] [i_7] [i_6] [i_6] = (((var_10 | (arr_53 [i_23] [i_23] [i_20] [i_7] [i_6]))));
                    }
                    var_41 = (max((((((-2147483647 - 1) ? -936816382 : 7661)))), 1211994782));
                }
                /* vectorizable */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
                    {

                        for (int i_26 = 4; i_26 < 10;i_26 += 1)
                        {
                            var_42 |= (((var_3 || var_2) || var_9));
                            var_43 = ((var_6 > (arr_93 [i_26 - 2] [i_26 + 1])));
                            var_44 = var_0;
                        }
                        for (int i_27 = 0; i_27 < 13;i_27 += 1)
                        {
                            var_45 = (~var_7);
                            var_46 = var_8;
                        }
                        for (int i_28 = 0; i_28 < 13;i_28 += 1)
                        {
                            var_47 = ((var_10 ? (var_3 == var_0) : ((~(arr_9 [i_6] [i_6] [i_6])))));
                            var_48 *= (((((arr_3 [i_6]) ? (arr_32 [i_6] [i_24] [i_25] [i_28]) : 2093420708)) >= (arr_50 [i_7] [i_7] [i_24] [i_7])));
                        }
                        for (int i_29 = 0; i_29 < 13;i_29 += 1)
                        {
                            var_49 = (arr_94 [i_6] [i_7] [i_24] [i_25] [i_6]);
                            var_50 &= -24045;
                            arr_106 [i_6] [i_7] [i_6] [i_7] [i_29] = (var_8 & var_0);
                            arr_107 [i_6] [i_24] = (-(-32767 - 1));
                        }

                        for (int i_30 = 0; i_30 < 13;i_30 += 1)
                        {
                            var_51 = (!var_3);
                            arr_111 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = 33;
                            var_52 = (~var_2);
                            arr_112 [i_6] [i_7] [i_24] [i_30] [i_24] = var_7;
                        }
                    }
                    for (int i_31 = 0; i_31 < 13;i_31 += 1) /* same iter space */
                    {
                        var_53 = var_0;
                        var_54 = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_32 = 4; i_32 < 11;i_32 += 1)
                    {
                        for (int i_33 = 4; i_33 < 9;i_33 += 1)
                        {
                            {
                                var_55 = ((-(arr_28 [i_32 - 4] [i_33 + 2] [i_33] [i_33])));
                                arr_120 [i_33] [i_7] [i_7] [i_32 - 3] [i_33 + 3] = (((((1 ? (arr_87 [i_6] [i_24] [i_7] [i_6]) : var_8))) ? var_8 : var_0));
                                var_56 = ((arr_105 [8] [8] [8] [i_32] [i_33 - 1]) ? ((17005 << (1868420364 - 1868420352))) : -1868420364);
                                var_57 = (((((~(arr_113 [1] [i_33] [i_24] [i_24])))) && 453965048));
                            }
                        }
                    }
                }
            }
        }
    }
    var_58 = (min(((((((var_1 ? var_8 : var_9))) ? ((-11 ? var_10 : var_3)) : var_10))), ((var_2 ? (var_8 | var_7) : var_2))));
    #pragma endscop
}
