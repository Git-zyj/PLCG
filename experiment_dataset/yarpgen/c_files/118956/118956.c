/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 *= (((~(((arr_2 [i_0]) ? var_6 : (arr_1 [14]))))));
        var_16 = (max(var_16, var_7));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((-((~(arr_5 [i_1] [12])))));
        arr_7 [8] &= min((~16031), (arr_2 [i_1 - 1]));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 = (arr_0 [i_1]);
            arr_12 [i_1] [i_1 + 1] [12] = (((arr_3 [i_1]) ? var_8 : (arr_3 [i_1])));
            arr_13 [i_1] = var_9;
            var_18 = (min(var_18, (((-(arr_2 [i_1 + 1]))))));
            var_19 = 10;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_20 = (max(var_20, (((~((-(arr_9 [16] [i_1 + 1]))))))));
            arr_16 [i_1] [i_1] [i_1] = (((((65526 ? ((-(arr_11 [i_3]))) : -var_11))) ? (((min((arr_14 [i_1 + 1] [i_1 - 1]), (arr_14 [i_1 + 1] [i_1 + 1]))))) : (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : var_9))));
        }
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = (min(((min((arr_0 [i_4]), (arr_1 [i_4 - 1])))), (min(var_8, (arr_1 [i_4 - 1])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    {
                        var_21 = ((32764 << (65535 - 65535)));
                        arr_31 [i_4] [i_5] [i_6] = (((~var_4) && var_12));
                    }
                }
            }
        }
        var_22 = arr_22 [i_4 - 1] [3];
    }

    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        arr_35 [4] = ((32743 ? ((~(arr_34 [i_8 + 2]))) : (((arr_34 [i_8 - 1]) - (arr_34 [i_8 + 2])))));
        arr_36 [i_8] [9] = var_9;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_49 [i_10] [i_10] [i_10] [i_12] = (((arr_23 [i_9] [i_9] [i_10]) ? (arr_48 [0] [i_10] [0] [i_12] [i_11]) : -32744));
                        var_23 = (((arr_41 [11] [i_10]) || (arr_3 [i_10])));
                        arr_50 [i_10] [i_10] [i_11] [0] [8] = (arr_43 [i_11] [i_10]);
                        var_24 -= (arr_48 [i_9] [i_10] [i_11] [i_12] [i_12]);
                    }
                }
            }
        }
        var_25 = (((arr_25 [i_9] [24] [i_9]) & var_7));
    }

    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_26 = (((arr_52 [1] [15]) ? var_12 : (((arr_54 [i_13]) ? (arr_0 [i_13]) : (~5763025096543438894)))));
        var_27 = (min(var_27, (((((~0) ? (arr_15 [i_13]) : (arr_25 [i_13] [4] [i_13])))))));
        arr_55 [i_13] = ((((min((arr_25 [i_13] [i_13] [i_13]), (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (((var_1 ? (arr_51 [i_13] [i_13]) : (arr_22 [i_13] [i_13])))) : ((((arr_23 [i_13] [i_13] [i_13]) ? (arr_5 [i_13] [i_13]) : var_12)))));
        arr_56 [i_13] = (((((arr_4 [i_13] [i_13]) ? (arr_4 [i_13] [i_13]) : (arr_4 [i_13] [i_13]))) & (((arr_4 [i_13] [i_13]) ? var_6 : (arr_4 [i_13] [i_13])))));
    }
    for (int i_14 = 4; i_14 < 23;i_14 += 1)
    {
        var_28 = (min(var_28, (((min((arr_0 [i_14]), (arr_0 [i_14])))))));
        var_29 = (min(((!(arr_2 [i_14 + 1]))), (((arr_26 [i_14 - 4] [i_14] [i_14] [5]) && (arr_2 [i_14 - 4])))));
    }
    #pragma endscop
}
