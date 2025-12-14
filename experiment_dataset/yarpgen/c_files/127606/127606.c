/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((!((max((~1048576), var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_14 = 1048579;
                            arr_14 [i_1 - 2] [i_0] [i_4] = -var_10;
                            arr_15 [i_0] [i_4] [i_2] [i_2] = (arr_4 [i_1 - 1] [i_3 - 1] [i_3 - 1]);
                        }
                    }
                }
            }
            arr_16 [i_0] = (arr_13 [i_1 + 4] [4] [i_0] [i_1 + 4] [i_1 + 4]);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_15 = 10;
                arr_19 [i_0] [i_0] [i_0] = ((((((arr_11 [i_5] [i_5] [i_1] [i_5] [i_5] [i_5] [i_5]) ? (arr_10 [i_5]) : (arr_7 [i_5] [i_0] [i_0] [i_0])))) < (arr_3 [i_1 + 2])));
                arr_20 [i_0] [i_1 - 1] [i_1 - 2] [i_0] = (((var_5 ? var_4 : -24413)));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_25 [i_0] [i_0] [i_0] = arr_22 [i_0] [i_1] [i_1];
                arr_26 [i_1] [i_0] = (arr_1 [i_0]);
                arr_27 [i_0] [10] [i_0] [i_0] &= var_12;
            }
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                var_16 = 1;
                var_17 = ((-(arr_29 [i_1 - 1])));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_33 [i_0] = (((arr_10 [i_0]) ? (arr_10 [i_8]) : (arr_10 [i_0])));
            var_18 += var_0;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_38 [i_0] [i_0] = (((((!(((1048576 ? 1 : var_11)))))) >= ((var_10 ? (var_3 == var_2) : ((-(arr_0 [i_9])))))));
            arr_39 [i_0] [i_9] = (arr_36 [1] [i_9]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_43 [6] |= (((((var_10 ? var_6 : 1))) ? ((~(arr_4 [i_0] [i_0] [i_0]))) : ((~(arr_34 [4])))));
            var_19 ^= ((arr_4 [i_0] [i_0] [i_10]) || (arr_4 [i_0] [i_10] [i_10]));
        }
        var_20 = (max(var_20, var_1));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            {
                arr_50 [1] [i_11] = ((((((arr_1 [i_11]) ? ((var_2 ? (arr_17 [i_12] [1] [i_12] [i_12]) : (arr_22 [i_12] [i_12] [i_12]))) : (((1 ? 1 : (arr_30 [i_11] [i_12]))))))) ? ((((((0 ? -18334 : (arr_41 [i_11])))) ? (min((arr_4 [i_12] [i_12] [i_11]), var_4)) : (arr_2 [i_12] [i_12])))) : ((-((-11802 ? (arr_18 [i_11] [i_11] [i_11] [i_12]) : (arr_0 [i_12])))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_21 -= (((!16747468384863177470) ? ((((var_7 ? (arr_49 [i_12] [i_11]) : (arr_18 [i_13] [i_11] [i_13] [i_14]))) + (min((arr_46 [i_12]), var_5)))) : ((594386959931942789 ? 1 : (1 & 18446744073709551615)))));
                            var_22 -= (((((!1) + ((266338304 ? (arr_9 [i_13] [i_12] [i_12] [i_11]) : var_7)))) < -var_10));
                            arr_55 [i_14] = ((max(var_7, (((!(arr_22 [i_14] [5] [i_13])))))));
                        }
                    }
                }
                arr_56 [1] = ((64 || (arr_12 [i_12] [i_12] [i_12] [i_11] [6] [i_12])));
                arr_57 [i_11] [i_12] = ((((((arr_47 [i_12]) ? (arr_47 [i_12]) : (arr_47 [i_12])))) ? (arr_47 [i_11]) : (!32759)));
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
