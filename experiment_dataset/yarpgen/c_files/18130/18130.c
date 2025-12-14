/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min((arr_1 [i_0]), (arr_1 [i_1])));
                var_17 = (((((arr_0 [i_1 + 3]) ? (arr_0 [i_1 - 1]) : 2147483647))) ? (((arr_0 [i_1 + 3]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1]))) : ((max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_18 = (arr_6 [i_1] [i_1 - 2] [i_2]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_3] [i_2] [i_1 - 1]);
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = (arr_4 [i_0] [i_1 + 2] [i_2] [i_3]);
                        var_19 = (((~1) ^ (((arr_1 [i_1]) * var_9))));
                        var_20 = (((arr_4 [i_3] [i_2] [i_1 + 2] [i_0]) ? (arr_4 [i_0] [i_1 + 3] [i_2] [0]) : (arr_3 [i_3] [i_2] [i_0])));
                        var_21 = (((arr_5 [i_0] [i_1] [i_2]) ? 1938318659 : (arr_2 [i_0] [i_0])));
                    }
                    arr_11 [i_0] [i_1] [i_2] = ((2147483647 << (arr_2 [i_0] [i_1 + 1])));
                    arr_12 [i_0] [i_0] = arr_5 [i_2] [i_1 + 2] [i_2];
                    arr_13 [3] [i_1 - 2] [i_1] [i_2] = (((arr_3 [i_0] [i_0] [i_0]) * (((-2147483635 ? (arr_6 [i_0] [i_1 + 3] [i_2]) : (arr_8 [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 2]))))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (arr_4 [i_0] [i_0] [i_0] [i_0])));
                    var_23 = (max(var_23, ((max((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0]))))));
                    var_24 = arr_6 [i_4] [i_1 + 1] [14];
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_25 = (min(var_25, 32767));
                                var_26 = (max(var_26, ((((arr_18 [i_0] [i_1] [i_7]) ? var_7 : ((2356648639 ? (-2147483647 - 1) : 1)))))));
                                arr_24 [16] [11] [i_5] [i_5] = (((((arr_21 [i_7] [i_1] [i_5] [i_6] [i_7]) < 1)) ? (arr_19 [i_0] [i_1 + 3] [i_5] [i_6] [i_7]) : (arr_15 [i_6] [i_5])));
                                var_27 = (((arr_3 [i_0] [1] [i_7]) ? (((arr_23 [13] [i_7]) ? (arr_23 [i_0] [15]) : (arr_4 [i_0] [i_1 + 2] [i_5] [i_0]))) : ((9223372036854775807 ^ (arr_3 [i_0] [12] [i_5])))));
                                var_28 = (max(var_28, 3976990844));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((317976451 >> (2147483647 - 2147483647))))));
                                var_30 = (min(var_30, (((arr_29 [i_8] [i_8] [i_8 - 1] [i_1 + 3] [i_0]) ? (arr_29 [i_9] [i_8 - 1] [i_8 - 1] [i_1 + 3] [i_0]) : (arr_29 [i_8] [i_8] [i_8 - 1] [i_1 + 3] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] [i_0] [4] = (((((arr_26 [i_10] [i_10] [i_10] [i_0]) <= (arr_20 [i_0] [i_0] [i_0]))) ? ((((arr_0 [i_0]) ? (arr_16 [i_0] [i_1] [i_10] [i_10]) : (arr_22 [i_10] [i_10] [i_10] [i_1 + 2] [i_0] [i_0] [i_0])))) : (((((arr_14 [i_10]) < (arr_25 [i_10] [i_10] [i_10] [i_10])))))));
                    var_31 = (min((min((((arr_29 [i_10] [i_1] [i_10] [i_0] [i_10]) % (arr_3 [i_0] [i_1 - 1] [i_0]))), (~2147483647))), (arr_0 [i_1 + 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            {
                var_32 = (arr_28 [i_11 - 1] [i_11] [i_12] [i_12]);
                var_33 = (min((arr_26 [i_11 - 1] [22] [i_12] [i_11 - 1]), (arr_26 [i_11 + 1] [i_12] [i_12] [i_11 + 1])));
                var_34 *= (((arr_32 [i_11 + 1] [i_11 - 1] [i_11 + 2] [i_11 - 1]) < ((min((((!(arr_35 [i_12])))), (arr_35 [i_11 + 2]))))));
            }
        }
    }
    var_35 = var_13;
    #pragma endscop
}
