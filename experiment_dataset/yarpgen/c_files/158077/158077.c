/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 123));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, (arr_10 [0])));
                        arr_13 [i_0] [i_0] [i_2] = ((~(arr_2 [22] [18])));
                        var_16 = (arr_12 [i_3] [i_1 - 1] [i_2] [i_0] [i_2] [i_3]);
                        var_17 = var_7;
                    }
                }
            }
        }
        var_18 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0] [i_0]) : ((var_2 >> (((arr_10 [i_0]) + 5482931141919094508))))));
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_19 &= ((-((((arr_5 [i_4] [15] [21]) ? -122 : (arr_6 [20] [20]))))));
            var_20 &= (((!9) ? (((!((!(arr_7 [8])))))) : var_9));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_21 = ((+(((arr_12 [i_4] [i_4] [i_4] [i_4] [i_6] [i_6]) ? (arr_7 [i_4]) : ((min(169, 123)))))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_22 = ((((((arr_11 [i_8 + 1] [i_4] [i_7 + 4] [i_4 - 1]) ? (arr_11 [i_8 + 1] [i_6] [i_7 + 4] [i_4 - 1]) : (arr_11 [i_8 + 1] [i_6] [i_7 + 4] [i_4 - 1])))) || (arr_11 [i_8 + 1] [i_8 + 1] [i_7 + 4] [i_4 - 1])));
                            var_23 |= (arr_6 [i_4 - 2] [i_6]);
                            var_24 ^= (~((~(arr_16 [i_4 - 2]))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_25 += ((((((((arr_10 [i_10]) ? (arr_10 [i_10]) : (arr_21 [i_4] [22])))) ? var_12 : (((min(56, -12)))))) / (((var_0 ? (arr_27 [i_4 + 3]) : (arr_14 [i_4 - 3]))))));
            var_26 += (min((((((arr_20 [i_10] [i_4]) | (arr_25 [i_4] [13] [i_10] [i_10] [13]))))), -1892334164139377225));
            var_27 = var_11;
            var_28 = 201;
        }
        arr_29 [i_4] = ((-(arr_23 [i_4] [i_4] [i_4] [i_4 + 3] [i_4] [i_4])));
        var_29 = (((-(9 + var_3))));
        arr_30 [i_4] = (((((min((arr_3 [i_4]), 18446744073709551615)))) | (((!((max(11659, 122))))))));
        arr_31 [i_4] [i_4] = (((arr_23 [i_4] [i_4 + 4] [i_4] [i_4 - 1] [i_4] [i_4 + 2]) / ((max((arr_14 [i_4 - 2]), (arr_14 [i_4 + 2]))))));
    }
    for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_30 = var_13;
        arr_34 [i_11] = (arr_19 [i_11 + 3] [2] [i_11]);
    }
    #pragma endscop
}
