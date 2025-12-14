/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = ((var_10 < (arr_0 [i_0] [i_0 + 1])));
        var_16 |= (((~262143) ? ((121 ? 642507821 : -1)) : (arr_1 [4])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (arr_3 [i_0] [i_0] [i_1]);
            var_18 = (-26 * 41);
        }
        var_19 = ((7592717760181031113 / (((-3544359928083501646 ? 68719476735 : 29335)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_20 = (min((min((-1383499084 >= var_6), (max(var_2, (arr_13 [i_2] [i_3] [18] [i_4 + 1]))))), var_6));
                    var_21 |= ((((max(var_11, (arr_7 [i_2 + 1])))) ? (arr_6 [i_2 + 1]) : (min((arr_6 [i_2 + 1]), (arr_7 [i_2 + 1])))));
                    var_22 = ((~((~(arr_13 [i_2 + 1] [i_2] [i_3 - 1] [i_4 - 1])))));
                }
            }
        }
        var_23 = (((((-(arr_7 [i_2 + 1])))) ? ((var_1 % (max((arr_6 [i_2]), 5827915870583108939)))) : ((max(((min(163, var_8))), (arr_7 [i_2]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        var_24 = (var_12 != var_1);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_25 = ((~(((!(arr_6 [i_5]))))));
                    var_26 = ((13662 ? -26 : (arr_7 [i_7 + 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_27 = (((((~(arr_22 [i_8] [i_8] [i_8])))) ? var_12 : (arr_11 [i_8] [i_8] [i_8])));
        var_28 = (arr_20 [i_8]);
    }
    var_29 = (min(var_29, 36888));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_30 = ((~(arr_39 [i_9])));
                                var_31 |= (min((arr_36 [2] [2] [i_13 + 1] [i_13]), 8449));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_32 = 21;
                                var_33 = (~var_8);
                                var_34 = (((((((100 ? 26 : 1646022480)) + 255))) || 3));
                                var_35 = ((889972534 ? -1 : 1564749617));
                                var_36 ^= ((1 ? ((~(arr_45 [i_14] [i_9] [i_9 - 1]))) : (((!(arr_28 [i_10 - 1] [i_10 - 1]))))));
                            }
                        }
                    }
                }
                var_37 = (~-1646022455);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_38 = (((((min(-1, ((1 ? 39747 : 5827915870583108939)))) + 9223372036854775807)) >> (((~1) + 44))));

                            for (int i_19 = 0; i_19 < 0;i_19 += 1)
                            {
                                var_39 = (max(var_39, (((+(((arr_26 [10]) ? var_12 : (arr_37 [i_19 + 1] [i_19 + 1] [i_19] [i_19 + 1] [i_19 + 1]))))))));
                                var_40 = -1;
                            }
                            /* vectorizable */
                            for (int i_20 = 1; i_20 < 23;i_20 += 1)
                            {
                                var_41 = (arr_49 [i_9 + 1] [15] [i_9 - 2]);
                                var_42 = 1;
                                var_43 = (((arr_42 [i_9 + 1] [i_9 + 1] [i_9] [i_20 + 1]) ? (arr_31 [10] [10] [i_17] [i_17]) : var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
