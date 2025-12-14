/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = var_7;
        var_18 ^= ((var_7 & (((arr_0 [i_0]) ? 11053163063209064741 : -65535))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_19 = ((!(arr_3 [i_1])));
        var_20 = ((((((arr_5 [6]) ? var_10 : (arr_3 [i_1])))) ? ((4294967295 ? (arr_3 [i_1]) : (arr_4 [18]))) : -0));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_14 [i_2] [i_2] [3] [i_5] = (!var_6);
                        var_21 = ((~(arr_11 [16] [i_3] [i_4] [i_2])));
                        arr_15 [i_5] [i_3] [i_2] [i_5] [i_3] [i_5] = (((arr_12 [i_2] [i_2] [17] [i_2] [i_2] [10]) - (arr_12 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_2] [i_3] = arr_7 [i_2];
                        var_22 = var_13;
                        var_23 = (((arr_7 [i_2]) != var_10));
                    }
                }
            }
            arr_23 [i_2] [16] [12] &= ((((var_5 | (arr_21 [i_2] [12] [i_2] [i_3]))) < (arr_9 [i_2])));
            var_24 = (127 ? (((arr_18 [i_2] [i_3] [i_3] [i_3] [i_3]) ? (arr_5 [i_3]) : var_13)) : var_3);
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_25 = (max(var_25, 0));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_32 [i_8] [i_8] [5] [i_2] [i_2] = var_2;
                            arr_33 [i_11 - 2] [i_8] [i_8] [8] &= (((((arr_16 [i_8] [i_8]) & 255)) <= (arr_19 [i_10 - 4] [i_9 - 1] [9] [i_11 - 1] [i_9 + 2] [i_9])));
                            arr_34 [3] [i_2] [i_8] [i_9] [i_9 + 3] [i_10] [i_11] = ((var_5 * (var_2 / var_8)));
                            arr_35 [10] [10] [i_2] [7] [i_10 - 2] [i_11 - 1] [10] = var_11;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_38 [i_2] = (arr_18 [0] [17] [i_12] [i_2] [16]);
            var_26 += (((var_10 ? (arr_13 [2] [i_12] [i_2] [0] [i_12] [i_2]) : var_1)));
            arr_39 [i_2] [i_2] = (arr_8 [2]);
        }
        var_27 &= ((((var_1 != (arr_29 [9] [5] [i_2] [16] [i_2] [i_2]))) || ((((arr_18 [i_2] [2] [i_2] [4] [i_2]) << (var_2 - 1178762896311796983))))));
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        arr_44 [i_13] [i_13 - 1] = (arr_40 [i_13 + 1]);
        var_28 *= -var_2;
        var_29 = (max(var_29, var_11));

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            arr_48 [i_13] = (((arr_46 [i_13 + 1] [i_13 - 1]) && (arr_43 [i_13 + 3])));
            var_30 = ((!(((arr_40 [i_13]) >= var_13))));
            arr_49 [16] [i_14] = (((!var_13) > (arr_47 [i_13 - 2] [i_13 - 1])));
        }
        var_31 = ((((((((arr_45 [i_13]) + 2147483647)) << (var_9 - 202)))) & (arr_40 [i_13 + 2])));
    }
    var_32 = var_2;
    var_33 = (max(var_33, ((max(var_2, ((min(var_8, var_9))))))));
    #pragma endscop
}
