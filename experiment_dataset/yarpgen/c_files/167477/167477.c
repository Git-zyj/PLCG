/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 -= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_4] |= (((arr_15 [i_1] [i_2] [i_3] [i_3] [i_1]) && ((min((max((arr_8 [i_2] [i_3] [i_3]), (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]))), ((min((arr_15 [i_1 + 1] [i_2] [i_3] [i_4] [6]), 32309))))))));
                        var_20 += -1;
                        arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] = (arr_12 [2] [i_2] [i_3] [i_3] [i_4 - 3]);
                        var_21 = ((233 < (max((arr_7 [i_1]), (max((arr_6 [i_1]), (-2147483647 - 1)))))));
                    }
                }
            }
        }
        arr_18 [12] |= arr_15 [i_1] [i_1] [0] [i_1] [i_1];
        var_22 = (((min((-2147483647 - 1), 0)) ^ (((100 < (arr_10 [i_1] [i_1]))))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_23 += (((arr_14 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1]) != (arr_5 [i_5 + 1])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_29 [i_5] [i_5] = (arr_8 [i_6] [i_7] [i_8]);
                        arr_30 [i_7] [i_8] = min((arr_13 [i_5] [i_7] [i_7] [i_5] [i_8]), (((2147483625 / 2147483647) ? (((-1183839668 < (arr_6 [i_5])))) : -1141365760)));
                        arr_31 [6] [i_6] [i_6] [i_6] [i_6] [i_8] = (arr_21 [i_6] [i_7]);
                        var_24 = (arr_9 [i_6]);
                    }
                }
            }
        }
        var_25 ^= (arr_26 [i_5] [i_5]);

        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_35 [i_5] [i_9] = ((29477 ? (((arr_7 [6]) ? 0 : (arr_23 [i_5] [i_5] [i_5]))) : ((((arr_33 [i_5] [i_9] [i_9]) < (arr_5 [i_9]))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_44 [5] [i_11] [i_12] &= (((((arr_39 [9] [i_9] [13] [i_11]) == 65535)) ? (((arr_10 [i_10] [i_11]) ^ 2147483647)) : (arr_6 [i_12])));
                            var_26 |= 1078869183;
                            var_27 = arr_12 [i_5] [8] [i_5 - 1] [i_5 + 1] [i_5 + 1];
                        }
                    }
                }
            }
        }
        arr_45 [i_5] = (arr_8 [i_5] [i_5] [i_5 + 1]);
    }
    var_28 = var_8;
    #pragma endscop
}
