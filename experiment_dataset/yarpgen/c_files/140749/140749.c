/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 ? (((var_4 ? var_0 : 10901507988495125013))) : var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_2 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0 - 2] [i_0] = ((((var_8 ? (arr_2 [i_0 - 2]) : (arr_1 [i_0])))) ? var_13 : (arr_7 [i_0 + 2] [i_1] [i_1] [i_2]));
                    arr_12 [i_0] [i_0] [i_0] = ((1022385495 ? 12257642267909515779 : 6189101805800035811));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = arr_14 [i_3 - 1] [i_3];
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_4] [i_3] = var_8;
                    arr_21 [i_3] [14] [i_5] [i_3] = (arr_2 [i_3 + 1]);

                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_3 + 2] [i_3] = (((arr_14 [i_3 + 2] [i_5]) ? var_14 : (arr_14 [i_3 - 2] [i_3 - 2])));
                        arr_25 [0] [i_4] [i_4] [i_5] [i_3] = (((arr_6 [i_3 + 1] [i_3] [i_3 + 2]) ? var_9 : (arr_6 [i_3 - 1] [i_3] [i_3 + 2])));
                        arr_26 [i_3] [i_3] [i_3] = (((arr_10 [i_3] [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_16 [i_3 - 2]) : (arr_16 [i_3 - 2])));
                        var_16 = (max(var_16, (arr_0 [i_4])));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_3] = ((((((arr_16 [i_3]) ? 22314 : 1568340070236200135))) ? (arr_2 [i_3 + 1]) : var_10));
                        arr_31 [i_3] [i_4] [i_3] [i_4] &= (((arr_1 [i_4]) ? ((41375 ? var_3 : 6189101805800035836)) : (arr_10 [i_4] [i_5] [i_4] [i_4])));
                        var_17 = var_3;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_3] [i_4] [i_4] [i_5] [2] = (((arr_3 [i_3] [i_3 - 2]) ? var_13 : ((var_3 ? var_13 : var_0))));
                        var_18 = (var_3 ? (arr_18 [i_3] [i_4] [i_3] [i_8]) : var_12);
                        arr_35 [i_4] [7] [6] [i_3] [i_4] = (((((var_7 ? (arr_5 [i_8] [i_4] [i_3]) : (arr_22 [i_3] [i_3] [i_5] [i_3])))) ? var_1 : var_9));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_40 [i_3] [i_4] [i_4] [10] [i_4] &= (arr_1 [i_4]);
                            var_19 = (max(var_19, (((((arr_39 [2] [10] [i_5] [13] [i_9] [i_9]) ? (arr_29 [i_4]) : var_4))))));
                        }
                    }
                }
            }
        }
        var_20 = var_5;
        var_21 = (((var_8 ? var_1 : var_8)));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            var_22 = (((arr_19 [i_10 + 2]) ? (arr_29 [i_10]) : (arr_42 [i_10] [i_11 - 2])));
            arr_48 [i_10] = (((arr_27 [14] [i_11] [i_11 - 1]) ? var_5 : 0));
            arr_49 [i_10] [i_10] [6] = (((arr_19 [i_10 + 1]) ? (arr_19 [i_10 - 2]) : 4193257332));
        }
        arr_50 [i_10] = (((arr_27 [i_10] [4] [i_10]) ? var_1 : var_7));
        arr_51 [i_10] = var_11;
        arr_52 [i_10] [1] = (arr_36 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 + 2]);
        arr_53 [i_10 - 2] [i_10] = var_14;
    }
    for (int i_12 = 3; i_12 < 24;i_12 += 1)
    {
        arr_57 [i_12] = (arr_55 [i_12] [i_12 - 3]);
        arr_58 [i_12 - 2] [i_12] = var_14;
        var_23 += (arr_55 [18] [i_12 - 1]);
    }
    var_24 = (((((48 ? 10901507988495124992 : 1))) ? var_10 : var_13));
    var_25 = var_13;
    #pragma endscop
}
