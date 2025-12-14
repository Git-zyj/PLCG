/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (~(((-3483245506744623689 ^ 8323322910674309620) / var_8)));
        arr_5 [i_0] = ((((((var_4 ? 1 : var_8)) ? (164952258 >= var_8) : (max(var_12, (arr_3 [i_0])))))));
        arr_6 [i_0] = (min((((9503 >> (((arr_1 [i_0]) - 44874))))), (((arr_1 [i_0]) ? var_1 : var_5))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 -= var_11;
        arr_9 [i_1] [i_1] = (((arr_3 [i_1]) ? var_7 : ((~(arr_2 [i_1])))));
        var_16 = ((~(!var_2)));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_17 = (var_6 >= 5396799494156132875);
            var_18 ^= (((arr_10 [0] [0]) ? (arr_10 [12] [12]) : (arr_10 [6] [6])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_19 = ((!(arr_15 [i_1] [i_1] [i_1] [i_4] [i_1])));
                        var_20 = (~var_10);
                    }
                }
            }
        }
        arr_17 [i_1] = ((var_2 ? (arr_14 [i_1] [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1])));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_21 = (arr_19 [i_5]);
        var_22 = ((arr_19 [i_5]) | (arr_19 [i_5]));
        arr_20 [i_5] [i_5] = (((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_18 [i_5])));
        var_23 = (max(var_23, (~var_10)));
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_24 = (arr_7 [i_6 - 1]);

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_25 = ((((((arr_13 [i_7]) ? var_13 : var_14))) ? var_10 : (~var_0)));
                        var_26 = (max(var_26, ((1 & (arr_25 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_32 [i_7] = (!-var_12);
                        var_27 = (min(var_27, -25501));
                    }
                }
            }
        }
        var_28 = (max(var_28, (((-(max(((var_5 ? 9 : var_14)), var_13)))))));
        var_29 = (min(var_29, (~var_0)));
        var_30 = (max(var_30, 0));

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_31 = (max(var_31, var_9));
            var_32 = (arr_16 [i_11] [i_11] [i_6 + 1] [i_6 - 1]);
            var_33 = arr_23 [i_6] [i_6];
            var_34 *= var_2;
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_35 = var_2;
            var_36 = ((!((max((arr_36 [i_6 + 1] [i_6 - 1] [i_6 - 1]), (arr_21 [i_6 - 1] [i_6 + 1]))))));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            var_37 = (var_11 | 3591476255);
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_49 [i_13] [i_13 + 3] [i_14] [i_13 + 3] [i_16] = (((var_4 > 5396799494156132884) ? (arr_8 [i_6 + 1]) : (((arr_43 [i_13] [i_6 - 1]) ? (arr_23 [i_6 + 1] [i_15 - 2]) : var_5))));
                            var_38 = 5396799494156132877;
                            var_39 = (((arr_36 [i_13 + 2] [i_13 + 2] [i_13 + 2]) & var_8));
                        }
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            var_40 = (max(var_40, ((((((((((arr_18 [i_17]) ? (arr_41 [8] [8]) : var_3))) ? var_10 : (~1)))) < (((arr_16 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_17 - 1]) ? (var_1 <= 13049944579553418726) : ((var_1 ? var_14 : 2600104489)))))))));
            arr_52 [10] |= (max((((var_14 != var_13) * (min(var_4, var_13)))), ((251 ? var_9 : (max((arr_41 [10] [10]), var_4))))));
            var_41 -= ((!(arr_7 [i_6 - 1])));
        }
    }
    for (int i_18 = 1; i_18 < 12;i_18 += 1) /* same iter space */
    {
        arr_56 [i_18 - 1] = ((var_5 == ((((var_3 && ((min(var_10, (arr_42 [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]))))))))));
        var_42 -= ((((((8184 % 13049944579553418733) | 115))) ? ((((arr_23 [i_18 + 1] [i_18 - 1]) % ((((arr_23 [i_18] [i_18 + 1]) < (arr_47 [i_18 - 1] [i_18 - 1] [4] [i_18 + 1] [i_18 - 1]))))))) : (((-1 ? var_0 : var_10)))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_43 *= 13049944579553418737;
                                var_44 = ((+(((((((arr_22 [i_18 - 1] [i_21]) ? (arr_1 [i_18]) : var_7))) >= 2600104462)))));
                            }
                        }
                    }
                    var_45 = (((arr_68 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1]) & -26931));
                }
            }
        }
    }
    for (int i_23 = 1; i_23 < 12;i_23 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 13;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        arr_80 [i_24] = ((((((-164952243 | var_14) ? ((var_13 >> (((arr_63 [i_23 - 1]) - 1715362603)))) : (~1)))) ? ((min(0, 138))) : (1 * 11)));
                        var_46 = ((((max((arr_46 [i_24] [i_25] [i_25] [i_24] [i_23 - 1]), (arr_46 [i_26] [i_25] [i_25] [i_24] [i_23])))) <= ((~(arr_46 [i_23] [i_23] [i_23 - 1] [i_23 + 1] [i_23 + 1])))));
                        var_47 = (max(var_47, var_14));
                        var_48 = (min(1994260548, (min((arr_30 [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_23 + 1] [i_23 - 1]), 97))));
                    }
                }
            }
        }
        var_49 = (max(var_49, ((((var_0 % (arr_12 [i_23 - 1] [12] [i_23 + 1]))) ^ (((max(1, 77))))))));
        var_50 = (min(var_50, ((((arr_41 [0] [i_23 + 1]) >= (((((max((arr_42 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1]), var_12))) ? (var_12 + var_0) : var_5))))))));
    }
    var_51 = ((var_8 * ((max(var_8, var_14)))));
    #pragma endscop
}
