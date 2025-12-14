/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 ^= 238;
                    var_21 = (min(var_21, (arr_2 [i_0] [i_0])));
                }
            }
        }
    }
    var_22 = (!var_3);

    /* vectorizable */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = var_0;
        arr_13 [i_3] [i_3] = var_2;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_23 = min(var_11, (min((arr_0 [11]), (arr_0 [i_4]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_4] [i_6] [i_7] = var_18;

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_24 = max(0, (arr_9 [i_7 - 1]));
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_7 - 1] [i_7 + 2] [i_7 + 2] = (((((-(arr_8 [i_4] [i_7 + 1] [i_7 + 3] [i_4])))) && ((max(7, var_17)))));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    {
                        var_25 = ((!(arr_31 [i_4])));
                        arr_36 [i_4] [i_4] [i_4] [i_4] = ((!(arr_18 [i_11 + 3])));

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_26 = (arr_10 [i_9 - 1] [i_11]);
                            var_27 *= var_11;
                            arr_39 [i_4] [i_9] [i_4] [i_11] [i_12] [i_10] [i_10] = (var_17 ? (arr_2 [i_9 + 1] [i_11 + 2]) : (arr_33 [5] [i_9 + 2]));
                            var_28 = (arr_22 [i_4]);
                            arr_40 [i_4] [i_9] [i_10] [i_4] [i_12] = var_2;
                        }
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            var_29 = (max(var_29, (arr_33 [i_4] [i_9 + 2])));
                            arr_44 [3] [i_4] [i_10] [i_11 + 2] [i_13] = var_18;
                            var_30 = (arr_35 [i_9 - 1] [i_11 + 2] [i_13] [i_13 + 2]);
                        }
                    }
                }
            }

            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_31 = (min(var_31, (arr_5 [i_14] [i_9 + 1] [i_4] [i_4])));
                var_32 = ((((var_2 << (var_1 - 39))) ^ -var_8));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            arr_53 [i_4] [i_9] [i_14] [i_9] [i_9 + 1] [i_4] = ((var_2 ? (arr_37 [i_9] [i_9 - 1] [i_9]) : var_2));
                            var_33 = (max(var_33, (((var_1 ? var_3 : 4)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_34 = (((arr_17 [i_17 + 3] [i_9 + 2]) < (arr_0 [i_9 + 1])));
                            arr_60 [i_4] [i_4] [i_4] [i_9] [i_4] = var_17;
                            var_35 ^= var_17;
                        }
                    }
                }
            }
            var_36 = (max(var_36, var_2));
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_37 = (max((arr_3 [i_19] [i_4]), var_8));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {

                        for (int i_22 = 3; i_22 < 10;i_22 += 1)
                        {
                            var_38 = (min(var_38, ((((((min(-927102596, (arr_17 [i_21] [i_22])))) ? (arr_68 [i_4] [i_4]) : -3461200949658536654))))));
                            var_39 = ((var_12 ? var_10 : (((arr_2 [i_22 + 3] [i_22]) ? var_4 : (arr_54 [i_22] [i_22 + 2] [i_22 - 1] [i_22 + 4] [i_22] [i_22 + 1])))));
                            arr_70 [i_4] [i_4] = ((((arr_54 [i_21] [i_22 + 1] [i_22 + 1] [i_22 + 2] [i_22 + 2] [i_22]) ? var_1 : 8)));
                            arr_71 [i_4] = ((1152921504590069760 ? (arr_62 [i_22 + 3] [i_22 + 3] [i_22 + 4]) : 1799905255));
                        }
                        arr_72 [i_4] [i_4] [5] [i_4] = (arr_19 [i_19]);
                    }
                }
            }
            var_40 = arr_7 [i_4] [i_4] [i_19];
        }
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 1; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    {
                        var_41 = var_8;
                        var_42 = (min(var_42, (((((2147483647 ? 138 : 24415)) < (arr_54 [i_4] [i_24 - 1] [i_4] [i_24] [10] [i_4]))))));

                        for (int i_26 = 1; i_26 < 12;i_26 += 1) /* same iter space */
                        {
                            var_43 ^= -8;
                            var_44 = (max(var_44, ((((((var_12 ? (arr_6 [i_4] [i_25] [i_26 - 1]) : (arr_37 [i_4] [i_24] [i_24])))) && (((((max((arr_6 [i_4] [i_4] [i_4]), var_3))) >> (-1543540309 + 1543540331)))))))));
                        }
                        for (int i_27 = 1; i_27 < 12;i_27 += 1) /* same iter space */
                        {
                            var_45 = var_5;
                            var_46 = (((min((arr_85 [i_4] [i_4] [i_24] [i_4] [i_24 + 1] [i_4]), 24394))) / var_3);
                            var_47 = ((var_8 ? (min((arr_84 [i_27 + 1]), (arr_84 [i_27 + 2]))) : (arr_9 [i_4])));
                            arr_90 [i_4] [i_4] [i_4] [i_25] [i_4] = var_1;
                        }
                        for (int i_28 = 1; i_28 < 12;i_28 += 1) /* same iter space */
                        {
                            var_48 ^= ((!((min((arr_8 [i_23] [i_23] [i_23] [i_23]), var_14)))));
                            var_49 = min((max((arr_3 [i_28 + 2] [i_28 - 1]), 16)), (min((arr_3 [i_28] [i_28 + 2]), (arr_3 [i_28] [i_28 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_29 = 1; i_29 < 12;i_29 += 1) /* same iter space */
                        {
                            var_50 = (max(var_50, (arr_15 [i_4] [i_4])));
                            var_51 = arr_30 [i_24] [i_24] [i_24 + 1];
                            var_52 += arr_33 [i_25] [i_23];
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 14;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 14;i_31 += 1)
                {
                    {
                        var_53 = (((arr_64 [i_31] [6] [i_23]) ? ((min((arr_64 [i_4] [i_4] [i_4]), var_14))) : ((min((arr_79 [i_4] [i_23] [i_30] [i_31] [i_31] [i_31]), (arr_64 [i_4] [i_23] [i_23]))))));
                        var_54 = (min(((-42 ? ((min(var_0, var_8))) : ((((arr_2 [i_31] [i_23]) < var_19))))), ((min((arr_99 [i_4] [i_23] [i_31]), var_3)))));
                        var_55 = min((((~(~var_2)))), (arr_41 [i_4] [i_23] [i_23] [i_4] [i_31]));
                        var_56 = (i_4 % 2 == 0) ? ((max(((((arr_31 [i_4]) << (((max(var_18, var_15)) - 4922252758469227130))))), 9223372036854775807))) : ((max(((((arr_31 [i_4]) << (((((max(var_18, var_15)) - 4922252758469227130)) - 17))))), 9223372036854775807)));

                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 14;i_32 += 1)
                        {
                            var_57 = (min(var_57, (((~(arr_98 [i_4] [i_30] [i_32] [i_31]))))));
                            var_58 ^= (arr_1 [i_30]);
                            var_59 = ((((!(arr_14 [i_4]))) ? (arr_63 [i_4]) : (arr_97 [i_4] [4] [8])));
                            var_60 = 17546948780185083980;
                        }
                        for (int i_33 = 0; i_33 < 14;i_33 += 1)
                        {
                            var_61 = (arr_73 [i_4]);
                            arr_105 [i_4] [i_4] [i_4] [i_4] [i_4] = (arr_63 [i_30]);
                            var_62 = min(var_13, (arr_78 [i_4] [i_4] [i_30]));
                        }
                    }
                }
            }
            arr_106 [i_4] [i_4] [i_4] = ((min(var_4, (arr_30 [i_4] [i_23] [i_4]))));
            var_63 = (min((((arr_84 [i_23]) >> (((arr_84 [i_23]) - 724903086)))), ((((arr_33 [i_4] [10]) != (arr_17 [i_4] [i_4]))))));
        }
    }
    #pragma endscop
}
