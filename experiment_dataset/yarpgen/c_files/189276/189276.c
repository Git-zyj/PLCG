/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-8570633541429775285 >= -var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_11 ^= max((((arr_5 [i_0] [i_0] [i_0] [i_3]) ? -559463908 : -114)), (-1324335299 <= 1605135188));
                        var_12 = ((-((var_0 ? (150 / -399380194) : (arr_8 [i_1] [i_2] [i_3])))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            var_13 = (1324335312 ? 9323622 : (arr_3 [i_2] [i_1] [i_2 + 1]));
                            arr_13 [i_3] [i_1 - 3] [i_2 + 1] [i_1] [i_3] = 7263572845999395934;
                        }
                    }
                    var_14 = ((-1978596872 ? ((-(max(8160, 1324335311)))) : (((!(4294967293 * 168))))));
                    var_15 &= (1 <= (!-1509409762));
                }
            }
        }
    }
    var_16 = var_0;
    var_17 = (((((~(min(-1324335305, var_1))))) && ((min((var_7 > var_4), var_7)))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_18 = (((arr_14 [i_5]) > (arr_15 [i_5])));
        arr_16 [i_5] = (((arr_14 [i_5]) / (min((arr_14 [i_5]), (arr_14 [i_5])))));
        var_19 = ((((arr_14 [i_5]) ? (arr_14 [i_5]) : (arr_14 [i_5]))));
        var_20 = (max(var_20, (arr_15 [i_5])));
        var_21 *= 1;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_22 = (arr_17 [i_6 - 1]);
        var_23 = 1;
        var_24 = (arr_20 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_25 = (-1324335287 * var_9);
                    var_26 = var_3;
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_27 = var_2;
                    var_28 = (max(534773760, 357900556));
                    var_29 += (arr_18 [i_9] [i_10]);

                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        var_30 = (max(var_30, -1978596853));
                        var_31 &= (((max((arr_26 [i_9 - 2]), (arr_26 [i_9 - 2]))) - ((min((1 | 7869697542634644329), (arr_27 [i_9 - 1]))))));
                    }
                    for (int i_13 = 2; i_13 < 19;i_13 += 1)
                    {
                        var_32 = (min(((var_0 ? ((var_9 ? (arr_20 [i_11]) : 28)) : (((var_4 ? 44259 : 21224))))), -1978596852));

                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_33 = (((!(((var_7 ? var_1 : var_5))))));
                            var_34 = (max(var_34, ((max((max(18446744073709551608, 1)), ((max(94027151, var_1))))))));
                        }
                    }
                    var_35 = ((((((arr_37 [i_9] [i_9 - 2] [i_9 - 1] [i_10] [i_11]) ? (arr_37 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1]) : (arr_37 [i_9] [i_10] [i_11] [i_10] [i_11])))) ? (((var_4 <= (var_5 + var_5)))) : 5807));
                }
            }
        }
        arr_40 [i_9] = (((arr_39 [i_9] [i_9]) ? ((((arr_27 [i_9 - 2]) / ((-1978596852 - (arr_25 [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2])))))) : (((arr_26 [i_9 - 1]) - var_5))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 8;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            {
                                arr_54 [i_15] = (max((((~((min(19831, 56421)))))), ((var_8 ? (arr_50 [i_15] [i_15] [i_15] [i_15]) : ((-2147483631 ? var_9 : (arr_33 [i_15] [i_16 + 3] [i_17] [i_17])))))));
                                var_36 = (max(var_36, (((1978596871 + ((+(((-2147483647 - 1) ? var_1 : (arr_8 [i_17] [i_16 - 1] [i_17]))))))))));
                            }
                        }
                    }
                    arr_55 [i_15] [i_16] [i_15] [i_15] = (((!152) ? (min((arr_10 [i_15] [i_16 + 1] [i_15] [i_16]), (arr_10 [i_15] [i_16 + 1] [i_16] [i_16 + 1]))) : (min((arr_28 [i_16 - 1] [i_16 + 1] [i_16]), (arr_10 [i_15] [i_16 + 1] [i_15] [i_16])))));
                    arr_56 [i_15] [i_15] [i_15] [i_15] = max(((-10 ? 0 : -2147483640)), -84);
                }
            }
        }
        var_37 = (min(var_37, 252));
    }
    #pragma endscop
}
