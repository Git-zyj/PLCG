/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [5] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (((~(arr_5 [i_2 + 1] [i_2 + 1]))));
                    arr_7 [i_0] [4] [7] [i_2] = (((~(arr_3 [i_2 + 1]))));
                    var_21 = (arr_1 [i_1] [i_2 + 1]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {
                    var_22 = ((((min((arr_9 [i_5 + 1]), (arr_9 [i_5 - 1])))) ? ((+(((arr_12 [i_5] [i_5]) / (arr_4 [i_5]))))) : ((((-123 * var_12) * ((-(arr_4 [i_3]))))))));
                    arr_14 [i_5] [i_5] [i_5] = ((((min(((var_4 * (arr_10 [i_3]))), var_2))) ? var_19 : ((max((arr_1 [i_3] [i_4]), -715365805)))));

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_23 = (((((arr_8 [i_6] [i_4]) ? (((min((arr_6 [i_3]), (arr_9 [1]))))) : ((var_7 ? var_7 : (arr_12 [i_5] [i_5]))))) % (arr_4 [i_5 + 1])));
                        var_24 = ((~(arr_17 [i_3] [i_4] [i_5 + 1] [i_5] [i_5 + 2] [10])));
                        arr_18 [i_3] [i_4] [i_5] [i_5] [i_5] [i_4] = (arr_8 [i_3] [i_3]);
                        var_25 = (max(var_4, (max(var_13, (arr_16 [i_5 + 3] [i_5 - 1] [i_5] [i_5] [i_5 + 2])))));
                        arr_19 [i_6] [i_5] [i_5] [4] = var_13;
                    }
                    arr_20 [i_3] [i_5] = -1353411412;
                }
            }
        }
        var_26 = (arr_5 [i_3] [i_3]);
        var_27 = ((((((!var_12) * 31))) ? (arr_1 [i_3] [i_3]) : (((arr_11 [i_3] [i_3]) * (arr_11 [i_3] [i_3])))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        var_28 = (arr_21 [i_7 + 1] [i_7 - 2]);
        arr_24 [i_7] = (~51);
    }
    var_29 = var_9;
    #pragma endscop
}
