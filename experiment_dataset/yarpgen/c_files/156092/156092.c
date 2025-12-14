/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(var_1, var_9)))) < ((var_4 ? (max(var_3, var_7)) : 7030700251009724037))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = 1115800867;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((max(var_15, (max((arr_1 [i_0] [i_4]), (~10622))))))));
                            arr_14 [i_0] [i_2] = var_1;
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_2] = (((arr_4 [i_4] [i_2]) < 68));
                            var_19 = ((((((arr_9 [i_1] [i_2] [i_3] [i_4]) ? var_9 : (arr_13 [i_0] [i_0] [i_0])))) / (min(-7325824601447984630, (arr_13 [i_3 + 1] [i_3 + 1] [i_0])))));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] = (max((((+((((arr_4 [i_1] [i_0]) == 1)))))), (((arr_5 [i_0]) ? (arr_5 [i_1]) : 1175195363))));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        var_20 = (arr_18 [i_5 + 1]);
        arr_19 [i_5] = -7030700251009724037;
        arr_20 [i_5] = ((2071524496236561631 ? (arr_18 [i_5 - 1]) : (arr_18 [i_5 + 3])));
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            arr_25 [i_6] = ((~(arr_21 [i_6 + 1] [i_7 + 3])));
            var_21 = (max(var_21, (arr_22 [i_6 - 2])));
            var_22 = (((((1 ? (arr_21 [i_7] [i_7 - 1]) : -6649993941298890592))) ? ((((32559 <= (arr_22 [i_6]))))) : (arr_21 [i_6 + 1] [i_7 + 3])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    {
                        var_23 = (min(var_23, var_10));
                        arr_32 [i_6] [i_7] [1] [i_9] = (((arr_24 [i_6 - 1]) == (arr_24 [i_9 + 2])));
                        arr_33 [i_6] [i_6] [i_6 + 1] [i_9] = (arr_23 [i_6 + 2]);
                    }
                }
            }
            arr_34 [i_6 - 1] [i_7] = (((arr_27 [i_7 + 1] [i_7 - 2] [i_6 - 1] [i_6 - 2]) ? ((-(arr_30 [i_7] [i_6] [i_6]))) : (arr_30 [i_6 - 2] [i_7 - 1] [i_6 + 2])));
        }
        arr_35 [i_6] = ((+((((arr_26 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 2]) || (((-(arr_29 [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [i_6])))))))));
        arr_36 [i_6 - 2] [i_6] = (max((((arr_30 [i_6] [i_6 + 2] [i_6]) | (arr_30 [i_6 - 2] [i_6 + 2] [i_6 - 2]))), (arr_27 [i_6] [i_6 + 2] [i_6 + 2] [i_6])));
    }
    #pragma endscop
}
