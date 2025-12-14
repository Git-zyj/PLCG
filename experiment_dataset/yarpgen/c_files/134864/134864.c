/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 -= (min(var_11, (((+((var_8 ? (arr_11 [i_1] [i_1] [i_2]) : var_6)))))));
                        var_17 |= (((arr_12 [i_0] [i_2] [i_3] [i_3]) == ((((arr_10 [i_0]) && var_12)))));
                        var_18 = (max(var_5, ((((min(var_1, var_12))) ? (~var_11) : (((~(arr_2 [i_0]))))))));
                        arr_14 [i_1] [i_1] [i_1] [0] = ((-((-(var_12 - 4150)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_19 -= (max((arr_6 [i_0] [15] [i_0]), (((var_0 + 9223372036854775807) << (((((arr_1 [i_4]) + 2150047844417740271)) - 19))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_5] [0] [i_6] = (min((arr_0 [i_0]), var_12));
                                var_20 = (min(((max((arr_0 [i_7]), (max((arr_8 [i_7] [i_4] [i_4]), (arr_21 [i_0] [i_4] [0] [i_6])))))), (max(((((arr_27 [i_6] [i_6] [i_5] [i_6] [i_5]) - var_13))), ((var_9 ? (arr_27 [i_6] [i_6] [i_0] [i_6] [i_7]) : var_0))))));
                                var_21 = (max(var_21, (((((var_15 - (max(121, 3077071124))))) - ((-var_10 ? ((var_15 ? var_0 : (arr_11 [i_0] [i_0] [i_0]))) : (max((arr_11 [i_5] [i_6] [i_5]), (arr_5 [i_0])))))))));
                                var_22 *= (min((((((min((arr_19 [i_0] [i_5] [i_7]), var_4))) % (arr_0 [i_0])))), (((var_0 + var_6) + (var_7 > var_5)))));
                                var_23 = (max(var_23, var_9));
                            }
                        }
                    }
                    var_24 ^= (min(((~(arr_8 [16] [i_4] [i_5]))), (arr_27 [i_0] [1] [i_0] [i_0] [i_5])));
                    arr_29 [i_0] [i_4] [i_0] [i_0] = (((((var_8 == (arr_20 [i_5])))) < (((!(arr_20 [i_0]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] = arr_8 [i_8] [i_8] [i_8];
        var_25 = (arr_19 [i_8] [i_8] [i_8]);
        var_26 = 0;
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_39 [i_10] [i_10] [i_9] = ((max((-6351070468739399260 ^ var_12), (((-6351070468739399277 + 9223372036854775807) >> (var_15 - 4566))))));
                var_27 -= (((arr_22 [i_9]) ? ((~(((!(arr_0 [i_9])))))) : (arr_25 [i_9] [i_10] [i_9] [i_9] [i_9] [i_9] [i_10])));
                var_28 = (arr_8 [i_10] [7] [16]);
            }
        }
    }

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_29 = (min(((-((16908 >> (1225908423 - 1225908411))))), (110 / var_10)));
                        var_30 = (min((121 < var_13), -1));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                var_31 = arr_57 [i_11] [i_15] [i_16] [i_17] [i_11];
                                var_32 = ((max((arr_52 [i_18]), (arr_52 [i_11]))));
                                arr_59 [i_11] [i_15] [i_16] [i_17] [i_18] = ((var_9 ? var_13 : (arr_44 [i_15] [i_16] [i_18])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            {
                                arr_65 [i_11] [i_15] [i_16] [i_19] [i_19] = ((((max(var_9, (arr_54 [i_11] [i_15] [i_15] [i_19] [i_20])))) * ((max((arr_54 [i_11] [i_15] [i_16] [i_19] [i_20]), var_14)))));
                                var_33 -= (((((((var_2 ? var_11 : var_6))) ? (((arr_57 [1] [1] [8] [i_19] [i_20]) * (arr_52 [i_20]))) : ((((arr_52 [i_15]) || var_6))))) / ((~(arr_61 [i_11] [i_15])))));
                            }
                        }
                    }
                }
            }
        }
        var_34 ^= 60097;
        var_35 = ((min((arr_48 [i_11] [i_11] [i_11] [i_11] [2]), (arr_60 [i_11]))));
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1)
    {
        arr_69 [i_21] [i_21] = ((-(max((min(var_2, var_7)), (arr_68 [i_21])))));
        arr_70 [i_21] |= min((((!(arr_44 [i_21] [i_21] [i_21])))), (arr_53 [i_21] [i_21] [i_21] [i_21]));
        var_36 = ((((((arr_56 [i_21] [i_21] [i_21] [19] [i_21]) / (arr_58 [i_21]))) & 26)));
        var_37 *= (((((arr_60 [i_21]) ? var_7 : 65535)) >= (((((var_10 % var_6) && ((min((arr_67 [i_21] [i_21]), -497)))))))));
    }

    for (int i_22 = 0; i_22 < 24;i_22 += 1)
    {
        var_38 = (((arr_42 [i_22] [i_22] [10]) * (max((max(536870912, (arr_53 [i_22] [i_22] [i_22] [i_22]))), (arr_61 [i_22] [i_22])))));
        var_39 = (min(var_39, (arr_58 [i_22])));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 24;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                {
                    arr_79 [i_22] [i_22] [i_23] [i_23] = ((var_7 ? 68 : (((!((min((arr_64 [i_22] [i_22] [i_24] [i_23] [i_24] [i_23]), (arr_54 [i_22] [i_22] [i_24] [i_22] [i_22])))))))));
                    var_40 ^= min(((((var_15 ? (arr_50 [i_22] [i_23] [i_24]) : var_8)))), 0);
                    arr_80 [i_22] = (arr_71 [i_22]);
                }
            }
        }
    }
    #pragma endscop
}
