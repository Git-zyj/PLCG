/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));
    var_11 = (min(var_11, var_1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (min((arr_1 [i_0] [i_0]), 28939));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (max(var_13, ((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        var_14 = (max(var_14, (((!(arr_5 [i_1]))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                var_15 *= ((var_0 | (arr_13 [i_3 - 2] [i_2] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((28 ? 11 : 65525)))));
                            arr_22 [i_3] [i_3] = var_5;
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                var_17 = (17592186044415 - (~786432));
                var_18 = (~var_4);
                var_19 &= ((-(arr_18 [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6] [12])));
                var_20 = (max(var_20, ((((!18446726481523507206) ? (arr_24 [15] [7] [i_6] [i_6]) : (arr_19 [i_6] [i_6] [i_6 - 2] [i_6] [i_2] [i_2]))))));
            }
            var_21 = (max(var_21, ((((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1]))))));
            var_22 = (min(var_22, (((((3637438135 ? 15 : 46)) / var_9)))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_23 &= (((arr_14 [i_1]) ? 17592186044434 : ((((arr_10 [i_1] [i_1]) ? var_6 : 8)))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_35 [i_1] [i_1] [18] &= (((arr_31 [i_8] [22] [i_8 + 1] [i_8 + 3] [i_8] [i_8]) ? (arr_31 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8] [i_8]) : (arr_31 [i_8] [i_8] [i_8 + 2] [i_8] [i_8] [i_8])));
                            arr_36 [i_1] [i_7] [i_8] [11] [i_8] [i_10] = 9339;
                        }
                    }
                }
            }
            arr_37 [i_1] [i_1] = 65519;
            arr_38 [i_1] [i_1] = (((arr_18 [i_7] [i_1] [i_1] [i_1] [i_1] [i_7]) * (arr_18 [i_1] [i_7] [i_7] [i_7] [i_1] [i_1])));
        }
        arr_39 [i_1] |= (arr_15 [i_1]);
    }
    #pragma endscop
}
