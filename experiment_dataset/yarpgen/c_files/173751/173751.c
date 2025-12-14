/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 524287;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [0] [i_0] |= (((((-8719388585760291333 ? (arr_6 [i_0] [i_0] [i_0 + 2]) : (arr_6 [12] [1] [i_0 + 3])))) ? ((~(min(-357612672, (arr_1 [12]))))) : ((~(arr_1 [8])))));
                arr_8 [i_0] [9] [1] = (((((arr_5 [i_0] [i_0 + 3] [i_0]) ? var_9 : var_8)) ^ (((((min(var_7, (arr_4 [i_0]))) == -121))))));
                var_15 = (max(var_15, (arr_0 [11] [11])));
                arr_9 [1] [i_0] [i_1] = (((arr_4 [i_0]) ^ ((~(~105)))));
            }
        }
    }
    var_16 = (max(((((~60951) ^ (~65532)))), var_8));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = (((var_4 * (((-121 - (arr_11 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_19 [1] [i_3] [i_2] [1] &= ((min(((-88 ? (arr_16 [i_2]) : (arr_16 [1]))), (max((arr_10 [i_3]), 60959)))) ^ (((((min((arr_11 [i_2] [i_5]), (arr_15 [i_2] [i_2] [i_2])))) != var_7))));
                        arr_20 [i_3] [i_2] = (arr_10 [i_4]);
                        var_18 += ((var_10 < (arr_14 [16])));
                        arr_21 [i_5] [i_2] [6] [i_2] [i_2] [i_2] = ((((max((((arr_17 [i_3] [9] [11]) / (arr_18 [i_2] [2] [8] [2]))), (arr_16 [i_5])))) ? 65490 : ((min((max((arr_16 [1]), (arr_18 [i_2] [1] [i_4] [i_5]))), 6)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = (max(var_10, (((((arr_24 [i_6]) ^ (arr_15 [i_2] [i_2] [i_2])))))));
                    var_20 |= 9223372036854775803;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_21 = (arr_33 [1] [1]);
                    var_22 = (((((arr_28 [i_10]) ? 0 : (arr_33 [6] [i_10]))) << ((((arr_28 [i_8]) < (arr_31 [i_8] [i_9] [i_10]))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((~((~(max(2540503087, (arr_37 [9] [i_8] [6] [6] [5] [6]))))))))));
                                var_24 = (min(var_24, ((((((((~(arr_29 [i_9]))) + 2147483647)) >> ((((~(arr_28 [14]))) - 64))))))));
                            }
                        }
                    }
                    var_25 ^= ((((arr_31 [i_10] [i_10] [i_10]) || (arr_31 [i_8] [i_8] [i_8]))) ? (arr_31 [i_8] [i_9] [i_10]) : (((arr_31 [i_8] [i_9] [i_10]) + (arr_31 [i_8] [i_9] [i_8]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    arr_46 [i_13] [i_13] [19] = (~var_11);

                    for (int i_15 = 1; i_15 < 22;i_15 += 1)
                    {
                        var_26 = (((((((((arr_41 [i_8] [i_8] [13]) ? (arr_44 [i_8]) : var_4))) ? (((arr_42 [i_13]) ? var_9 : (arr_41 [i_8] [i_8] [15]))) : (arr_41 [i_15 + 1] [i_15 + 1] [i_15 + 2])))) ? -32747 : var_13));
                        arr_51 [i_13] [15] = var_12;
                        var_27 = (min(var_27, ((min((((1 ^ 1) ? (arr_36 [13] [2] [1] [10]) : (((arr_41 [1] [1] [1]) % (arr_31 [11] [11] [1]))))), 1)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 20;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        arr_59 [6] [i_16] [i_17] = 4571;
                        var_28 = (max(var_28, (((((min((arr_37 [i_17 - 2] [i_16] [i_16 - 1] [19] [3] [i_16]), (arr_37 [i_17 + 3] [1] [i_16 - 2] [i_16] [7] [1])))) | 1)))));
                    }
                    arr_60 [6] [i_8] [i_17] [i_17] = (((max(((104 ? 12806000370749036788 : 106)), (((var_5 | (arr_49 [i_8] [3] [3] [i_8])))))) == 104));
                }
            }
        }
        arr_61 [17] = (min(var_10, 1));
        var_29 = (15 / (12984776511434310278 / var_2));
    }
    #pragma endscop
}
