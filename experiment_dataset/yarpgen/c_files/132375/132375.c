/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (arr_0 [i_3])));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((-(((0 || (arr_1 [i_0]))))));
                    }
                }
            }
        }
        var_15 = 195;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_4] [6] [i_5] = ((arr_11 [i_4] [12]) * (((arr_6 [i_4] [i_5] [i_5] [0]) ? (arr_3 [i_4] [i_5] [i_5]) : (arr_3 [i_4] [i_5] [i_5]))));
            arr_18 [i_4] [i_5] [i_5] = (~var_4);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = 4294967291;
                        var_17 ^= (((arr_20 [i_4] [i_6] [i_7]) % (arr_0 [i_4])));
                        arr_26 [2] [i_5] [i_6] [5] = ((~(arr_6 [i_4] [i_5] [i_6] [i_7])));
                        arr_27 [i_4] [i_5] = var_4;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_31 [i_4] [i_5] [i_6] [i_7] [i_8] = ((((((arr_29 [8] [i_5] [i_6] [i_7] [i_8] [i_4] [i_4]) % (arr_29 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] [i_8])))) ? (arr_6 [i_4] [i_5] [i_7] [i_7]) : (((!(arr_30 [i_4] [2] [i_6] [i_7] [i_8]))))));
                            arr_32 [i_4] [i_5] [3] [i_6] [i_7] [i_8] = (((arr_20 [i_4] [i_5] [i_6]) ? (arr_7 [i_4] [i_5] [i_6] [i_7]) : (arr_16 [i_8] [i_4])));
                        }
                    }
                }
            }
            var_18 = (((arr_0 [i_4]) < (arr_10 [i_5] [i_5] [i_5] [i_5] [i_4])));
            var_19 += (((arr_24 [i_4] [i_5] [i_4] [13] [i_5] [i_4]) & -59));
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_37 [i_4] [i_9 + 1] = ((((7673 ^ (arr_13 [i_9]))) / 957));
            arr_38 [i_9] [i_4] = (arr_21 [i_4] [i_4] [i_9 + 2] [i_9]);
            arr_39 [i_4] = (((arr_10 [i_4] [i_4] [i_4] [i_4] [4]) ? ((1 ? (arr_22 [i_4] [i_9] [i_9 + 1]) : (arr_30 [i_4] [i_4] [i_9] [i_9 + 2] [i_9 + 2]))) : 14148));
            arr_40 [i_4] [i_9] [i_9] = (arr_3 [i_9 - 1] [i_9 + 2] [i_9 + 1]);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_20 = ((!(((arr_30 [i_4] [i_4] [i_10] [i_10] [i_10]) && 18446744073709551615))));
            arr_43 [2] [i_10] [i_10] = (arr_1 [1]);
            arr_44 [i_10] [15] = (4294967295 - (arr_0 [3]));
        }
        var_21 += 1;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        arr_47 [i_11] = ((4294967275 ? 53313 : (arr_25 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [3])));
        arr_48 [i_11] [i_11] = (((arr_19 [i_11] [i_11 + 1]) ? (arr_19 [i_11 + 1] [i_11 + 1]) : (arr_33 [i_11])));
    }
    #pragma endscop
}
