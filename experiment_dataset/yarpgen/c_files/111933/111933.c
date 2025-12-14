/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_8, (((!(((arr_1 [i_0]) >= (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((~(((arr_0 [i_0]) + (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = ((+((var_1 ? (arr_3 [i_0] [i_1] [i_1]) : (max(var_3, var_8))))));
            var_18 += ((-((max((arr_4 [i_0] [i_1]), (arr_3 [12] [i_1] [1]))))));
            arr_6 [i_1] = (((-(arr_0 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((-((max((arr_9 [i_0]), (arr_9 [i_0]))))));
            var_19 = (~8190);
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 += ((-(arr_4 [i_3] [i_3])));
        arr_13 [i_3] = ((((((((var_8 ? var_8 : var_6)) / var_14)) + 9223372036854775807)) >> (((!((((arr_0 [i_3]) ? var_14 : (arr_3 [i_3] [i_3] [i_3])))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = (((var_11 + 9223372036854775807) >> (((arr_1 [i_4]) - 62677))));
        var_21 += (((arr_14 [i_4] [1]) << (var_12 - 554)));
        var_22 *= (((arr_12 [i_4]) < (arr_11 [i_4] [i_4])));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_27 [i_6] [i_7] [i_6] = (max(((((arr_21 [i_5 - 2] [i_5 - 2] [i_5]) < (arr_26 [i_5] [i_7] [i_5] [i_5])))), (((min(12288, -12301))))));
                        var_23 = ((((min((arr_4 [i_5 - 1] [i_6]), (arr_17 [i_5 - 1])))) || ((((arr_4 [i_5 + 1] [i_6]) | (arr_4 [i_5 - 2] [7]))))));
                    }
                }
            }
        }
        arr_28 [i_5] = arr_3 [i_5] [i_5 - 1] [i_5];
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_24 += ((-(arr_7 [i_9 + 2] [i_5 - 2])));
                                arr_39 [i_5] [i_5] [7] [i_12] [i_12] &= (((arr_21 [i_5] [i_9 - 1] [i_10]) ? (arr_11 [8] [i_10]) : (min(8820053903434949582, 1))));
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_25 = (max((max((arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 1]), (arr_34 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_13] [0] [0]))), (((max(var_4, var_5)) | ((((arr_3 [i_13] [i_9] [i_13]) + (arr_26 [i_5] [i_5] [i_5] [i_5 + 1]))))))));
                        var_26 += (min(((((var_6 & (arr_33 [i_13] [12] [12] [8]))) | (arr_38 [i_5 - 1] [i_5] [1] [i_13] [i_5] [12]))), (arr_40 [i_10 + 1] [i_10 + 2] [i_10 - 1])));
                        var_27 = ((((min((arr_37 [i_9 + 2] [i_9 - 1]), (arr_37 [i_9 - 3] [i_9 + 1])))) ? (min(var_13, (arr_37 [i_9 + 2] [i_9 - 2]))) : ((-(arr_37 [i_9 + 1] [i_9 + 1])))));
                    }
                }
            }
        }
        arr_42 [i_5] = (((max((~-8820053903434949578), ((min(var_7, (arr_31 [i_5] [i_5 - 2] [i_5])))))) >= (((+(max((arr_8 [i_5 - 2] [i_5 - 2]), var_3)))))));
        arr_43 [i_5] = (((arr_1 [i_5]) ? (!var_5) : (min((min(var_3, (arr_29 [i_5 - 2] [7]))), (arr_24 [i_5] [i_5] [i_5] [i_5])))));
    }

    /* vectorizable */
    for (int i_14 = 3; i_14 < 11;i_14 += 1)
    {
        arr_47 [i_14] [i_14] = (((var_2 | (arr_46 [i_14]))));
        var_28 &= (arr_44 [i_14 + 2]);
        var_29 -= (arr_44 [i_14 - 3]);
        var_30 += (arr_45 [i_14 - 3] [12]);
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_31 += (max((arr_4 [i_15] [i_15]), ((((((var_4 ? var_14 : (arr_32 [i_15] [i_15] [i_15])))) >= var_11)))));
        arr_50 [i_15] = (max((var_3 / 17410903325804089779), ((((max((arr_12 [i_15]), var_13))) ? (min((arr_32 [i_15] [i_15] [i_15]), var_0)) : (((-(arr_11 [i_15] [i_15]))))))));
    }
    #pragma endscop
}
