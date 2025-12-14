/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 ? (((var_2 || (~-1)))) : var_7));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 |= (var_2 * var_4);

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_12 = (min(var_12, ((~(arr_2 [10] [i_0])))));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_13 = (~var_3);
                var_14 = (min(var_14, var_1));
                var_15 = var_2;
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_16 = var_0;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_17 ^= ((116 * 4553) & -var_4);
                        var_18 &= ((~((((~var_1) < (arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 2]))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_19 ^= (var_6 >> (((arr_16 [i_0] [i_1 + 1] [i_3]) - 2499019991)));
                    var_20 &= (((arr_7 [i_3] [i_1]) ? (arr_6 [i_3] [i_1 - 1] [i_3]) : ((var_8 ? var_3 : var_5))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_21 = (arr_8 [i_0] [i_1] [i_7]);
                        var_22 ^= (arr_18 [i_1]);
                        arr_21 [i_0 - 1] [i_0 - 1] = ((var_1 / var_4) ? (250 && -32) : var_6);
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        var_23 = (((arr_10 [i_0] [i_0] [i_0 + 4]) & var_8));
                        var_24 = (arr_13 [i_0 + 3] [5] [i_1 - 1] [5] [5] [i_6] [i_1 - 1]);
                        var_25 = (arr_23 [i_0] [i_0] [i_0] [i_6] [i_6]);
                        var_26 += ((~(arr_13 [i_0] [i_0] [i_1 + 1] [i_3] [i_3] [i_6] [i_6])));
                    }
                    var_27 = arr_9 [i_1] [i_1] [4];
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_28 = ((~(((arr_4 [i_0] [i_0] [i_0]) & ((((arr_11 [i_0] [i_1 - 2] [i_0] [i_1 - 2]) && var_6)))))));
                    var_29 = var_5;

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_30 = (min(var_30, (((var_5 / (arr_6 [i_1] [i_1] [2]))))));
                        var_31 = var_0;
                    }
                    /* vectorizable */
                    for (int i_11 = 4; i_11 < 19;i_11 += 1)
                    {
                        var_32 |= var_8;
                        var_33 |= arr_25 [i_0 + 2] [i_11 - 3] [i_0 + 2] [i_0 + 2];
                        var_34 = (var_7 ^ var_9);
                    }
                }

                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    var_35 = (max(var_35, (var_5 || var_4)));
                    var_36 = (min(var_36, var_7));
                    var_37 = ((!((((var_1 && var_0) ? (var_8 & var_6) : (var_0 && var_0))))));
                }
                var_38 += ((((((arr_8 [i_0] [i_1] [3]) != var_4))) != var_2));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_41 [5] = var_6;
                            var_39 = var_1;
                        }
                    }
                }
                arr_42 [0] [i_0] [i_0] &= var_9;
                arr_43 [i_0] [i_0] [9] = ((((var_8 ? var_4 : var_6)) * (0 > 253)));
                var_40 = (~var_5);
                var_41 = (min(var_41, ((((var_8 | var_1) || (arr_33 [i_0] [i_1] [i_13 + 1] [i_0]))))));
            }
            for (int i_16 = 2; i_16 < 19;i_16 += 1)
            {
                arr_47 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((var_8 ? ((((var_2 ? var_0 : var_6)))) : (~18446744073709551612)));
                var_42 = (((((((arr_19 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2]) + (arr_35 [i_1] [i_1] [i_1 - 2] [14]))) / var_9)) ^ (((((var_5 ? (arr_32 [i_1] [i_1]) : (arr_1 [i_0 - 1])))) ? var_2 : (arr_31 [12] [i_1] [i_16 + 1] [i_1])))));
                var_43 = ((((((((arr_35 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3]) | var_4)) >> (var_0 - 2844)))) ? (arr_0 [i_1]) : var_8));
                var_44 = ((((((var_6 ? var_2 : (arr_34 [i_1] [i_16 + 1]))) / var_2)) >> (var_3 - 59201)));
                var_45 = (7 * 3);
            }
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            var_46 = (min(var_46, (((var_9 | (((arr_22 [i_0 + 1] [i_0 + 1] [16]) ? (~var_6) : ((-(arr_2 [i_0] [1]))))))))));

            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                var_47 = -var_2;
                arr_54 [i_0] [i_0] = (((var_2 || var_8) != (arr_38 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_17] [i_18] [i_18])));
                var_48 = var_1;

                /* vectorizable */
                for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                {
                    var_49 = (min(var_49, var_0));
                    arr_57 [i_0] [i_0] [i_18] [i_19] = (var_8 * var_4);
                    var_50 += (arr_28 [i_19] [i_18]);
                }
                for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                {
                    var_51 = (max(var_51, ((var_3 ? (((var_7 != 63) ? var_4 : ((((var_1 + 2147483647) << (var_7 - 26642)))))) : (arr_46 [8] [8] [1])))));
                    arr_60 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 3] = var_3;
                }
                for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                {
                    arr_65 [i_0] [i_0] = (((((((arr_39 [i_0 + 4]) ? var_3 : var_8)) << (var_3 - 59205))) == ((+(((arr_55 [i_0] [12] [i_0] [18] [i_0] [i_0]) ? var_1 : (arr_56 [10] [i_17] [i_18] [i_21] [i_21])))))));
                    var_52 = ((var_7 >= (((arr_23 [i_21] [i_21] [i_18] [i_0] [i_0]) / -65531))));

                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        var_53 = ((var_8 ? -var_7 : (~52556)));
                        var_54 = ((((var_5 == (~var_8)))));
                        var_55 = (((arr_40 [i_0] [i_18]) / var_7));
                        arr_70 [i_18] [i_22] = var_7;
                    }
                    var_56 = var_0;
                    arr_71 [i_0 - 1] [3] [i_18] [i_21] = var_1;
                }
            }
            var_57 = (((18446744073709551613 << (-7 + 65))));
            var_58 = var_6;
        }

        for (int i_23 = 1; i_23 < 17;i_23 += 1)
        {
            var_59 = (max(var_59, var_5));
            var_60 = ((((((var_4 ? var_3 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_23]))) | (((~(arr_33 [16] [i_23] [i_23 - 1] [17])))))) ^ (((var_3 | (arr_45 [i_0] [i_23] [i_23]))))));
        }
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {

            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                arr_79 [i_0] [i_0] [i_0] = ((var_8 * ((((arr_73 [i_25] [10] [i_25]) < (arr_27 [i_25]))))));
                var_61 = var_7;
                var_62 = (max(var_62, var_8));

                for (int i_26 = 4; i_26 < 18;i_26 += 1) /* same iter space */
                {
                    var_63 += (arr_8 [i_0] [i_0] [i_26 - 4]);
                    var_64 = (-var_6 ? var_3 : var_9);
                }
                for (int i_27 = 4; i_27 < 18;i_27 += 1) /* same iter space */
                {
                    arr_84 [i_0] [i_0] = var_8;
                    var_65 = (max(var_65, (((((((arr_28 [i_24] [i_24]) < var_2))) > ((((var_0 >= var_0) > (var_3 % var_5)))))))));
                }
                /* vectorizable */
                for (int i_28 = 4; i_28 < 18;i_28 += 1) /* same iter space */
                {
                    arr_87 [i_28 - 4] [i_28 + 1] [i_25] [8] [7] = (((arr_7 [i_0] [i_24]) << ((((32760 ? 2147483634 : 2493615079)) - 2147483627))));
                    var_66 = (arr_45 [i_0 - 1] [i_25] [i_28 + 2]);
                    arr_88 [15] [i_24] [i_24] [i_28] = ((~var_6) ? var_6 : (((arr_0 [i_25]) ? (arr_12 [i_0 + 2] [i_0 + 2]) : var_7)));
                }
                var_67 = (((((((var_9 ? var_0 : (arr_82 [i_0 + 4] [i_0 + 4] [i_25])))) ? ((var_7 ? (arr_10 [12] [12] [i_25]) : (arr_17 [i_0 + 4] [i_0 + 4] [i_0 + 4]))) : (var_5 >= var_7))) == var_2));
            }
            /* vectorizable */
            for (int i_29 = 4; i_29 < 16;i_29 += 1)
            {
                var_68 = (max(var_68, ((((((-32767 ? 0 : -11738))) ? ((-2147483634 ? 8928087262206147795 : 32753)) : (-127 - 1))))));
                var_69 = var_1;

                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    var_70 = (max(var_70, (((arr_64 [i_0] [i_0] [i_29 - 2] [i_0]) ? (~var_1) : (var_5 >= var_1)))));
                    var_71 = (((((var_1 == (arr_93 [10] [15] [10])))) >= (((arr_9 [i_0] [i_0 + 4] [i_0]) >> (var_2 + 40)))));
                    var_72 = (var_0 | var_6);
                }
                for (int i_31 = 1; i_31 < 16;i_31 += 1)
                {
                    var_73 += (((((var_3 ? var_9 : var_2))) && var_5));
                    var_74 = -var_8;
                }
                arr_98 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = var_7;
            }
            var_75 = (min(var_75, (((~(((arr_8 [i_0] [i_0] [i_0]) / var_9)))))));
        }
    }
    for (int i_32 = 0; i_32 < 20;i_32 += 1)
    {
        arr_101 [i_32] [i_32] = var_8;
        var_76 += (arr_44 [i_32] [14] [14]);
    }
    #pragma endscop
}
