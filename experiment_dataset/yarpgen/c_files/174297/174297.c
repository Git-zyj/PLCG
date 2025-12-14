/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((var_11 < var_10) ^ ((var_8 << (var_13 - 44249))))) << ((((var_10 ? var_3 : var_4)) / (var_8 || var_8)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 ^= var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (((((var_14 + var_10) ? (var_11 / var_12) : ((78 << (-1253692038 + 1253692040))))) * (((arr_4 [i_0] [i_0]) ? (var_12 << var_6) : ((max(var_14, var_11)))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((((((var_7 ? var_9 : (arr_3 [i_0] [i_1]))) / (arr_5 [i_0]))) + (((((var_10 ? var_10 : var_6))) ? ((var_10 ? var_1 : var_0)) : (max(var_5, var_5))))));
                                arr_13 [i_0] = (((85 == 78) - (177 >= 78)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_17 = (((((var_2 + 2147483647) << (((((arr_14 [i_5]) + 1473606908)) - 15))))) ? (var_13 & var_2) : (arr_14 [i_5]));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = ((!(((var_13 ? var_0 : var_6)))));
                    var_19 = (((arr_14 [i_5 - 2]) ? var_14 : (arr_14 [i_5 - 3])));
                    var_20 |= (((((var_9 ? var_13 : var_5))) ? ((((arr_20 [i_5] [i_6] [i_7] [i_7 - 1]) <= var_7))) : var_10));
                    arr_22 [1] [i_6] [i_7] [i_6] = (((arr_15 [i_5 + 1] [i_7 - 1]) ? var_13 : var_13));
                    arr_23 [i_5] [i_6] [i_5] = (var_4 != var_6);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_21 = (((var_1 | var_12) ? (var_3 ^ var_13) : (arr_21 [i_5] [10] [i_10])));
                        var_22 = (((((arr_28 [i_8]) ? var_3 : var_10)) < var_2));
                        var_23 = ((var_1 * (var_6 > var_10)));
                        var_24 = ((var_13 ? (var_7 > var_1) : ((-(arr_24 [3] [i_5] [i_9])))));
                        arr_32 [i_5 - 1] [i_8] [i_9] [i_10] = (((((var_10 / (arr_14 [i_8])))) ? (arr_14 [i_8]) : var_7));
                    }
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_35 [14] = (var_1 << (((arr_28 [i_11]) - 21093)));
        arr_36 [i_11] &= (((((((var_11 ? var_14 : var_6)) + (var_9 / var_13)))) ? ((((var_13 << (var_13 - 44241))) - (var_4 / var_5))) : (((var_3 <= var_2) ? (var_1 || var_0) : ((var_2 ? (arr_26 [i_11] [i_11 - 1]) : var_11))))));
        var_25 = ((((((var_3 ? var_10 : (arr_33 [i_11]))) > ((var_2 ? var_6 : var_14)))) ? (arr_24 [i_11] [i_11] [i_11 - 1]) : ((((var_7 ? var_11 : var_10)) + (var_11 / var_14)))));

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_26 = 177;
            var_27 = (min(var_27, var_11));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_28 = (min(var_28, (((var_10 / ((var_2 + (arr_30 [i_15 + 1] [i_11 + 1]))))))));
                            var_29 = (max(var_29, ((((((((arr_16 [i_15]) - var_1)) == var_8)) ? var_6 : (max((((var_0 || (arr_21 [i_15] [i_13] [i_12])))), (arr_44 [i_14] [i_15] [i_13] [i_14]))))))));
                            arr_50 [13] [i_13] [i_13] [i_14] = (((((arr_46 [i_11] [i_12] [i_13] [i_14]) << ((((min(var_14, (arr_21 [i_15 - 1] [i_12] [i_12])))) - 63)))) >> (((((var_10 & var_6) ? var_2 : (((arr_30 [20] [i_15]) ? var_5 : (arr_18 [i_11] [i_11 - 2] [i_13]))))) - 131097438))));
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 24;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                {
                    var_30 = ((((var_5 > ((var_7 ? (arr_37 [i_16 - 2] [i_17] [22]) : (arr_15 [21] [i_17]))))) ? (max(((var_3 ? var_12 : var_3)), ((var_6 ? var_7 : var_5)))) : (((var_6 <= (arr_37 [i_16] [i_17] [i_18]))))));
                    var_31 *= (((((((var_1 >> (var_8 - 38)))) ? var_7 : var_13)) & ((1527028459 >> (var_5 - 131097445)))));
                }
            }
        }
        var_32 = (((((((((((arr_14 [i_16]) + 2147483647)) >> var_9))) ? (arr_37 [i_16 - 1] [i_16] [i_16]) : ((max((arr_33 [i_16]), (arr_49 [i_16] [i_16] [21] [i_16 + 1] [i_16]))))))) ? ((((var_3 ? var_12 : var_8)) << (((arr_37 [i_16] [i_16 - 1] [i_16]) - 4227)))) : (((var_12 | var_3) | ((var_9 ? var_11 : var_0))))));
        var_33 = min((((arr_24 [i_16 - 3] [i_16] [i_16]) ? ((var_5 ? var_6 : var_7)) : var_8)), (((var_8 > ((min(var_11, var_9)))))));
        var_34 = (min(var_34, var_14));
    }
    var_35 ^= var_11;
    var_36 = (((var_14 && var_2) <= ((~(var_13 + var_10)))));
    var_37 *= (max((min(var_7, (var_8 % var_5))), var_5));
    #pragma endscop
}
