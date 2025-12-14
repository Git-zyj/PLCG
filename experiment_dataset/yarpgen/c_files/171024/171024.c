/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_0 [i_0] [i_0])))) ? 0 : (arr_0 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9));
        arr_4 [i_0] = var_4;
        arr_5 [i_0] [i_0] = (((((0 ? 1 : (arr_1 [i_0])))) || ((((arr_1 [i_0]) / 386914249)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = -3530394068;
        arr_9 [i_1] [i_1] = (max((arr_7 [i_1] [1]), (max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_11 = (((((~(arr_7 [i_2] [i_3])))) ? (arr_10 [i_2]) : ((~(arr_7 [i_2] [i_2])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] = (arr_19 [i_2] [i_2] [i_2] [i_2]);
                            var_12 = (min(var_12, ((((arr_17 [i_2] [i_4] [i_3] [10]) ? (((arr_0 [i_4] [10]) ? (arr_6 [i_4]) : 29594)) : (((arr_16 [i_2]) ? 86 : 179)))))));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [1] = (((((1 ? (arr_10 [3]) : (arr_11 [i_6])))) && 11619));
                            var_13 = (min(var_13, (((-3622 / ((1 ? 3622 : (arr_12 [i_6] [i_5] [i_4]))))))));
                        }
                        arr_26 [i_2] [5] [i_4] = (+((var_6 ? (arr_0 [i_3] [i_3]) : -3622)));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_14 = (max(var_14, ((((arr_21 [i_2] [i_2] [8] [i_7] [8] [i_7]) ? (arr_13 [i_2]) : (arr_19 [i_7] [0] [i_2] [i_2]))))));
            arr_30 [i_2] = ((16524 ? 38352 : -607));
            var_15 = ((~((-(arr_6 [i_7])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {
                        var_16 = (min(var_16, (((((((arr_15 [i_2] [3] [i_7] [3]) ? 764573213 : var_4))) ? ((var_9 ? 1 : (arr_29 [i_2] [i_2]))) : (179 || -3622))))));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_17 = (min(var_17, 764573234));
                            var_18 += (((arr_23 [i_9 + 1]) ? (arr_23 [i_9 + 1]) : (arr_23 [i_9 - 1])));
                            arr_41 [6] [6] [i_8] [i_8] = (((((29994 / (arr_17 [i_10] [i_2] [i_2] [i_2])))) ? (arr_15 [i_9 + 1] [i_9 - 1] [i_9 + 1] [10]) : (((arr_31 [i_10] [i_2] [i_2] [i_2]) ? 1 : 48996))));
                        }
                    }
                }
            }
            arr_42 [i_2] [i_2] [i_2] = (arr_35 [i_7] [i_2]);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_52 [i_11] [i_11] [i_11] [4] [i_11] = var_6;
                            var_19 = 66;
                        }
                    }
                }
                arr_53 [i_11] = (((arr_31 [i_2] [8] [i_2] [i_12 + 1]) ? (arr_31 [i_12] [i_11] [i_12] [i_12 - 2]) : -3624));
                var_20 = (((arr_14 [i_12 + 1]) ? (arr_14 [i_12 - 2]) : (arr_14 [i_12 + 1])));
            }
            var_21 = (!16702853870671395377);
        }
        var_22 -= (((((arr_15 [i_2] [i_2] [i_2] [i_2]) < (arr_47 [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (!1) : ((66 ? -1 : -25))));
        var_23 = (((arr_28 [i_2] [i_2]) / (!0)));
    }
    var_24 ^= (!713394909);
    #pragma endscop
}
