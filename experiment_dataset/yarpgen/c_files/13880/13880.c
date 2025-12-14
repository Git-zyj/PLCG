/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_1] [i_2] [i_2] [2] = (((((var_11 ? var_3 : var_15))) ? var_13 : (arr_6 [i_2 - 3] [i_1] [2])));
                        arr_13 [i_1] [4] = ((var_15 ? ((var_13 ? var_13 : (arr_2 [i_0]))) : ((-1129919611 ? -1129919611 : 62985))));
                        var_16 *= (((((arr_10 [i_0] [i_0] [i_1] [i_2] [i_0]) ? var_15 : (arr_8 [i_0] [i_0] [i_0] [i_0]))) & (!var_8)));
                        var_17 = (max(var_17, (arr_4 [i_2 - 3] [i_2 - 4] [i_3 + 1])));
                    }
                }
            }
            arr_14 [i_1] = (((var_9 ? var_9 : (arr_10 [i_1] [i_1] [i_1] [5] [i_1]))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (((!(((1073741824 ? (arr_0 [8] [i_0]) : -1129919608))))))));
            arr_19 [2] [0] [i_4] = (((((var_12 ? (arr_18 [i_4] [i_4]) : (arr_11 [i_0] [10] [i_0] [10])))) ? (arr_5 [5] [2] [8] [i_0]) : (arr_18 [i_0] [i_4])));
            var_19 = (max(var_19, (((((arr_5 [i_0] [7] [i_4] [i_0]) ? var_2 : var_4))))));
            arr_20 [i_4] = (((arr_6 [i_0] [i_0] [i_4]) ? var_3 : (arr_5 [1] [i_0] [i_4] [i_4])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    {
                        var_20 += var_7;
                        var_21 = (arr_17 [i_6]);
                        var_22 += var_1;
                    }
                }
            }
            var_23 = -1129919611;
            var_24 = (((arr_6 [i_5] [i_5] [i_0]) ? ((~(arr_11 [i_5] [i_0] [i_5] [i_5]))) : (((arr_1 [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_11 [i_5] [0] [i_5] [i_5])))));
        }
        arr_28 [i_0] = ((((-(arr_4 [i_0] [i_0] [i_0]))) < var_2));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((min(var_1, var_3)))))));
        arr_31 [8] [i_8] = (min((max((arr_29 [i_8]), var_0)), ((min(var_3, var_0)))));

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_26 = (min(var_26, (((max((max(var_10, var_11)), var_14)) == (arr_35 [4] [2] [i_10])))));
                var_27 = (max(var_1, ((max(var_7, var_12)))));

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_39 [i_8] [i_9] [i_9] = (arr_26 [i_8] [i_9] [i_10] [i_11]);
                    var_28 = (min(var_28, var_14));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_42 [i_8] [i_10] [i_10] [i_8] [i_8] = (arr_5 [10] [10] [10] [1]);

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_45 [i_8] [i_8] [i_8] = ((545458287 ? -1129919595 : 31744));
                        arr_46 [i_13] [i_12] [0] [i_10] [6] [i_9] [i_8] = ((((var_0 ? var_5 : (arr_18 [i_12] [i_9]))) < (arr_37 [i_8] [i_9] [3] [i_10] [0] [i_9])));
                        arr_47 [i_8] [3] [i_8] [i_8] [3] [i_8] [3] &= (arr_41 [i_9] [i_12] [i_10] [i_9]);
                        var_29 = (max(var_29, ((((43 ? var_12 : 11))))));
                        var_30 += var_8;
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_31 = (arr_11 [i_9] [i_9] [i_9] [i_9]);
                        var_32 = (arr_4 [i_9] [i_10] [i_12]);
                    }
                    var_33 += var_13;
                }
            }
            arr_51 [i_8] [i_9] [i_9] = ((((max(var_5, var_1))) ^ (max(var_4, var_4))));
            var_34 = ((var_5 ? (max(((var_9 ? (arr_23 [i_8]) : var_13)), (((arr_23 [5]) ? (arr_23 [4]) : var_8)))) : (((var_5 ? (arr_48 [i_9] [i_8]) : var_4)))));
            arr_52 [i_8] = ((((arr_24 [i_8] [i_8] [i_9]) ? ((var_12 ? var_9 : var_1)) : -var_7)));
        }
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        var_35 ^= var_13;
                        arr_65 [i_15] [i_15] [i_17] [i_18] [i_16] [i_17] = ((4503599627370495 ? var_0 : (arr_64 [i_15] [i_16] [i_17] [i_18] [i_18])));
                    }
                }
            }
        }
        arr_66 [i_15] = (((((var_12 ? ((-(arr_32 [i_15]))) : -var_1))) ? (((!(arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))) : (~var_15)));
    }
    /* vectorizable */
    for (int i_19 = 1; i_19 < 9;i_19 += 1)
    {
        arr_69 [i_19] = (((((var_9 ? var_14 : (arr_44 [6] [i_19] [6] [10] [i_19])))) ? ((var_3 ? var_12 : var_10)) : (arr_5 [0] [i_19 + 2] [i_19] [i_19])));
        var_36 = (min(var_36, (((!(((var_2 ? var_0 : var_3))))))));
        var_37 -= (arr_41 [i_19 + 1] [i_19 + 2] [i_19] [i_19 + 2]);
        var_38 = (max(var_38, (((!(((arr_35 [i_19 - 1] [i_19] [5]) >= var_11)))))));
    }
    var_39 = (max(var_8, var_0));
    var_40 = (min(var_40, var_4));
    var_41 = var_9;
    #pragma endscop
}
