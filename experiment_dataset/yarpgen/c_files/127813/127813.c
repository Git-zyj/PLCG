/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (arr_2 [i_0] [i_0 + 1]);
        var_15 = (((arr_2 [i_0] [i_0]) - (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_6))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (((((var_7 > (arr_2 [i_1] [i_1]))))) + ((((arr_2 [i_1] [i_1]) || (arr_1 [i_1])))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 &= (((((min((arr_7 [i_1] [i_2]), (arr_8 [i_2] [i_1]))))) && (((39682 ? -989950319 : 989950293)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = (arr_1 [i_3]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_19 ^= ((~(((arr_5 [i_4]) | (arr_6 [i_1])))));
                            arr_18 [i_3] [i_4] [i_3] [i_1] [i_2] [i_1] [i_1] = (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_20 = (min(-335630138, 27));
                            arr_23 [i_1] [i_2] [i_6] [i_4] [10] = (((((((arr_15 [5] [5] [i_3]) ? 989950293 : (arr_10 [i_6] [i_4] [i_2] [i_2])))) ? (arr_11 [i_1] [i_2] [i_3] [i_4]) : (arr_1 [i_1]))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            var_21 = (((arr_21 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1]) ^ (min((arr_21 [i_1] [i_7] [i_1] [i_7 - 1] [i_1] [i_7]), (arr_21 [i_7 + 1] [i_7] [i_1] [i_1] [i_7] [i_1])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_31 [i_9] [i_7] [i_7] [i_1] = ((989950292 ? -989950299 : 989950318));
                        var_22 = (arr_15 [i_1] [i_7] [i_8]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_34 [i_10] &= (arr_33 [i_10]);
            var_23 = (arr_10 [i_1] [i_1] [i_1] [5]);
            var_24 = (((arr_1 [i_10]) ? (arr_33 [i_1]) : 989950318));
        }
        arr_35 [i_1] [i_1] = 32765;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_38 [i_11] [1] = (((arr_7 [i_11] [i_11]) >> (((arr_32 [i_11] [i_11] [i_11]) - 25419))));
        var_25 = (((arr_26 [i_11] [i_11]) ? (arr_26 [i_11] [i_11]) : (arr_26 [i_11] [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    var_26 = (min(var_26, (arr_27 [i_12 + 2] [i_12 + 1])));
                    var_27 = var_6;
                    arr_44 [i_11] [i_12] = ((arr_19 [i_11] [i_12 + 1] [i_13] [i_13] [i_12 + 1]) ? var_3 : ((-(arr_28 [i_11]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_28 ^= var_3;
        var_29 *= ((~(arr_48 [i_14])));
    }
    var_30 -= (min(((var_4 ? var_1 : var_8)), (((((var_6 << (var_2 - 4032503900005929473)))) ? (max(var_14, var_1)) : (!var_2)))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            {
                arr_54 [i_15] [i_15] = (arr_1 [i_15]);
                var_31 = (((((arr_51 [i_16]) >= (arr_2 [i_15] [i_16]))) ? (min((arr_1 [i_15]), (arr_50 [i_15] [i_15]))) : ((((((~(arr_51 [i_15])))) ? ((~(arr_1 [i_16]))) : ((((arr_49 [i_15]) && (arr_51 [i_15])))))))));
            }
        }
    }
    #pragma endscop
}
