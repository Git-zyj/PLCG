/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((((min((arr_1 [i_0] [i_0]), 0))) && (arr_0 [1] [i_0])))), 21902));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_12 = (min(var_12, (!109)));
            var_13 = (arr_0 [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((((~(arr_8 [i_2])))) ? (arr_1 [i_2] [4]) : (((arr_8 [i_2]) % (arr_3 [i_2] [i_2])))));
        arr_10 [i_2] = (arr_6 [i_2]);
        arr_11 [6] |= (((arr_1 [16] [16]) ? (arr_0 [i_2] [i_2]) : (((arr_0 [i_2] [i_2]) ^ (arr_4 [i_2] [i_2] [1])))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {
                    var_14 |= var_10;
                    var_15 -= ((-((((max((arr_4 [i_3] [i_3] [i_5]), (arr_18 [i_3])))) ? (min((arr_14 [1]), (arr_17 [i_4]))) : (((-(arr_5 [i_4] [i_5]))))))));
                }
            }
        }
        var_16 = (arr_15 [i_3 + 1]);

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_31 [i_8] [i_7] = ((((((((3 ? 184 : 15))) ? (min(var_8, var_2)) : ((((!(arr_13 [i_9])))))))) && 5));
                            var_17 = (min(var_17, ((((((arr_21 [i_7 + 3] [i_7]) ? (arr_20 [i_8 - 2] [i_9 - 1] [i_3 + 1]) : (arr_29 [i_9 - 2] [i_6 + 2]))) / (((var_11 / (arr_23 [i_6 + 2])))))))));
                        }
                    }
                }
            }
            arr_32 [i_3] [i_6 + 3] [i_3] = (~(arr_27 [10] [i_6] [i_6] [i_6] [i_6]));
        }

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_18 = (min((arr_7 [i_10]), (((((arr_13 [i_3]) ? var_1 : -1524450483)) / (((-(arr_24 [i_3 + 2]))))))));
            var_19 = (arr_26 [i_10] [i_10] [i_3 - 1] [i_3 - 1] [i_3]);
            var_20 ^= ((((((!(arr_17 [i_3 + 2]))) ? (((arr_14 [i_10]) ? var_5 : (arr_21 [i_3] [i_3]))) : (arr_12 [i_3 + 1]))) > (arr_22 [i_3] [i_10] [i_10])));
            arr_35 [i_3] [i_10] [i_3 + 1] = (arr_23 [i_3]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_21 = (arr_15 [i_3 + 1]);
            var_22 = (max(var_22, var_11));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_23 = (arr_14 [i_12]);
            arr_42 [i_12] = -11;
            arr_43 [i_12] [i_12] = ((!(arr_37 [i_3 + 1])));
        }
    }
    var_24 = ((var_9 ? var_2 : (min(var_4, 0))));
    #pragma endscop
}
