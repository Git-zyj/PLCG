/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_1) != var_2));
    var_21 = var_0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (max(var_22, (((arr_2 [i_0 + 1]) ? ((((arr_0 [8]) || (((var_4 ? (arr_2 [i_0 - 1]) : var_4)))))) : ((-(((!(arr_0 [8]))))))))));
        var_23 *= (min(((var_7 ? (arr_2 [i_0 - 1]) : var_17)), ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))))));
        arr_3 [i_0] [i_0 - 1] = ((((var_7 ? (arr_0 [i_0]) : var_1)) / var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = var_13;

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            var_24 = (min((((arr_11 [i_1] [i_0] [i_1] [i_2 - 2]) ? (arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]) : (arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))), (((arr_6 [i_0 - 1] [i_1] [i_2 - 2] [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_0]) : (arr_6 [i_0] [i_2 - 2] [i_1] [i_0])))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_14 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_1]) ? (((arr_14 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4 - 3] [i_4] [i_3]) + (arr_14 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 2] [i_3] [i_3]))) : (arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 4] [i_3] [i_3])));
                            var_25 = (((((arr_7 [i_0] [i_2 - 2] [i_0]) / var_9)) * (arr_6 [i_2 + 1] [i_2 - 1] [i_2] [i_0])));
                        }
                    }
                    var_26 -= (min((arr_1 [i_2]), (((!(arr_7 [i_0] [i_0 + 1] [i_2]))))));
                    arr_16 [i_0] = var_11;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_27 = (min(var_27, (((+(((arr_18 [i_5] [i_6 + 1]) ? var_6 : (arr_18 [i_5] [i_6 + 1]))))))));
            var_28 = ((var_11 > (arr_18 [i_6 + 1] [i_6 + 1])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 *= (((var_6 << (((arr_21 [i_6 - 1] [6] [i_6 - 1] [i_7]) - 182)))));
                var_30 = var_2;
                arr_23 [i_5] [i_7] [i_7] = var_18;
                var_31 = var_0;
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                arr_28 [i_8] [i_6] [i_8] = (arr_25 [i_5] [i_6] [i_8 + 2] [i_8 - 1]);
                arr_29 [i_8] [i_5] [i_6] [i_8] = ((~(arr_25 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_36 [i_5] [i_6 + 1] [i_8] [i_8] [i_9] [i_10 + 1] = (((arr_18 [i_6] [i_8 + 2]) ? (arr_20 [i_5]) : (arr_27 [i_8] [i_8])));
                            var_32 = ((-(arr_18 [i_10 + 2] [i_6 - 1])));
                        }
                    }
                }
                arr_37 [i_8] [i_8] [i_8] [i_5] = ((~(arr_27 [i_6 + 1] [i_8])));
            }
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                var_33 -= ((!(arr_39 [i_11 - 1] [i_6 - 1])));
                arr_41 [i_5] [i_6 + 1] [i_11] = -var_13;
            }
            arr_42 [i_5] = (((!var_9) ? (arr_26 [i_6 + 1] [i_5] [i_5]) : (((arr_27 [12] [12]) ? (arr_31 [i_6 - 1] [i_5]) : (arr_31 [i_6 + 1] [i_5])))));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 20;i_13 += 1)
            {
                {
                    var_34 = var_13;
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_35 = (((((arr_26 [i_13 - 1] [i_13 - 1] [i_13]) ? (arr_26 [i_13 - 1] [i_13 - 2] [i_13 - 2]) : (arr_26 [i_13 - 2] [i_13 - 2] [i_5]))) >= ((-(arr_26 [i_13 - 1] [i_13 + 1] [i_13])))));
                                var_36 = (min(var_36, ((var_13 ? (arr_44 [i_14 - 1] [i_15 - 3]) : (arr_44 [i_14 - 4] [i_15 - 3])))));
                                var_37 -= var_10;
                            }
                        }
                    }
                }
            }
        }
        var_38 = ((!(arr_20 [i_5])));
        var_39 = (~var_5);
        var_40 = ((+((((((arr_27 [i_5] [2]) ? (arr_22 [i_5] [0] [i_5]) : (arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((!(arr_17 [i_5])))) : (arr_24 [i_5])))));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        var_41 = (((arr_26 [i_16] [i_16] [i_16]) ? (arr_26 [i_16] [i_16] [i_16]) : ((min((arr_26 [i_16] [i_16] [i_16]), (arr_26 [i_16] [i_16] [i_16]))))));

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_55 [i_17] = (((((~(arr_8 [i_16] [i_17] [i_16] [i_16])))) ? ((var_13 ? (arr_51 [i_16] [i_16]) : (arr_25 [i_16] [i_16] [i_17] [i_17]))) : (arr_25 [i_16] [i_17] [i_16] [i_17])));
            var_42 = (((arr_32 [i_16]) ? (((arr_2 [i_17]) ? ((var_9 ? var_11 : var_3)) : var_7)) : (arr_40 [i_17] [i_16])));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_65 [i_18] [i_17] [i_17] [i_17] [i_17] [i_17] = (arr_21 [i_20] [i_18] [i_18] [i_16]);
                            arr_66 [i_16] [i_17] [i_18] [i_18] [i_16] [i_20] = (max(((~(arr_13 [i_17] [i_18] [i_18]))), ((max((arr_58 [i_16] [i_16]), (arr_58 [i_17] [i_19]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
