/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
            var_15 -= (((arr_1 [i_0]) && var_4));
            var_16 = (((arr_2 [i_0] [i_0] [i_0]) ^ (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_17 &= (((var_10 ? (arr_8 [i_0] [i_2] [i_2]) : (arr_8 [i_0] [i_2] [i_2]))) & (!var_11));
            var_18 -= (arr_3 [i_2] [i_0]);
            var_19 = (arr_7 [i_0]);
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_20 = var_5;
            var_21 = -var_0;
            var_22 = (arr_4 [i_0] [i_3 - 1]);
            var_23 = ((var_11 ? (((0 << (2610412887 - 2610412886)))) : (arr_1 [i_0])));
        }
        var_24 = (~((var_0 ^ (arr_8 [8] [i_0] [4]))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_25 -= ((var_8 ? (arr_9 [i_4]) : var_6));
        arr_14 [i_4] [8] = ((var_11 != ((var_0 & (arr_4 [i_4] [1])))));
    }

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_26 = ((((((((arr_15 [i_5]) ? (arr_18 [i_5]) : (arr_15 [0])))) ? (arr_15 [i_5]) : (arr_15 [i_5 + 1]))) <= var_13));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_22 [i_6] = (arr_17 [i_5 - 1] [i_5 - 1]);

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 4; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_27 -= ((~(((arr_26 [i_5] [i_7] [i_8]) + (arr_26 [i_5] [i_6] [i_5])))));
                    var_28 -= (arr_19 [i_6]);
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_29 = var_8;
                    arr_32 [i_9] [i_9 - 1] [i_9] [i_9] [i_9] [i_9] = ((((((arr_26 [i_5] [i_5] [i_7]) ? (arr_30 [i_7] [i_6] [i_7] [i_9 - 4] [i_7] [i_7]) : (arr_26 [i_9] [i_6] [i_5])))) ? ((((arr_31 [i_9] [i_5 - 1]) ? (arr_30 [i_5] [1] [i_7] [i_9] [1] [i_7]) : (arr_28 [i_6] [i_9 - 2])))) : (((arr_17 [i_5 - 1] [i_7]) ? (arr_24 [i_5]) : (arr_20 [6] [i_6])))));
                    var_30 -= ((arr_30 [i_5 + 1] [13] [i_6] [i_5 + 1] [i_7] [2]) <= (arr_31 [i_5] [i_6]));
                }
                /* vectorizable */
                for (int i_10 = 4; i_10 < 20;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_31 = (arr_16 [i_5]);
                        var_32 -= var_9;
                    }
                    var_33 = var_6;
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_39 [i_5 + 1] [12] [i_6] = (arr_31 [i_7] [i_12]);
                    arr_40 [1] [i_5] [i_5] [i_5] [15] [i_12] = arr_33 [i_5 - 1];
                    var_34 = (~(((arr_23 [i_5] [i_5] [12]) | (arr_36 [i_5] [i_5 - 1] [12] [i_5 - 1] [i_5]))));
                    arr_41 [i_5] = var_5;
                }
                arr_42 [12] [i_6] [i_7] = (arr_21 [i_5 + 1] [i_7] [i_7]);
                var_35 = var_14;
            }
        }
    }
    #pragma endscop
}
