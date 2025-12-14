/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_0, (var_1 || var_10))), (((~(5 << var_11))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] [i_0 + 2] = ((29 ? 0 : var_2));
        arr_4 [i_0] [i_0] = var_0;
        var_14 = ((!(arr_2 [i_0] [i_0])));
        var_15 ^= ((0 ? var_9 : ((var_3 ? 1 : var_2))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((((arr_5 [i_1 - 2]) ? (arr_7 [i_1]) : 1)) / (((arr_2 [i_1 - 2] [i_1 + 2]) ? 40 : (arr_6 [i_1]))));
        var_17 = ((((((arr_7 [i_1]) ? (arr_0 [i_1 - 1]) : (arr_7 [i_1 + 1])))) ? (~976683428251675605) : ((((arr_0 [i_1 - 1]) + (arr_0 [i_1 + 2]))))));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        arr_11 [8] [i_2 + 2] &= (min((arr_5 [i_2 + 3]), (12 * 1)));
        var_18 += ((~(arr_10 [i_2])));
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_3 + 1] = (((((-(arr_14 [i_3 + 1] [i_3 + 1])))) * 808321882));
            var_19 = (max(var_19, (arr_12 [i_3] [i_4])));

            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                arr_21 [i_3 + 1] [i_4 + 3] [i_4] [i_5] = ((((((arr_19 [17] [i_5 - 2]) ? (arr_17 [i_3]) : 1))) ? (arr_16 [i_5]) : (arr_19 [i_4 + 2] [i_4])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((((14 ? var_8 : 22))))));
                            var_21 = (min(var_21, (arr_20 [i_3] [i_5 - 1] [i_4])));
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_22 = (arr_20 [i_4 + 2] [i_4] [i_10]);
                            var_23 = 1;
                            var_24 = ((~(1 | 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_39 [i_3 - 1] [12] [i_11] [i_11] = (arr_24 [i_3] [i_4 + 3] [i_8] [i_11] [3]);
                            arr_40 [0] [i_11] [i_8] [i_11] = ((((((arr_22 [12] [i_4] [i_8] [i_11]) * (arr_32 [5])))) ? ((~(arr_36 [i_11]))) : 132));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                arr_43 [i_3] [i_4 - 1] = (((arr_25 [19] [10] [i_3] [i_4 + 3] [11]) ? (255 | 1) : (!1)));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_25 = ((((arr_20 [2] [i_13] [i_14]) ? (arr_42 [1] [i_3] [i_3 - 1]) : 13436409581553792507)));
                            arr_48 [i_3] [i_14] [i_4] [i_13] [i_14] [13] [i_13] = ((((arr_36 [i_14]) + (arr_30 [9]))));
                        }
                    }
                }
                var_26 += 1;
            }
            var_27 = ((!(!11189500936815900254)));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 4; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    {
                        arr_58 [i_3 + 1] [i_16] = (((((66 || (arr_20 [i_17] [i_16] [i_3]))))) < (~var_2));

                        for (int i_19 = 1; i_19 < 21;i_19 += 1)
                        {
                            var_28 = 12;
                            arr_63 [i_3 + 1] [i_3 + 1] [i_17] [i_16] [i_3 + 1] = ((~((~(arr_32 [i_17])))));
                            arr_64 [i_16] [i_16] [i_17] [i_17] = (((((arr_50 [i_16] [i_16] [i_17]) | 1)) | (((arr_46 [17] [17] [i_17 + 1] [1] [i_17] [i_17]) ? 1 : 1))));
                        }
                    }
                }
            }
            var_29 = (max(var_29, ((((arr_19 [i_3] [1]) ? (((var_1 == (arr_61 [17] [i_3 - 1] [i_16] [i_16] [17])))) : 0)))));
            var_30 = 116;
        }
        var_31 = min(127492266, 7);
    }
    for (int i_20 = 1; i_20 < 21;i_20 += 1) /* same iter space */
    {
        var_32 -= 13436409581553792507;
        arr_69 [i_20 - 1] = (((1 | 85) ? (min((((arr_19 [17] [4]) ? 122 : (arr_19 [12] [10]))), ((63836 ^ (arr_49 [i_20] [i_20]))))) : (((~190) | (((arr_26 [i_20] [13] [i_20 - 1] [11] [i_20 + 1]) ? -1642409499 : 63))))));

        /* vectorizable */
        for (int i_21 = 2; i_21 < 20;i_21 += 1) /* same iter space */
        {
            arr_74 [i_21 - 2] [1] [i_20] = 194;
            var_33 = (((27580 ? (arr_28 [i_21]) : (arr_12 [i_21] [i_20]))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 21;i_23 += 1)
                {
                    {
                        var_34 = (((1 > 22) == (63 >= var_6)));
                        var_35 = arr_54 [i_20] [i_21] [i_21 + 1] [i_22] [6];
                        var_36 = 0;
                    }
                }
            }
        }
        for (int i_24 = 2; i_24 < 20;i_24 += 1) /* same iter space */
        {
            arr_85 [i_20 - 1] [2] [i_24] = ((((((arr_19 [i_20 + 1] [i_20 - 1]) - 85))) * (~var_0)));
            var_37 -= ((~var_7) & ((var_5 & (arr_84 [i_20]))));
        }
        arr_86 [i_20] = 0;
    }
    var_38 = (1 || 1);
    #pragma endscop
}
