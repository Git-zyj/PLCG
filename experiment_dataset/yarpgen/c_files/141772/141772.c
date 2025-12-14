/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [10] |= ((~((-(max(200224440, (arr_1 [1] [1])))))));
                    var_20 = ((var_3 ? ((var_3 ? (arr_6 [i_2] [i_2 - 2] [5] [i_0 - 1]) : var_4)) : (((arr_3 [i_0 + 1]) ? -3 : (arr_3 [i_0 + 1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3 - 1] [i_3] = var_12;
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_4 + 2] [i_5] [6] [i_7] = (((49152 ^ var_13) / ((var_17 ? (arr_1 [i_5] [i_5]) : 62))));
                                var_21 = ((var_2 ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 1]) : -2266));
                                arr_25 [i_3 - 1] [i_3] [i_3] [i_3] [11] [3] [i_3 - 1] = ((var_7 ? (arr_21 [i_4] [i_4 - 2] [i_4] [i_4] [i_4] [i_4] [i_4 - 1]) : (arr_4 [i_4] [i_4 - 2] [i_4])));
                                var_22 = ((!(1 > var_11)));
                            }
                        }
                    }
                    arr_26 [i_3 + 1] [i_5] |= (((arr_1 [i_3 - 1] [i_5]) && (arr_2 [i_3 - 1] [8])));
                    arr_27 [i_4] [i_4] [i_4] [i_4] = var_8;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_23 = var_1;
        arr_32 [i_8] = (~976572383);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_41 [i_11] [11] [i_11] = (!var_19);
                arr_42 [i_9] [i_11] [i_11] = (arr_37 [18] [18]);
            }
            var_24 ^= ((-(arr_39 [i_9] [i_9] [i_9] [22])));
        }
        arr_43 [i_9] = ((var_16 >> (((((arr_31 [i_9]) ? var_12 : -4453176825086679955)) - 61837))));
        arr_44 [i_9] = (arr_38 [i_9] [i_9] [i_9] [i_9]);

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_48 [i_9] [i_9] [i_9] |= ((((((arr_38 [i_12] [i_9] [i_12] [i_9]) == var_6))) ^ (!var_12)));
            arr_49 [i_12] = var_17;
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                arr_55 [0] [i_13] = ((var_11 ? ((max(-4096, (arr_45 [i_13 - 1])))) : ((max(16361, var_8)))));
                arr_56 [i_13] [i_14] |= (min((~var_14), (((6808519310447051039 && var_5) * ((var_18 ? var_13 : var_7))))));
                /* LoopNest 3 */
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_25 = ((((((!var_1) ? ((9789 ^ (arr_51 [i_13 + 1] [i_14]))) : (((arr_31 [i_14]) | var_15))))) <= (min(var_19, (arr_53 [i_13] [i_17] [i_15])))));
                                var_26 = ((-(((!(((1 ? -32200 : 19288))))))));
                                var_27 += (min(((((min(1, var_16))) << (((arr_50 [i_13] [i_15 + 1]) + 1679689157)))), (((((-30076 ? var_12 : var_14))) ? ((1 << (((arr_46 [i_13] [i_13]) - 43914)))) : (((arr_36 [i_13]) + -445651169))))));
                                var_28 = (((~var_4) ? (max(((var_1 | (arr_63 [i_17] [i_16] [i_14] [i_14] [i_13 - 1] [1]))), (((32754 ? var_4 : (arr_52 [i_16 + 1])))))) : (((-91 ? var_19 : var_3)))));
                            }
                        }
                    }
                }
                arr_65 [i_13] [i_13] [i_13] = (((max(((6982 ? -32303 : var_11)), (arr_54 [i_13 + 1]))) >> (var_17 - 78)));
                arr_66 [i_13] [i_14] = (arr_50 [i_13 - 1] [i_14]);
            }
        }
    }
    #pragma endscop
}
