/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = ((~((~(arr_1 [15] [i_0])))));
        var_14 = (((-(min(var_8, 15390223515518061298)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_15 ^= ((min((~var_9), -var_4)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [i_1] [3] [i_3] [i_1] = ((!((min((arr_6 [i_1]), 32767)))));
                    var_16 -= (((arr_4 [i_1] [i_3 - 3]) ? var_9 : var_9));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = var_12;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_17 = var_9;
                    var_18 = (max(var_18, (((!((max((arr_17 [i_5 - 3] [i_5 + 2]), (arr_17 [i_5 + 1] [i_5 + 2])))))))));
                    var_19 = ((!(((~(arr_14 [i_5 - 2] [i_5 - 2]))))));
                }
            }
        }
        var_20 = (max(var_20, ((((((1040187392 ? -32760 : var_1))) ? ((68 ? (arr_5 [i_4] [i_4] [10]) : (arr_5 [i_4] [i_4] [i_4]))) : (min((arr_6 [i_4]), (arr_4 [i_4] [i_4]))))))));

        /* vectorizable */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
            {
                var_21 = (arr_5 [i_4] [16] [i_8]);
                arr_25 [i_4] [i_7] = (!1);
                var_22 = (max(var_22, (((~(arr_20 [i_4] [i_4] [12] [18]))))));
            }
            for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_32 [6] [2] [i_7 - 2] [i_10] [2] [i_10 + 1] = ((!(arr_7 [i_7 - 1] [20] [i_9 + 1])));
                    var_23 = (arr_17 [i_4] [i_7]);

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_36 [i_4] [20] [i_11] [i_9] [i_10] [i_11] &= ((!(arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 2])));
                        arr_37 [i_4] [i_10] [i_7] [i_4] [i_9] [i_10 + 2] [i_11] = (arr_26 [i_11] [i_10 + 1] [0] [i_10]);
                        arr_38 [i_4] [i_10] [i_10] |= (arr_33 [i_7] [i_7 - 1]);
                        arr_39 [i_4] [i_7 + 1] [6] [i_4] [i_10] [i_4] |= (arr_9 [i_7] [4]);
                    }
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    arr_43 [i_4] [i_7 - 2] [i_9] [i_9] [i_12] &= (((arr_1 [i_4] [i_7 + 1]) ? (arr_1 [13] [i_7 + 1]) : (arr_1 [i_4] [i_7 + 1])));

                    for (int i_13 = 3; i_13 < 20;i_13 += 1)
                    {
                        var_24 ^= ((var_9 ? (arr_18 [i_7 + 1] [i_7 + 1]) : (arr_18 [i_7 - 1] [i_7])));
                        var_25 = (max(var_25, (((!(((var_11 ^ (arr_17 [18] [i_4])))))))));
                        var_26 ^= -32760;
                        var_27 = var_4;
                        var_28 -= ((~(arr_5 [i_4] [i_4] [i_4])));
                    }
                    var_29 &= ((var_1 ? (arr_17 [i_4] [i_4]) : (arr_46 [i_9] [i_9 - 2] [i_7 - 2])));
                    var_30 ^= -1;
                }
                for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_31 = var_11;
                    var_32 = ((-(~var_5)));
                    var_33 = var_2;
                }
                for (int i_15 = 1; i_15 < 21;i_15 += 1)
                {
                    var_34 = (max(var_34, -32767));
                    arr_52 [i_7] [4] = 15;
                    arr_53 [i_7] [i_15] = ((var_1 && (arr_28 [i_15 + 1])));
                }
                var_35 = (max(var_35, ((((arr_35 [i_4] [i_7] [i_4] [i_9 + 1] [i_4]) || var_4)))));
                arr_54 [i_4] = (!(arr_48 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_9 + 1]));
            }
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {

                        for (int i_18 = 2; i_18 < 19;i_18 += 1)
                        {
                            var_36 = 216;
                            var_37 = (max(var_37, 3244090221237912265));
                            arr_64 [i_17] = (~(arr_18 [i_7 - 2] [16]));
                        }
                        for (int i_19 = 2; i_19 < 20;i_19 += 1)
                        {
                            arr_68 [i_19 + 2] [i_17] [i_16 - 1] [i_17] [i_4] = (((arr_34 [i_4] [i_17] [11] [i_7 - 1] [i_16 + 1] [i_16 + 1] [i_19 - 1]) ? (arr_34 [i_4] [i_17] [16] [i_16] [16] [i_16 + 1] [i_19 - 2]) : -1955136291));
                            arr_69 [13] [13] [i_7 + 1] [18] [13] [i_19] [i_17] = ((-((~(arr_35 [i_19] [i_17] [i_17] [i_7] [i_4])))));
                        }
                        arr_70 [i_17] = var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    {
                        var_38 = ((!(arr_31 [8] [8] [i_20] [i_7] [i_20 + 1])));
                        var_39 = 132443448;
                    }
                }
            }
            var_40 = (max(var_40, (arr_48 [i_4] [i_4] [14] [i_4])));
        }
    }
    var_41 = (max(var_41, 178));
    #pragma endscop
}
