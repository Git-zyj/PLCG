/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 == (min((0 && -6), (max(var_6, var_7))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((((max((min((arr_0 [i_0]), 33554431)), (arr_1 [i_0] [i_0])))) / (max(((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0])))), (230 / 22)))));
        var_13 *= 0;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_14 = ((-(arr_4 [i_2 + 2] [i_2 + 2])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_13 [i_2] = max((arr_6 [i_5] [i_4] [i_3] [i_1]), (min((arr_4 [i_2 - 2] [i_2 - 1]), (arr_6 [i_1] [15] [i_3] [i_4]))));
                            var_15 = arr_8 [i_5] [i_2];
                            var_16 = (arr_9 [1] [i_4]);
                        }
                    }
                }
            }
            arr_14 [i_1] [0] = ((-400301390 ? (max((max((arr_2 [6] [i_2 + 1]), (arr_12 [i_1]))), ((min((arr_12 [i_1]), 24197))))) : ((((((!(arr_11 [7] [i_2] [i_2] [8] [i_2]))))) / (min((arr_2 [i_2] [15]), (arr_3 [i_1])))))));
            var_17 = (max((arr_7 [i_1] [i_1]), (((!(arr_9 [i_2 + 1] [i_2 + 2]))))));
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 *= (((arr_6 [i_6 - 1] [i_6] [i_6] [13]) ? (((arr_4 [i_6] [i_1]) - (arr_5 [i_6]))) : 9223372036854775807));
            arr_17 [i_1] [i_6] = (((arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) && 1));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_20 [4] [4] |= (((((!(((-110 * (arr_6 [i_1] [i_1] [i_1] [i_1]))))))) > (arr_8 [i_7 - 1] [i_7 - 1])));
            var_19 = (arr_11 [i_7] [7] [i_1] [i_1] [7]);
            var_20 = 107;
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_21 = ((-2091051845 ? (arr_22 [i_1] [10]) : 0));
            var_22 ^= (arr_10 [i_8 - 1] [9] [9] [i_8 - 1] [1]);
            arr_24 [i_8] = ((((((((arr_21 [i_1]) ^ (arr_3 [i_1]))) % 15247))) ^ (((max(255, 15567128071984130496)) / 4488130337058852898))));
        }

        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_23 ^= (arr_11 [12] [i_1] [i_1] [i_1] [12]);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((+(((arr_9 [i_12] [i_9]) - (arr_9 [i_1] [i_1]))))))));
                            arr_35 [i_11] [1] = (min(1, 1));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            arr_38 [i_1] = ((!((min(4294967295, 1)))));
            arr_39 [i_1] = (arr_9 [i_1] [i_1]);
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_25 = 327179485;
            arr_43 [i_14] [3] = (min((min((arr_9 [i_1] [i_14]), (max((arr_25 [i_14]), (arr_4 [i_14] [7]))))), ((((arr_15 [i_1] [i_14]) ? (10 < 3346401019) : ((((arr_3 [i_14]) == (arr_6 [5] [5] [5] [5])))))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_26 = (max((arr_5 [i_1]), (max((((arr_19 [i_16] [i_1] [i_15]) - (arr_5 [i_1]))), (arr_31 [i_1] [i_1] [8] [i_15])))));
                            var_27 -= -4138860974737451969;
                        }
                    }
                }
            }
            var_28 = arr_49 [i_1] [i_1] [i_14] [i_14] [i_14];
            var_29 = ((~(((arr_26 [i_1] [i_14]) ? (!1) : ((~(arr_45 [i_1] [i_14])))))));
        }
    }
    var_30 = var_8;
    var_31 = var_2;
    var_32 = var_5;
    #pragma endscop
}
