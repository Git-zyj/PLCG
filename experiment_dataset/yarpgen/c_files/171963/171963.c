/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? (((((var_0 ? var_2 : var_3))))) : (((((var_10 ? var_8 : var_2))) ? var_8 : (((1 >> (594935924150585042 - 594935924150585040))))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0 - 1] [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = ((min((arr_1 [i_0 + 2] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 + 2]))));
            arr_7 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_0 - 2]);
            arr_8 [i_0] [i_1] = (((((var_5 ? (max((arr_5 [i_0] [i_0] [i_1]), (arr_4 [i_0]))) : ((var_9 ? var_6 : (arr_1 [8] [i_1])))))) ? (max((max(var_1, var_6)), var_7)) : var_3));
        }
        arr_9 [i_0] = (min((min((max(var_1, (arr_0 [i_0]))), (arr_4 [i_0]))), (arr_1 [i_0 + 1] [i_0 - 2])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_13 = ((-121 ? 1 : 182));
                        var_14 = (max(var_14, (var_3 < var_0)));
                        var_15 += (((var_0 ? (arr_1 [8] [i_4]) : (arr_11 [i_2]))));
                        var_16 *= ((~(arr_14 [i_0 + 2])));
                    }
                }
            }
            arr_17 [i_2] [i_0 - 4] = (arr_1 [i_0] [i_2]);
            arr_18 [i_0 - 1] [i_2] [i_2] = (arr_15 [i_0] [12] [18] [i_0]);
            var_17 = (((arr_6 [i_0] [0]) ? var_3 : (arr_13 [i_0 + 2] [i_2] [i_2])));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_18 *= (max(((max((arr_19 [i_0 - 3] [i_0 - 3] [i_5]), var_7))), (min(var_6, var_6))));
            var_19 = (arr_5 [i_0 - 1] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_25 [15] = ((((((arr_23 [i_0 + 2] [i_6] [i_6]) >> (((arr_20 [2]) - 8048219169784713393))))) ? (var_2 + var_10) : var_10));
            var_20 = (max(var_20, ((((((var_5 ? (arr_1 [i_6] [i_0]) : (arr_13 [i_0 - 2] [i_0 - 2] [i_6])))) ? var_7 : var_2)))));
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            arr_28 [i_7] = (arr_1 [i_0 - 1] [i_0]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_38 [i_0] [i_8] [i_9] [i_7] = (min((max((min((arr_22 [i_0 + 1] [i_8] [i_0 + 1]), var_4)), (arr_16 [i_7 + 1] [i_0 - 4] [i_0 - 4]))), var_4));
                            arr_39 [i_10] [i_7] [i_8] [i_7] [i_0 + 1] = var_0;
                            var_21 = (arr_21 [i_0 + 1] [i_0 + 1] [i_8]);
                            arr_40 [i_0 - 4] [i_7] [i_0 - 4] [i_0 - 4] [i_0] = var_7;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            {
                arr_47 [2] [1] = var_4;
                arr_48 [i_11] [i_11] [i_12] = ((~(arr_5 [i_12 + 1] [i_12 - 1] [9])));
                arr_49 [i_11] = (((var_7 || 4056033289153542875) ? -var_5 : (((arr_46 [i_12 + 1] [i_12 + 1]) ? (arr_46 [i_12 + 1] [i_12]) : (arr_46 [i_12 + 1] [i_12])))));

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        var_22 = (min(var_22, (min(var_5, (((arr_31 [i_14] [i_14 + 1] [i_14] [i_14] [i_12 - 1]) ? var_5 : (arr_31 [i_14 + 1] [i_14 + 1] [i_12] [i_12] [i_12 - 1])))))));
                        arr_55 [i_11] [i_14] [i_13] [i_11] [i_14] = (max((((var_9 ? var_1 : var_8))), (((var_3 * ((((!(arr_44 [i_11] [i_13] [6]))))))))));
                        var_23 += -32;
                        var_24 = (min(var_24, (((((var_9 ? (arr_29 [i_11] [i_12 - 1] [i_13] [i_14 + 2]) : var_5)) * (((((arr_0 [i_13]) ? (arr_45 [i_11] [0] [5]) : var_10)))))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_58 [i_11] [2] [i_13] [i_12] [i_12] [i_12] = ((((var_5 ? (arr_41 [i_13]) : (arr_50 [i_11] [i_12] [9] [i_15]))) <= (arr_0 [i_11])));
                        var_25 ^= var_8;
                        var_26 = (var_0 % var_5);
                        var_27 = ((var_1 ? (arr_12 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_12 [i_12 + 1] [i_12 - 1] [i_12 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_65 [i_11] [i_11] [i_11] [6] [6] [i_11] &= ((((((arr_50 [i_12] [2] [i_16] [i_17]) ? (arr_46 [i_11] [i_16]) : (max(var_2, var_2))))) ? ((((arr_24 [i_16]) ? 1 : var_8))) : ((var_1 ? var_3 : (max((arr_1 [i_11] [i_11]), (arr_15 [i_12] [11] [1] [1])))))));
                                var_28 = (((max((arr_62 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17] [i_17]), (arr_63 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17] [0])))) ? ((((var_6 >> (((arr_50 [i_11] [i_12] [i_13] [i_17 + 1]) - 867458688901316265)))))) : (max((arr_23 [i_12] [i_12 - 1] [i_17 - 1]), var_0)));
                                var_29 = ((var_6 ? 2286987495027855373 : (arr_16 [i_11] [i_13] [i_11])));
                            }
                        }
                    }
                    var_30 = (max(var_30, ((((((arr_62 [i_11] [10] [i_13] [i_13] [1]) ? var_9 : (arr_64 [i_11] [i_12] [2] [i_13] [i_13]))))))));
                }
                var_31 += -21650;
            }
        }
    }
    #pragma endscop
}
