/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((1023 ? var_10 : (1002 && 1034)))) ? var_8 : var_7));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = var_12;
        arr_4 [i_0] = (max(((var_5 ? 1034 : var_11)), 207));
        arr_5 [i_0 + 2] = ((((min((max(196, 0)), (1022439235 > 762340048079753814)))) ? ((var_1 ? ((var_3 ? var_10 : var_5)) : ((var_8 ? var_12 : var_10)))) : 1034));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1] = 146;
            arr_12 [i_1 + 1] [i_1 + 1] [i_2 - 1] = (((((var_10 ? (arr_0 [i_2]) : (max(757134320, (arr_0 [i_2])))))) >= (((arr_0 [i_2 - 1]) ? var_10 : var_5))));
            arr_13 [i_2] = ((((((((var_12 ? (arr_2 [12]) : -1))) ? (((min(0, 186)))) : var_9))) ? ((((95 != 44) > 70))) : ((var_0 ? (min((arr_1 [i_1 - 1]), var_1)) : (185 * 0)))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_18 [i_1] [i_3] [i_4] = -27;
                    arr_19 [i_4 + 1] [i_4] [i_4] = ((((((var_10 - var_10) - var_4))) ? (((min(var_1, var_7)) / (var_5 || var_8))) : 0));
                    arr_20 [i_1] [i_3] [i_3] [i_4 - 2] &= (((((((max(var_2, (arr_16 [i_4 - 1] [i_4] [i_4])))) ? (((arr_10 [i_4] [i_4 - 2]) ? var_9 : (arr_1 [i_1]))) : (((70368727400448 ? 2533506292 : 4)))))) ? ((((arr_17 [i_1 + 1] [i_4 - 2]) ? (147 * var_10) : ((((arr_10 [i_1] [i_3]) % var_2)))))) : var_3));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 + 1] = ((((var_11 ^ 1) ? var_9 : (186 | var_12))));
        arr_24 [i_5] = (var_1 != var_8);
        arr_25 [i_5] = (((((((var_6 >> (var_4 + 1545866600))) >= (((173 ? 2147483647 : 108)))))) % ((((arr_21 [i_5 - 1]) && (arr_6 [i_5]))))));
        arr_26 [i_5 - 1] [i_5 - 1] = (min((min((arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 1]), var_9)), (((!(arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_30 [i_5] [i_5] [i_5] = (max(((((min(var_0, var_2))) + ((-(arr_8 [9]))))), ((((var_1 ? var_5 : (arr_28 [i_5] [i_5]))) + (min(-36682994, 146))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    {
                        arr_37 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] = max(12, 9223372036854775807);
                        arr_38 [i_8 + 4] [i_7] [i_6] [i_6] [i_5 + 1] = var_1;
                    }
                }
            }
            arr_39 [i_5] [i_5] [i_5] = (((((-1979961277 / var_12) ? ((var_1 ? var_9 : var_10)) : (((arr_36 [i_5] [7] [i_5] [8] [i_6]) / var_6)))) > ((((!(((var_0 ? var_1 : var_7)))))))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            arr_42 [i_9] = var_8;

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_46 [i_5] = (7168 < 169);
                arr_47 [i_5] [i_5 + 1] [i_5 - 1] [i_5] = ((var_8 ? var_8 : (13345 || var_8)));
            }

            for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
            {
                arr_50 [i_11] [i_11] = (-6376142210957130882 * var_2);
                arr_51 [i_11] [i_9] [i_11] = (!var_9);
            }
            for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_59 [i_14] [i_12] [i_12] [i_12] [i_5] = (-1273685859 % var_11);
                            arr_60 [i_5] [1] [i_12] [i_13] [i_14] |= ((((var_5 ? var_9 : var_5)) & var_5));
                            arr_61 [i_12] [i_9] [i_9] [i_12 + 1] [i_13] [i_13] [i_14] = arr_1 [i_13];
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    arr_64 [i_15] [i_15] [i_12] [i_15] = ((5983669036040861756 ? 224 : 1979961277));
                    arr_65 [i_15] [i_15] = var_5;
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    arr_69 [8] [i_9] [i_12] [i_12] [i_16] = var_8;
                    arr_70 [i_12] = 62431;
                }
                for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                {
                    arr_73 [i_12] [i_9] [i_5] = (((((1 ? 1 : 30876))) ? (arr_22 [i_12 + 3] [i_5 + 1]) : var_12));
                    arr_74 [i_5 + 1] [i_5 + 1] [i_5] [i_12] [i_5] [i_5] = (((arr_44 [i_5 + 1]) ? var_10 : 0));
                    arr_75 [i_5] [i_12] = ((arr_48 [i_5 - 1] [i_5] [i_12] [i_9 - 1]) ? (((arr_6 [i_5]) & var_2)) : (var_5 % var_1));
                }
                arr_76 [i_5] [i_9] [i_9] [i_12] = (((var_8 & var_8) / var_1));
                arr_77 [i_5] [i_5] [i_5 + 1] [i_12] = 1;
            }
            arr_78 [i_9] = ((var_6 / (arr_55 [i_9] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_9 - 1])));
            arr_79 [i_5 - 1] [i_5] = ((65527 ? 0 : -2853762541603608828));
        }
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
    {
        arr_82 [i_18] [i_18 + 1] = ((var_10 - (arr_80 [i_18] [i_18 + 1])));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 8;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                {
                    arr_90 [i_18] [i_18] [i_18] [i_18] = (((var_12 && var_3) - 1));
                    arr_91 [1] [1] [i_19 + 3] [i_20] = var_1;
                }
            }
        }
        arr_92 [i_18] = var_7;
        arr_93 [i_18] [i_18] &= (var_10 + 4194303);
    }
    #pragma endscop
}
