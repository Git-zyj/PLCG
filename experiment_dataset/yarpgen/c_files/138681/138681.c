/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = -0;
        var_18 ^= (arr_0 [i_0] [i_0]);
        var_19 = ((!(arr_2 [i_0] [i_0])));
        arr_4 [2] &= (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((2093784304 >= (arr_3 [6]))))));
        var_21 = (min(var_21, (((-(1 | -32725))))));

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    {
                        var_22 = (arr_10 [i_2] [i_2] [i_4]);
                        var_23 = (max(var_23, 16503));
                        var_24 -= 421058491;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_25 = -2492514575349937433;
                            var_26 = ((-(arr_9 [i_1] [i_4 + 3])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_27 = (arr_11 [i_2 - 3] [i_2 - 3] [i_2 - 3]);
                            arr_25 [i_6] [i_6] [i_1] [i_1] [i_1] [i_1] [i_1] = 214;
                            var_28 = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
            var_29 = (((arr_0 [i_2 - 3] [i_2]) ? (arr_0 [i_1] [i_1]) : (arr_12 [i_1] [i_2] [i_2 - 1] [i_2])));
            arr_26 [i_1] [i_2 + 1] = 6398861716237262283;

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_35 [i_1] [i_9] [i_9] [i_8] [i_9] |= (((var_15 ? var_3 : 0)));
                        var_30 = ((var_3 ? (((1 ? (arr_32 [i_1] [i_2 + 1] [i_2] [i_1] [i_8] [i_9]) : var_1))) : 6));
                        var_31 = ((var_14 != (arr_28 [i_2 - 3] [i_9] [i_9])));
                        arr_36 [i_1] [9] [9] [i_8] [i_9] = (!1);
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_32 = (min(var_32, var_10));
                        var_33 = ((var_7 ? ((var_12 ? (arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : var_12)) : -32759));
                    }
                    for (int i_11 = 4; i_11 < 8;i_11 += 1)
                    {
                        var_34 = ((!(arr_9 [i_2 - 1] [i_11 - 1])));
                        var_35 = (max(var_35, (((var_16 & (arr_37 [i_2] [i_2] [i_2 - 2] [6] [i_2]))))));
                        var_36 *= (((arr_14 [i_1] [i_7] [i_1]) | 7896));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_47 [8] [i_2] [i_1] [8] [i_2 - 3] = (((arr_24 [1] [1] [i_7] [i_8] [i_12] [i_12] [i_12]) ? (1 + 1) : ((0 ? var_11 : (arr_6 [i_1])))));
                        var_37 = (min(var_37, ((((var_0 ? var_16 : (arr_6 [i_12])))))));
                        arr_48 [i_1] [i_12] = arr_21 [i_1] [i_1] [i_1];
                    }
                    var_38 ^= (((arr_46 [2] [i_2] [i_7] [i_7] [i_8] [i_2] [i_2]) + ((~(arr_15 [i_1] [i_1] [i_1] [i_7] [i_1] [i_8])))));
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    var_39 = ((!(arr_3 [i_1])));
                    var_40 = ((-(((arr_5 [i_13]) ? (arr_8 [i_1] [i_2 - 3]) : 2147483647))));
                }
                var_41 = var_2;
                var_42 = (arr_21 [i_1] [i_1] [1]);
                var_43 = (arr_21 [i_1] [i_2 - 2] [i_1]);
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_44 = (!116);
                arr_53 [i_1] [i_1] [2] &= (arr_49 [i_2 + 2] [i_2 - 1] [i_2 - 3] [2] [i_2 - 3] [i_2 - 3]);
                var_45 = (max(var_45, ((((arr_21 [5] [5] [i_14]) ? (~var_2) : (((arr_14 [i_1] [1] [7]) ? var_11 : (arr_31 [i_1] [i_2 - 1] [i_1] [i_14] [i_14] [i_14]))))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 8;i_16 += 1)
                    {
                        {
                            var_46 ^= (((var_6 ? 0 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_59 [i_16] [i_1] [i_16] = (((~(arr_18 [i_1] [i_1] [i_2] [i_14] [i_15] [i_16 - 2] [i_14]))));
                            var_47 += (arr_49 [i_1] [i_2] [i_14] [i_15] [i_2] [i_2]);
                            var_48 &= ((-19798 != (((!(arr_56 [i_1] [i_1] [i_14] [i_15]))))));
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            var_49 = ((((((arr_13 [i_1] [i_17] [i_17] [i_17]) - (arr_8 [i_1] [i_17])))) ? ((var_2 ? var_16 : (arr_0 [i_1] [i_1]))) : (arr_17 [i_1] [i_1] [i_1] [i_17])));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_50 = (((arr_65 [i_18]) ? (arr_51 [i_1]) : (arr_65 [i_17])));
                        arr_70 [i_1] [i_1] [i_19] = (2475507746 > 118);
                    }
                }
            }

            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {
                    var_51 = 0;
                    var_52 ^= (~var_11);
                    var_53 = ((~(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        {
                            var_54 = (max(var_54, -23710));
                            var_55 = ((((arr_71 [i_1] [i_1] [i_1] [i_1]) ^ 14450869953342843546)));
                            var_56 = var_3;
                            var_57 = (max(var_57, var_3));
                        }
                    }
                }
                var_58 = (((arr_30 [i_1] [i_1]) ? (arr_30 [i_1] [i_1]) : (arr_30 [i_1] [i_1])));

                for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
                {
                    var_59 = (!-7495);
                    var_60 = ((var_16 ? (arr_39 [i_1] [i_24] [i_20] [i_17] [i_24]) : (arr_39 [i_1] [i_17] [i_17] [i_20] [i_24])));
                }
                for (int i_25 = 0; i_25 < 10;i_25 += 1) /* same iter space */
                {
                    arr_87 [i_1] [i_1] [6] [6] [i_25] = var_9;
                    var_61 = ((-(arr_16 [i_1] [i_17] [i_20] [i_20] [i_25] [i_25])));
                }
            }
            for (int i_26 = 2; i_26 < 9;i_26 += 1)
            {
                var_62 = (min(var_62, (((var_7 ? ((65535 ? (-32767 - 1) : var_8)) : (arr_11 [i_1] [i_17] [i_26 - 2]))))));
                var_63 = ((var_5 ? (arr_49 [i_26] [i_26 - 1] [i_26 - 1] [i_1] [i_26 - 1] [i_26 - 1]) : (arr_49 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_1] [i_26] [i_26 + 1])));
            }

            for (int i_27 = 0; i_27 < 10;i_27 += 1)
            {
                var_64 = 1;
                var_65 = (arr_18 [1] [i_1] [i_27] [i_17] [1] [i_1] [i_27]);
                var_66 &= ((-4500250678581151841 || (((1 ? 0 : 1725106586)))));
            }
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                arr_99 [i_1] [i_17] [i_1] &= 163;
                var_67 = -var_9;
            }
        }
        var_68 = (((arr_74 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) < (arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_100 [6] [i_1] = ((var_0 ? (arr_76 [i_1] [9] [i_1] [5] [i_1] [i_1]) : (3500137210022764278 != 41798)));
    }
    var_69 ^= var_8;
    var_70 = var_13;
    #pragma endscop
}
