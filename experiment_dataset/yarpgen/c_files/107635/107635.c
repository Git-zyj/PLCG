/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 += ((126 ? var_12 : (arr_0 [i_0 + 1] [i_0 + 1])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 = ((-((-28 ? 192 : 9223372036854775807))));
                        var_19 = (max(var_19, (((~(((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_3]) & var_6)))))));
                    }
                }
            }
        }
        var_20 ^= (((51 == (arr_2 [11] [i_0 + 2] [1]))));
        var_21 = (((arr_0 [i_0 + 2] [i_0]) % (arr_6 [i_0 + 1] [i_0 + 2] [i_0] [4] [i_0 + 2] [8])));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_22 = ((0 ? 0 : -7160741075097311904));
            var_23 = ((((min((arr_10 [i_4 - 1] [i_5] [i_4 - 1]), (arr_10 [16] [i_4] [i_4 - 1])))) ? -1 : (((arr_11 [i_4 + 1] [i_4 - 1]) + (arr_11 [i_4 + 1] [i_4 - 1])))));

            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                var_24 = var_6;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_25 = (-1 ^ -52);
                            arr_21 [i_4] [1] [i_6] [i_7] = arr_16 [12] [i_5] [i_5] [i_5] [i_5] [15];
                            var_26 ^= 4796149553172956889;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                arr_25 [3] [5] [i_9] = ((var_8 >= ((var_4 ? (arr_22 [i_9] [i_5] [18] [i_4]) : var_2))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_27 = var_10;
                            var_28 = (((arr_24 [i_11] [i_10 - 1] [i_4 - 1]) ? (arr_24 [i_11] [i_10 - 1] [i_4 - 1]) : 127));
                            var_29 = 127;
                        }
                    }
                }
            }
            arr_33 [3] [15] [i_4 + 1] = (max(((var_4 << (((arr_18 [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 2] [20] [8]) - 10028)))), (((arr_18 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 2] [16] [i_4]) ? 32 : (arr_18 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_5] [i_5])))));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
        {
            var_30 = var_1;
            var_31 = (min(var_31, 42));
            var_32 = (arr_16 [i_4] [i_4] [i_12] [i_12] [i_12] [i_4]);
            var_33 = (min(var_33, ((((((((-43 ? var_0 : 42))) ? 32767 : ((5470 ? 0 : var_12)))) >= (arr_16 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2]))))));
            var_34 = max((!-28481), var_9);
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_35 = var_7;
                        var_36 = (max(var_36, ((((arr_27 [i_4 - 1] [i_14 - 2] [i_15]) << (1464837576 - 1464837575))))));
                        var_37 = (max(var_37, 590728023428723048));
                        var_38 = (max(var_38, 0));
                    }
                }
            }
            var_39 = var_6;
            arr_42 [i_4] [i_13] = (((arr_31 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_13] [i_4]) ? (arr_29 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [6]) : (((arr_17 [17] [3] [i_4] [1] [3] [i_4]) ? (arr_26 [i_4 + 1] [i_13] [2] [4] [i_4 + 1] [i_4]) : var_8))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
        {
            var_40 = (~var_11);
            var_41 ^= (((0 & 1) ? (((3516769871 ? 0 : 0))) : (arr_35 [i_16] [i_16])));
        }
        var_42 = (min(var_42, (((max((arr_17 [0] [10] [i_4] [i_4] [i_4 - 1] [1]), 21440))))));
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 20;i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    {
                        var_43 = (max(var_43, ((((var_4 ? var_9 : var_4))))));
                        arr_55 [i_17 - 1] [i_18] [i_20] [i_18] = ((-(arr_52 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17])));
                        arr_56 [i_18] = (arr_16 [i_17] [i_17] [3] [i_20] [i_17] [i_17]);
                    }
                }
            }
        }
        arr_57 [3] [11] = ((-(1 & var_7)));

        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            var_44 = (((1 ? 0 : var_8)));
            var_45 = var_7;
        }
    }
    #pragma endscop
}
