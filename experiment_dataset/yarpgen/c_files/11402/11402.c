/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_3 [1] [i_0])));
                var_21 = (min(var_21, -1));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_22 = ((~(arr_6 [i_0] [i_2] [7] [i_0])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_23 = (((arr_10 [i_2 - 1] [i_2 + 1] [i_4 + 1] [i_4 + 1]) << (arr_10 [i_2 - 2] [i_2 - 1] [i_4 + 2] [i_4 + 1])));
                                var_24 = (min(var_24, -3571650460));
                                var_25 = (arr_11 [i_2] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4]);
                                var_26 = ((-1746824686 ? 1699782692 : var_4));
                                var_27 &= 2703814206686227779;
                            }
                            var_28 = (min((min(((-3696558752243891926 & (arr_3 [i_0] [i_0]))), ((min(-917700287, 509518173))))), (((40865 && (arr_9 [i_0] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_29 = (arr_4 [18] [2]);
        var_30 = ((247659848 ? ((((arr_0 [16]) ? var_10 : (arr_0 [12])))) : (min(0, ((max((arr_10 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]), var_9)))))));
        var_31 = (min((min((arr_2 [i_5] [i_5]), (arr_15 [i_5 + 1]))), (arr_16 [i_5 - 1])));
        var_32 = 3658730399;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_33 = (max(var_33, (((723316828 ^ (arr_8 [1] [i_6] [i_6] [0]))))));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_34 = min(((((min((arr_8 [i_6 + 3] [i_6] [i_7] [i_7]), (arr_12 [i_7] [i_7] [i_6] [i_6] [1] [i_6 + 3])))) ^ (~4064))), (arr_8 [i_6] [i_6] [i_7] [i_7]));
            var_35 = (((((~(arr_18 [i_6]))) < (((var_3 ? -3696558752243891932 : var_9))))));
            var_36 = (min(var_36, 0));
            var_37 = 24658;
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_38 = (min((((arr_24 [i_6] [i_8] [i_6]) ? (((arr_9 [i_6] [i_8] [1]) ? 0 : var_4)) : (((arr_3 [i_6] [i_8]) ? (arr_9 [i_6] [i_6] [i_8 - 1]) : (arr_20 [0]))))), 114));
            var_39 = var_0;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_40 = (arr_4 [i_6] [i_6 + 3]);
                var_41 = -1797842807;
                var_42 = (max(var_42, (arr_19 [i_6 - 1] [i_6 + 2])));
                var_43 += ((var_6 ? (((arr_11 [i_6 + 1] [i_6] [i_10] [i_10] [i_10] [i_10]) * (arr_10 [15] [9] [i_9] [i_10]))) : (arr_21 [i_6 + 1])));
                var_44 = (max(var_44, 127));
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                var_45 = var_18;

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_46 = (((arr_29 [i_11 + 1] [i_11 + 1] [i_6 + 3]) ^ (arr_29 [i_11 + 1] [i_11 + 1] [i_6 + 3])));
                    var_47 = 9804456;
                    var_48 = (arr_30 [i_9] [1]);
                    var_49 |= ((((((~(arr_11 [i_6] [i_9] [i_9] [i_12] [i_9] [i_12]))))) ? (--1) : (min((arr_24 [i_6] [i_6] [6]), (arr_5 [i_12] [i_6])))));

                    for (int i_13 = 3; i_13 < 15;i_13 += 1)
                    {
                        var_50 = 4008484408;
                        var_51 = ((-117 ? ((var_3 ? 4285162845 : 3571650448)) : (!-284533452)));
                        var_52 |= (min((arr_0 [20]), ((min((arr_0 [10]), var_12)))));
                        var_53 &= 24671;
                        var_54 = ((((3658730399 > 120) ? 0 : var_3)));
                    }
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                {
                    var_55 = (1 != -21307);
                    var_56 += (min(var_16, var_7));
                }
                for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    var_57 = (min(-26, -107));
                    var_58 = (min(((((arr_20 [i_9]) ? ((var_0 ? (arr_4 [i_6] [i_15]) : (arr_28 [i_9] [i_11] [i_9]))) : 104))), (min(-21990942, ((var_10 ? 4285162855 : 1))))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    var_59 = 67;
                    var_60 = ((~(arr_31 [i_11 - 1] [i_11 - 1] [i_9] [i_9])));
                    var_61 = ((((arr_2 [i_6] [i_11]) && (arr_22 [i_6 + 1] [i_6 + 1]))));
                }
            }
            var_62 = ((min((~2171466256819720700), (arr_41 [i_6 + 3] [i_6 - 1] [i_6] [i_6 + 1]))));
            var_63 = max(var_3, (arr_23 [i_6 + 1] [i_6]));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                var_64 = (arr_21 [i_9]);

                for (int i_18 = 4; i_18 < 15;i_18 += 1)
                {
                    var_65 = ((-var_11 / (~-2039427899)));
                    var_66 = (!(arr_2 [i_6 + 3] [i_6 + 3]));
                    var_67 = (arr_4 [i_6] [16]);
                }
            }
            var_68 = arr_17 [i_6 + 1];
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            var_69 = (((var_5 ? 27207370 : (arr_52 [i_19] [i_19] [i_6 - 1]))) & (arr_30 [i_6] [i_19]));
            var_70 += 27207375;
            var_71 &= (max((((arr_48 [i_6 + 3] [i_6 + 3]) || var_8)), ((32762 != (arr_35 [i_6 + 1] [i_6 + 3])))));
        }
        var_72 = (((((((min(var_15, (arr_53 [i_6] [i_6])))) ? (arr_8 [i_6] [3] [i_6] [i_6]) : var_16))) ? (arr_10 [i_6 + 3] [i_6 - 1] [i_6] [i_6]) : (min((var_3 | var_18), (arr_31 [3] [i_6 + 3] [i_6 + 1] [i_6 + 3])))));
    }
    #pragma endscop
}
