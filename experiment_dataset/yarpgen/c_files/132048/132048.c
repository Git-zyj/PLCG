/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_9 ? 19420 : var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] &= (arr_2 [i_0] [8]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [1] [i_0] = (arr_0 [i_0] [i_0]);

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (max(var_12, (~var_0)));
                            var_13 = ((var_5 >= (7516088178517109072 / 1859)));
                            var_14 = (!(arr_10 [i_0] [i_0] [i_0] [i_3]));
                            arr_17 [14] [i_0] [i_2 + 3] [12] [i_4 + 1] [i_0] [i_0] = ((var_6 ? (((min(var_5, 15)))) : (arr_11 [i_0] [i_3] [i_4])));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (arr_4 [i_5]);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_15 = (i_5 % 2 == 0) ? (((((arr_6 [i_5] [i_5] [i_6] [i_6]) >> (((arr_10 [6] [12] [i_5] [i_5]) + 31443)))) + (arr_9 [i_5] [i_5 - 1] [i_6] [i_5]))) : (((((arr_6 [i_5] [i_5] [i_6] [i_6]) >> (((((arr_10 [6] [12] [i_5] [i_5]) + 31443)) - 36517)))) + (arr_9 [i_5] [i_5 - 1] [i_6] [i_5])));
            var_16 = (((arr_19 [i_5 - 3]) | (arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_28 [i_5] [i_7] [i_5] = (((!(arr_16 [0] [i_5] [0] [i_5]))));
            var_17 = (max(var_17, var_2));
        }
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        arr_33 [i_8] = (((((max((arr_30 [i_8] [i_8]), (arr_32 [i_8 + 2]))) != (((arr_30 [i_8 + 3] [i_8]) * (arr_30 [i_8] [i_8]))))) ? var_6 : (arr_31 [i_8])));
        arr_34 [i_8] |= ((((((arr_30 [i_8] [i_8]) >> (((arr_31 [i_8]) - 60235))))) ? (((!((((arr_31 [14]) | var_10)))))) : var_4));
        var_18 = var_8;
    }
    var_19 = (((((-((var_8 ? var_9 : var_0))))) ? (((var_7 ? var_4 : var_5))) : var_1));
    var_20 = var_9;
    #pragma endscop
}
