/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 |= ((!(((arr_0 [8] [i_0]) < (arr_1 [12])))));
        var_20 -= (!10462640999787205409);
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_21 = (arr_1 [6]);
        arr_4 [7] = ((arr_2 [i_1]) ? (var_10 << 1) : ((-(arr_0 [16] [4]))));
        var_22 = var_13;
        var_23 += (max((arr_1 [18]), (((arr_0 [10] [i_1 + 1]) + ((var_16 + (arr_0 [2] [2])))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_24 = (i_2 % 2 == 0) ? ((max((max((arr_0 [i_2] [i_2]), (((arr_1 [i_2]) << (((((arr_0 [i_2] [i_2]) + 2047795134)) - 22)))))), (arr_3 [1])))) : ((max((max((arr_0 [i_2] [i_2]), (((((arr_1 [i_2]) + 9223372036854775807)) << (((((((((arr_0 [i_2] [i_2]) - 2047795134)) - 22)) + 1341314345)) - 33)))))), (arr_3 [1]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_3] = (((((var_8 >= (arr_1 [i_2])))) > ((~(((var_13 || (arr_0 [i_2] [i_2]))))))));
                    arr_12 [i_2] = ((~(arr_5 [4])));
                    var_25 -= -var_9;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_26 = max((((arr_14 [i_5] [i_5]) & (arr_14 [i_5] [i_5]))), (((~(arr_14 [15] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_27 = ((!(arr_18 [i_6 + 1] [i_6] [i_6 + 3])));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_6] [i_5] = var_5;
                            var_28 += (arr_14 [i_6 - 1] [i_9 + 1]);
                            var_29 = (arr_20 [i_6 - 2] [i_7] [i_6 - 2] [i_6] [1]);
                            var_30 = (((var_0 * -86) * (arr_16 [i_6])));
                        }
                    }
                }
            }
        }
        var_31 = (min(var_31, (((((((arr_15 [i_5] [14] [i_5]) - (arr_15 [i_5] [i_5] [i_5])))) && (arr_15 [i_5] [0] [i_5]))))));
        var_32 -= (arr_18 [i_5] [i_5] [i_5]);
        arr_27 [9] = arr_20 [i_5] [i_5] [i_5] [i_5] [i_5];
    }
    #pragma endscop
}
