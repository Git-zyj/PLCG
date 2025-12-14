/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (((-(arr_1 [i_0]))));
        arr_4 [10] = var_16;
        arr_5 [i_0] = ((-(arr_0 [i_0])));
        arr_6 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] = ((~(arr_8 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((var_8 ? (arr_7 [i_1]) : (max((arr_7 [i_3]), var_10))));
                    arr_18 [i_2] [i_2] = ((~((max((((!(arr_16 [i_1] [i_2] [i_1] [i_1])))), (arr_11 [i_1] [i_2] [i_3]))))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_3] [i_2] [i_4] = (arr_20 [i_1] [i_2] [i_1] [i_1] [i_2]);
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = var_13;
                        arr_23 [i_1] [i_2] [i_2] [i_2] &= (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_7 [i_1]) ? ((max((arr_24 [i_1] [i_1] [i_1] [i_1]), var_6))) : (arr_10 [i_3] [i_3] [i_1])));
                        arr_28 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] &= (((((~(arr_7 [i_3])))) ? (arr_25 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2]) : (max((arr_10 [i_1] [i_1] [i_1]), (arr_8 [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_31 [i_6] = (arr_8 [i_3]);
                        arr_32 [i_1] [i_3] = (arr_0 [i_2]);
                        arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = min((((!(((~(arr_1 [i_2]))))))), (min((arr_24 [i_6] [i_3] [i_2] [i_1]), (arr_24 [i_1] [i_2] [i_6] [i_3]))));
                    }
                    arr_34 [i_1] [i_1] |= (arr_30 [i_1] [i_1] [i_1]);
                }
            }
        }
        arr_35 [i_1] [i_1] = (arr_1 [i_1]);
    }
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        arr_38 [i_7 - 4] = (min(((min((arr_37 [i_7 - 4]), (arr_36 [i_7 - 4])))), ((-(arr_36 [i_7 - 4])))));
        arr_39 [i_7] = ((+(((arr_36 [i_7 + 1]) ? (arr_36 [i_7 - 4]) : (arr_36 [i_7 + 3])))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                {
                    arr_48 [i_9] [i_9 - 3] [i_9] = max((((!(arr_43 [i_9 - 3] [i_9 - 2])))), (arr_45 [i_8] [i_8] [i_8]));
                    arr_49 [i_9 + 2] [i_9 - 3] [i_9 + 2] [i_10] = ((~(arr_40 [i_9 + 1] [i_10 + 2])));
                    arr_50 [i_10] [i_10] [i_10] [i_10] &= (((((-(!var_14)))) ? ((-((-(arr_40 [i_8] [i_8]))))) : ((min((arr_47 [i_10] [i_10 + 3] [i_10 + 1]), (arr_45 [i_10] [i_10 - 1] [i_10 - 2]))))));
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_54 [i_11] [i_11] = (arr_53 [i_11] [i_11]);
        arr_55 [20] &= (arr_52 [i_11]);
    }
    for (int i_12 = 1; i_12 < 24;i_12 += 1)
    {
        arr_58 [i_12] [i_12] = (max((~var_16), ((+(((arr_57 [i_12] [i_12 - 1]) ? (arr_56 [i_12]) : (arr_57 [i_12] [i_12])))))));
        arr_59 [i_12] = ((((max((~var_1), (arr_57 [i_12] [i_12])))) ? (arr_57 [i_12] [i_12]) : ((~(arr_56 [i_12])))));
        arr_60 [i_12] [i_12] = max((((!(((var_11 ? (arr_57 [i_12] [i_12]) : var_8)))))), (max((min((arr_56 [i_12]), var_16)), var_7)));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        arr_64 [i_13] = (((arr_57 [i_13] [i_13]) ? (arr_61 [i_13 + 1]) : (arr_61 [i_13 + 1])));
        arr_65 [10] [10] &= var_12;
    }
    for (int i_14 = 1; i_14 < 18;i_14 += 1)
    {
        arr_70 [4] &= (arr_63 [i_14 + 2] [i_14 + 2]);
        arr_71 [i_14] = (max((max((arr_53 [i_14 + 1] [i_14]), (arr_53 [i_14] [i_14 + 1]))), (((!(arr_53 [i_14 + 1] [i_14 - 1]))))));
        arr_72 [10] [10] &= var_11;
    }
    var_18 = (max(var_6, ((-((var_9 ? var_14 : var_11))))));

    /* vectorizable */
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        arr_76 [i_15 - 1] = ((-((var_1 ? (arr_74 [i_15]) : (arr_73 [i_15])))));
        arr_77 [i_15] = (arr_56 [i_15]);
    }
    #pragma endscop
}
