/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [22] [i_0] [12] = ((((((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [0] [i_0 + 1]) : var_4))) ? ((var_2 ? (((arr_2 [i_1]) ? var_7 : 1)) : (((var_4 ? var_6 : (arr_4 [20])))))) : (((~((max(10, 93))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [0] [i_1] [i_2] [i_1] = (min(((((min(1, 18446744073709551608)) < ((((arr_5 [i_2] [i_1]) ? 31 : 56382)))))), -var_10));
                    arr_11 [i_0 - 1] [16] = (arr_9 [1] [i_2] [i_1] [i_0 + 2]);
                }

                /* vectorizable */
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((2273 ? (arr_1 [i_0] [4]) : var_8)) >= (arr_17 [i_0 - 1] [2] [i_0] [2] [i_0] [i_4]));
                                arr_20 [i_0] [i_4] [i_4] [i_0 - 1] = (arr_2 [i_4]);
                            }
                        }
                    }
                    var_14 = var_7;
                    var_15 *= ((-(((arr_8 [i_0 + 2] [i_1] [i_3]) ? (arr_0 [i_0]) : (arr_18 [i_0] [i_1] [i_3] [4] [i_0] [2] [i_3])))));
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_16 *= (min((var_5 / var_1), (((-1546443876034867337 ? (((arr_13 [i_6] [i_6] [13]) - var_8)) : var_8)))));

        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_6] [i_7] [i_6] = ((((max(var_11, var_6))) ? (((min(163, (arr_4 [i_6 - 1]))))) : (min((arr_9 [i_7] [i_7 + 2] [i_6] [1]), 18446744073709551608))));
            arr_29 [i_6] [i_7 - 1] = -113;
            var_17 |= ((-(min(((1792 ? 149 : var_9)), (var_9 >> 27)))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_36 [i_9] [i_8] [i_8] [i_8] [i_6] = var_4;
                        var_18 |= ((-(min((((var_8 ? var_8 : 4000507560))), -1031269488))));
                    }
                }
            }
        }
        arr_37 [i_6 - 1] [i_6] = ((+((248 ? (arr_0 [i_6 + 2]) : (arr_0 [i_6 - 2])))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_19 = (min(var_19, ((((2795639452 >= var_7) >= (arr_39 [i_10]))))));
        var_20 = (min((min(-var_4, ((min(var_8, var_2))))), ((var_3 ? ((min((arr_40 [i_10]), var_6))) : var_0))));
    }
    for (int i_11 = 3; i_11 < 16;i_11 += 1)
    {
        arr_45 [16] [i_11] = ((~(arr_15 [18] [18] [i_11 - 2])));
        arr_46 [i_11] [i_11] = ((!(((22356 & (arr_32 [i_11] [14]))))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {
                    arr_54 [i_11 - 1] [13] [11] = (arr_32 [i_12] [0]);
                    var_21 -= (min(((((arr_8 [i_12] [i_12 + 2] [i_12 + 1]) < (arr_8 [i_12 - 2] [i_12 + 2] [i_12 + 1])))), (((((113 ? (arr_26 [i_12] [i_12]) : 1))) ? ((min(93, 1727041478163870027))) : ((0 ? 31457280 : 4294967295))))));
                    arr_55 [i_11] [i_11 - 1] [i_11] [10] = (min((min(((max(0, var_12))), var_11)), (((((!(arr_5 [i_13] [i_12]))) ? (var_13 || var_1) : (arr_38 [i_11 - 1]))))));
                }
            }
        }
        arr_56 [i_11] = ((((((arr_34 [i_11 + 3]) ? (arr_34 [i_11 + 3]) : 65534))) ? (((((min(var_6, (arr_50 [i_11 - 3] [i_11] [i_11] [2]))) + 2147483647)) >> (var_13 - 90))) : (((((var_5 ? 48666081744416833 : 2928426175))) ? ((max(1, 91))) : 85))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    var_22 = (min(var_22, (((((max((~var_0), (~var_0)))) ? (((min((arr_38 [i_11 - 3]), (min(var_2, (arr_13 [i_15] [i_15] [i_15]))))))) : (max(((min(-28827, var_2))), (min(var_3, var_1)))))))));
                    var_23 *= ((max((min(5498368941582348508, (arr_7 [i_11] [i_11 - 1] [i_11] [i_11]))), (((var_5 ? 11 : var_9))))));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        var_24 ^= ((((max((((arr_44 [i_16] [i_16]) ? var_11 : var_9)), (arr_50 [i_16] [i_16] [i_16] [i_16])))) ? ((min(var_4, (arr_27 [i_16])))) : var_2));
        var_25 = (min(var_25, ((((((var_0 | (((min(-32757, var_12))))))) ? (max((min((arr_38 [i_16]), (arr_23 [12]))), (arr_31 [2] [i_16] [i_16] [i_16]))) : (((var_10 & (arr_41 [i_16] [10])))))))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 15;i_19 += 1)
                {
                    {
                        arr_71 [12] [i_18] [10] [12] [i_19] [i_19] = (((max(((var_10 ? var_9 : 1)), ((max(var_12, var_10))))) * ((max((arr_34 [i_19 - 1]), (arr_34 [i_19 + 2]))))));
                        var_26 = ((~((max(var_4, (arr_57 [i_19] [7]))))));
                    }
                }
            }
        }
    }
    var_27 = (((((((var_11 ? var_3 : -85)) << (var_13 - 98)))) && var_10));
    #pragma endscop
}
