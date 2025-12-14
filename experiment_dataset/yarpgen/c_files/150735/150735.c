/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = ((((((arr_1 [i_0] [i_1]) ^ -58))) | var_1));
            var_12 ^= (((arr_2 [i_0] [i_1] [i_0 + 2]) * var_9));
            var_13 = 55;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_14 = (((arr_1 [i_0] [i_0 + 2]) - ((-(arr_1 [i_0] [i_2])))));
            arr_6 [i_0] [i_0] = ((1 | ((1 << (var_1 - 3451294372418194306)))));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_15 = (arr_7 [i_0]);
            arr_10 [12] [10] |= ((-48001 ? (arr_4 [i_0 - 1] [i_3] [i_3 - 2]) : var_6));
            var_16 = ((((var_5 ? (arr_7 [i_0]) : (arr_5 [i_0] [i_0]))) % (1 * 17)));
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_13 [10] [10] |= ((111 ^ 16007689298079098849) ? ((((33060 == (arr_2 [i_0] [i_4 + 2] [i_4 + 2]))))) : (arr_2 [i_4 - 1] [i_0] [i_0]));
            arr_14 [i_0] = (((arr_12 [i_0 + 3] [i_4 - 2] [i_0]) ? (arr_12 [i_0 + 3] [i_4 - 2] [i_0]) : var_9));
            arr_15 [i_0] [i_4] = (((arr_9 [i_4] [i_4 - 2] [i_0 + 3]) ? 1 : var_6));
        }
        var_17 = (max(var_17, (((var_3 / (arr_2 [6] [i_0] [i_0 - 1]))))));
        arr_16 [i_0] = (arr_11 [i_0] [i_0 + 3] [i_0 + 3]);
        var_18 = (max(var_18, (((-(((arr_0 [i_0] [i_0]) ? 0 : var_4)))))));
        arr_17 [i_0] [i_0] = ((-((var_6 * (arr_7 [i_0])))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_19 -= (((var_6 + 2147483647) >> (~4294967267)));

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_26 [i_6] [i_6] [i_7] |= 36;
                var_20 = (((((((arr_19 [i_5]) ? var_8 : (arr_19 [i_5]))))) ? -9223372036854775792 : (arr_20 [5])));
                arr_27 [i_5] [i_6] [i_6] [i_7] = ((!(arr_21 [i_6])));
                var_21 = (max(var_21, (((-var_0 % (((arr_18 [i_7]) & (arr_18 [i_6]))))))));
                var_22 = ((max(var_7, (arr_21 [i_6]))));
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_38 [i_8] [i_9] [i_8] = ((-(min((arr_22 [i_6] [i_8] [i_6]), (min(var_1, 27))))));
                            arr_39 [i_5] [12] [i_8] [i_9] [i_10] = ((~(max(var_2, var_1))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_23 ^= var_1;
                arr_46 [i_5] [i_12] [2] = var_9;
                var_24 = var_5;
                var_25 |= ((var_9 % ((((arr_22 [i_5] [i_11] [18]) <= (arr_43 [13]))))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 20;i_14 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((((var_4 ? var_2 : var_9))) ? 56131 : (arr_21 [i_14 - 4]))))));
                        var_27 = (var_4 / var_6);
                    }
                }
            }
        }

        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_28 = ((((((var_5 ? 1 : 1)) << (((((-2147483647 - 1) ? (arr_51 [0] [i_15] [i_5] [i_5] [i_5] [i_15]) : 24)) - 101)))) <= (((arr_40 [i_15] [i_15 - 1] [i_15 - 1]) ^ (arr_31 [i_5] [i_15 - 1] [i_15 - 1])))));
            var_29 = (max(var_29, ((((((150 ? (arr_36 [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_5]) : ((max(1, (arr_24 [i_5] [i_15 - 1] [i_5] [i_5]))))))) ? var_1 : 1)))));
        }
    }
    for (int i_16 = 2; i_16 < 12;i_16 += 1)
    {
        arr_57 [i_16] [i_16 - 1] = (((arr_41 [i_16 + 1]) ? (((-2147483647 - 1) / var_2)) : (min((((arr_50 [i_16 - 2]) * 92)), var_2))));
        arr_58 [i_16] [i_16] = (min(((~(arr_53 [i_16 - 1] [i_16 - 2]))), (((arr_53 [i_16 + 1] [i_16 - 1]) % (arr_53 [i_16 + 1] [i_16 - 1])))));
        arr_59 [i_16] [i_16] = (((min((arr_50 [i_16 - 1]), (arr_50 [i_16 - 2]))) ? ((max((arr_50 [i_16 - 1]), (arr_50 [i_16 + 1])))) : (~var_3)));
    }
    #pragma endscop
}
