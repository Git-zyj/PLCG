/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_1;
    var_14 = var_5;
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_16 = (((((~(arr_1 [i_0] [i_0]))) + 2147483647)) << (var_9 - 5332315134045984830));
        var_17 = 0;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = var_6;

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_19 = arr_5 [i_1] [i_1] [i_1];
            var_20 = var_3;
            var_21 = var_7;
            var_22 = (281474842492928 ? -943553273847221341 : -281474842492906);
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_23 = 1;
            var_24 = (max(var_24, ((max((arr_2 [1]), (arr_0 [1]))))));

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_25 = var_7;
                var_26 ^= max((((var_7 == (arr_4 [i_1])))), (min(-1532291053, (max(-1103085363417781614, var_7)))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_27 = (1 ^ (arr_11 [i_1] [i_1] [i_1]));
                var_28 = (((arr_10 [i_5] [i_1] [i_1]) / ((((var_8 || var_0) ? (max((arr_9 [i_1] [i_1]), (arr_12 [i_1] [i_1] [i_5]))) : var_3)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_29 = (var_2 && var_1);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_30 = (min(var_30, (arr_21 [15] [i_3] [i_6] [23] [15])));
                        var_31 = (arr_19 [i_1] [i_1]);
                        var_32 = var_1;
                        var_33 = (((arr_18 [i_1]) ? (arr_18 [i_1]) : var_11));
                    }
                    var_34 = (min(var_34, ((((arr_5 [i_1] [i_3] [i_6]) / -1515474075)))));
                    var_35 = (((arr_16 [i_1] [i_1] [i_1]) - (var_7 & var_10)));
                }
                var_36 ^= var_5;
                var_37 = var_0;
                var_38 = (max(var_38, (arr_11 [i_6] [7] [i_1])));
            }

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_39 = (min(var_39, ((((min((arr_6 [3]), (arr_6 [i_3]))) == (arr_21 [i_1] [i_1] [i_1] [17] [i_9]))))));
                var_40 = (0 ? ((((var_0 ? (arr_21 [i_9] [i_9] [i_3] [14] [i_1]) : var_9)) - (arr_11 [i_1] [i_3] [i_9]))) : (((1 - (arr_6 [i_1])))));
                var_41 = var_8;
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                var_42 = (min(var_42, ((1532291053 ? 8366109996277577253 : (arr_25 [4] [i_10 + 1] [4])))));
                var_43 |= ((((((((arr_20 [4] [4]) ? (arr_13 [i_1] [15] [i_1]) : (arr_16 [1] [i_1] [i_1]))) / (max((arr_13 [i_3] [i_3] [i_3]), (arr_23 [i_1] [i_3])))))) ? (arr_23 [i_1] [i_1]) : (((1332045290366501134 >= (arr_19 [2] [2]))))));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                var_44 = var_3;
                var_45 = (!(((var_8 ? (arr_22 [i_1] [i_1] [1]) : -1))));
                var_46 = var_12;
                var_47 = (max(var_47, (arr_22 [i_1] [i_1] [i_1])));
            }
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                var_48 = ((((28860 ? var_10 : (-2968090606338920561 + 1)))) ? 0 : -680473523);
                var_49 = 0;
                var_50 = var_12;
                var_51 = ((((max(var_11, 1))) / var_3));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {

                        for (int i_15 = 2; i_15 < 23;i_15 += 1)
                        {
                            var_52 ^= 7;
                            var_53 ^= var_8;
                        }

                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_54 = (arr_9 [6] [i_1]);
                            var_55 = 1;
                            var_56 *= (((arr_23 [i_16] [i_3]) ? var_6 : -28860));
                            var_57 ^= var_10;
                            var_58 = -9;
                        }
                        for (int i_17 = 2; i_17 < 21;i_17 += 1) /* same iter space */
                        {
                            var_59 += (arr_15 [10] [10] [i_17]);
                            var_60 = (((((((-103 ? (arr_30 [2] [i_3] [20]) : (arr_5 [i_1] [i_13] [i_17 + 2]))) + (-281474842492938 + 1)))) ? (arr_13 [i_13] [i_14] [i_17]) : 1));
                        }
                        for (int i_18 = 2; i_18 < 21;i_18 += 1) /* same iter space */
                        {
                            var_61 = (min(var_61, var_5));
                            var_62 -= (max(var_8, (arr_38 [i_1] [i_3] [i_14])));
                            var_63 += 1;
                        }
                        var_64 = (min(var_64, -7));
                        var_65 = (arr_11 [i_1] [i_3] [i_14]);
                        var_66 = (max(var_66, (((((arr_18 [6]) ^ (arr_11 [i_3] [1] [1])))))));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        var_67 = (((arr_9 [i_19] [i_19]) == ((((arr_46 [i_19]) >= (arr_6 [i_19]))))));
        var_68 = (arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
        var_69 = ((((((arr_32 [i_19]) ? var_7 : 9223372036854775807))) && (arr_19 [i_19] [i_19])));
        var_70 = ((var_2 ? (arr_46 [i_19]) : (arr_13 [i_19] [i_19] [i_19])));
    }
    #pragma endscop
}
