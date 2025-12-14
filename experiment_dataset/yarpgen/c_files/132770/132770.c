/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min((956735078 & var_11), (-794081520779472444 ^ var_2)))) ? var_9 : 1));
    var_14 = 22651;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = -113;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_2] [i_3] = (((((((var_4 ? 83 : (arr_8 [i_0 + 1] [i_1] [5] [i_3])))) ? 168 : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) / (arr_0 [i_1])));
                    var_15 = (arr_1 [i_1]);
                    var_16 = ((max(((var_4 ? 18446744073709551596 : (arr_0 [i_0]))), 1)));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_17 = (min(-3514, ((+((max((arr_12 [i_0 - 1] [4] [i_4]), 1)))))));
                    var_18 = (arr_5 [i_0 + 1]);
                    var_19 = (((!var_9) + -7689435051483251496));
                    var_20 = (((((arr_0 [i_0 + 1]) ? ((13036219841234819176 ? 1 : 147)) : (arr_0 [i_0 - 1]))) - (((arr_7 [i_0 - 1] [i_0] [4]) ? 146 : ((var_10 ? (arr_10 [i_0] [i_0] [i_4]) : (arr_9 [i_1] [i_4])))))));
                }
                var_21 = ((!((((arr_2 [i_0 - 1]) | (((arr_4 [i_0 - 1] [i_1]) ^ (arr_8 [i_0] [8] [8] [8]))))))));
            }
            var_22 = arr_13 [i_1] [i_1] [i_1] [10];
            var_23 = (min((~1), ((-((~(arr_1 [8])))))));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_24 = (((((var_5 >= (arr_10 [i_0] [i_5 + 1] [i_0])))) - (4150879906 <= 16320)));
            arr_16 [i_5] [i_0] [i_0 + 1] = arr_12 [i_0 + 1] [i_0 + 1] [4];
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_22 [i_7 - 2] [i_6] [i_5] [i_0 - 1] = ((~((max(32764, -77)))));
                        var_25 = ((-((var_3 - (min((arr_1 [9]), (arr_21 [i_0 + 1] [i_5] [i_0 + 1])))))));
                        var_26 += ((~((((arr_1 [i_5 + 1]) && var_6)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 = 17;
        var_28 += var_10;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_29 += (arr_27 [4]);

        /* vectorizable */
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_30 = (arr_30 [i_9]);
                var_31 = (min(var_31, (arr_32 [i_9] [i_10] [i_9] [i_11])));
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        arr_43 [i_9] [i_9] [i_9] [i_13] [i_9] = 16320;
                        var_32 *= ((8 ? (arr_41 [0] [i_10 + 1] [i_12] [i_13] [i_14]) : 152));
                        var_33 = ((((((arr_27 [i_10 + 1]) ? 49215 : -1858335279))) ? (((arr_30 [i_9]) << (((arr_27 [i_9]) - 3886098474039789069)))) : var_6));
                    }
                    var_34 = ((((((arr_34 [i_9] [i_10 + 3] [i_9]) ^ (arr_38 [i_9] [i_9] [7] [i_9])))) + var_10));
                    var_35 = (arr_38 [i_10 - 2] [i_10] [i_13 + 2] [i_10]);
                    var_36 = ((4555718717124219014 ? 16250578131804674654 : 20));
                }
                for (int i_15 = 3; i_15 < 21;i_15 += 1)
                {
                    var_37 = (max(var_37, ((((arr_31 [i_10]) == (arr_31 [i_10]))))));
                    arr_47 [i_9] = (arr_42 [i_9] [i_15 + 1] [i_12] [i_10] [i_12]);
                }
                var_38 = (((~4) <= var_2));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_39 = (max(var_39, var_4));
                            arr_53 [i_16] [i_10 + 3] [i_9] = var_9;
                            var_40 = ((~(arr_31 [i_9])));
                            var_41 = (67 & 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_61 [4] [i_9] [4] [i_18] [i_18] = (i_9 % 2 == zero) ? (((~(((arr_48 [i_9] [i_9] [i_12] [i_18] [i_9]) << (arr_51 [18] [i_10 - 1] [i_9])))))) : (((~(((((arr_48 [i_9] [i_9] [i_12] [i_18] [i_9]) + 2147483647)) << (arr_51 [18] [i_10 - 1] [i_9]))))));
                            var_42 = (max(var_42, var_0));
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
            {
                arr_64 [i_9] [i_10] [i_20] [i_20] = 76;
                var_43 = 0;
                arr_65 [i_9] [i_9] [6] [i_9] = (!(~1702258236));
            }
            for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
            {
                arr_68 [i_10] [i_9] = ((var_4 ? (arr_42 [i_9] [i_10 + 3] [i_10 + 3] [i_21] [i_21]) : (arr_49 [i_10 - 1] [i_10 + 1] [i_10 + 1])));
                var_44 = (max(var_44, ((-var_2 != (var_1 <= var_10)))));
                var_45 = (max(var_45, ((((((~(arr_34 [i_10] [i_10 + 2] [i_10])))) ? (arr_33 [i_10]) : ((~(arr_26 [i_10]))))))));
            }
            arr_69 [i_9] = -1260210708;
            var_46 = (~-1);
            var_47 = (min(var_47, (arr_60 [i_10] [i_10 + 1])));
        }
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            var_48 = ((~((~(arr_35 [i_9] [i_9] [i_9])))));
            var_49 = ((var_2 + (arr_34 [0] [i_22] [0])));

            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_50 = -2181;
                var_51 = ((~((-2200 ? (arr_28 [i_9] [i_22] [i_23]) : (arr_28 [i_9] [i_22] [i_23])))));
            }
        }
    }
    var_52 ^= var_10;
    #pragma endscop
}
