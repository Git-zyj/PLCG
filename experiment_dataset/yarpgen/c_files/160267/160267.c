/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min(-9849, var_0))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_17 = ((-7656164014673627393 ? (arr_5 [i_0] [i_1]) : ((((((arr_6 [i_1]) ? (arr_2 [i_1]) : var_3))) ? ((1867252524 ? (arr_2 [i_1]) : var_15)) : (arr_6 [i_1])))));
            var_18 = (max(var_18, (((((min(var_4, (max(var_12, (arr_6 [i_1])))))) ? ((((max(var_1, 1867252524))) ? (min(var_1, var_4)) : (var_1 - 2427714768))) : 11849926702764561954)))));
            arr_7 [i_0] = 7;
        }
        var_19 ^= (((max((max(9210360390186945147, var_9)), ((((arr_6 [1]) >> (((arr_2 [i_0]) + 115))))))) & (18446744073709551587 - 32747)));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_12 [2] [2] |= (arr_0 [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5] [0] [i_4] [8] = ((69 ? (((arr_5 [i_4] [i_5]) ? (arr_11 [i_0] [i_3]) : (((arr_18 [i_5] [i_5] [i_5]) ? 1 : (arr_8 [i_0] [7]))))) : ((((1 * (arr_6 [i_0])))))));
                            arr_21 [i_5] [i_5] = (((((arr_16 [i_0] [i_0] [i_0]) ? var_12 : (arr_10 [i_0] [i_3])))));
                            var_20 = (max(var_20, var_12));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [10] = (((((arr_22 [i_0] [i_0]) & (arr_5 [i_0] [i_0]))) << (((((((~(arr_13 [i_6] [i_6] [i_0])))) ? (arr_23 [i_0] [i_0]) : (max(1867252524, var_6)))) - 71))));
            arr_25 [i_6] = ((((arr_5 [i_0] [i_0]) ? (arr_5 [i_6] [i_6]) : (arr_5 [i_0] [6]))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_33 [8] [i_6] [17] [17] [i_9] = ((((((arr_32 [7] [7] [6] [i_6] [i_6]) | var_9)) << (((((((arr_31 [i_0] [i_0] [i_6] [i_6] [i_6]) - (arr_17 [5] [5]))) + 89)) - 8)))));
                            var_21 = (((arr_2 [17]) <= (arr_27 [i_6] [15] [i_6] [i_8 + 1])));
                            var_22 *= (((var_14 ? (arr_4 [i_0]) : (arr_32 [i_0] [i_0] [i_7] [i_9] [i_9]))));
                        }
                    }
                }
            }
            arr_34 [i_0] [i_0] [i_6] = (((arr_0 [5]) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_6]) : (arr_0 [i_6])))));
            var_23 = ((((((arr_17 [i_0] [i_6]) ? (arr_11 [i_0] [i_6]) : (arr_26 [i_0] [i_0] [3] [i_6])))) ? (~var_8) : (arr_30 [i_0] [i_0] [i_0] [i_6])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_24 = ((~(arr_45 [1] [i_0] [i_10] [12] [i_12])));
                            var_25 = (72 <= 29005);
                        }
                    }
                }
            }
            arr_48 [i_10] = ((((arr_29 [i_0] [i_0] [i_0] [i_10] [i_10]) ? (arr_35 [7] [i_0] [i_0]) : (arr_19 [i_10]))));
            var_26 = (max(var_26, ((((((var_12 ? (arr_36 [i_0] [8]) : 250))) ? (var_3 * var_9) : var_5)))));
        }
    }
    var_27 -= var_14;
    #pragma endscop
}
