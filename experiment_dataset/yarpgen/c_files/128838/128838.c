/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_11 = (arr_0 [i_0]);
        var_12 = (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_13 = (((arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1]) >> (((arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]) - 28874))));
                var_14 += (((arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1])));
            }

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                var_15 = (min(var_15, 59685));
                arr_11 [i_0] [i_3] [i_3] = arr_7 [1] [9] [i_3] [1];
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_16 = (((arr_0 [i_0]) > (((((arr_9 [i_0] [7] [7] [i_0]) + 2147483647)) << (((((arr_2 [i_0] [i_1] [i_4]) + 47)) - 31))))));
                var_17 = (arr_8 [i_0 - 1] [i_0 + 2]);
                var_18 = (((arr_2 [8] [i_1] [i_4]) / (arr_10 [i_0 + 3] [i_0] [i_0 + 3] [i_0 - 2])));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_19 = (((arr_15 [i_0] [i_0 + 1] [i_0 + 1] [4]) & (arr_4 [i_0 + 1])));
                    var_20 = (arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_1]);
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_20 [6] [i_1] [i_6] [i_7] = arr_5 [i_0] [i_1];
                        var_21 = (min(var_21, (arr_14 [1] [i_1])));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_22 = (93 ^ 1);
            var_23 -= (arr_13 [1] [9] [i_0 - 2]);
            arr_24 [i_0 + 3] [i_0] [i_0] = (((arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3]) ? (arr_2 [i_0 + 3] [i_0 - 2] [i_0 - 3]) : (arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 3])));
            var_24 = (min(var_24, (arr_1 [i_0 + 2] [i_0 + 2])));
            var_25 |= arr_19 [i_8] [i_8] [i_8] [i_8];
        }
        var_26 -= (arr_9 [i_0] [i_0] [7] [0]);
        var_27 -= ((arr_2 [i_0 - 2] [i_0] [i_0 + 3]) + (arr_2 [i_0 - 3] [i_0 - 3] [i_0]));
    }
    for (int i_9 = 3; i_9 < 7;i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] = (((arr_15 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) ^ (arr_15 [7] [i_9] [i_9 - 2] [7])));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_28 |= arr_30 [i_9] [i_9 + 2];
            arr_33 [i_9] [i_9] [i_9] = (arr_31 [i_9] [i_9]);
            var_29 = (max(var_29, ((((((((arr_9 [i_9 - 1] [i_10] [i_9 - 1] [i_9]) + 2147483647)) << (11478 - 11478))) < (1 & 14))))));
            arr_34 [i_9] [i_10] [i_9 + 2] = ((((arr_28 [i_9]) ? (arr_6 [i_9] [9] [i_10] [i_10]) : (arr_9 [8] [8] [i_9] [i_9]))));
        }
        arr_35 [i_9] [i_9] = ((arr_28 [i_9]) / (((((arr_25 [i_9 - 3]) && (arr_25 [i_9 - 3]))))));
    }
    var_30 = var_10;
    var_31 = (((((var_9 > (var_6 - var_3)))) ^ var_7));
    #pragma endscop
}
