/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (((!(!var_10)))) : ((((var_6 ? var_1 : var_7))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] |= (61210 & 1);

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((!(arr_4 [5] [i_1])));
            var_17 = (min(var_17, (arr_0 [i_0])));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_11 [i_1] [i_1] [i_1] = ((-(((((arr_0 [0]) <= (arr_10 [i_0] [6] [i_1] [i_2]))) ? ((-(arr_8 [i_0] [i_1] [i_1] [i_2]))) : ((47426 ? 27568 : 120))))));
                var_18 = (min(var_18, ((((((~(arr_5 [i_0])))) ? (arr_6 [i_0] [i_1]) : ((-8192 ? 59587 : 1)))))));

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_19 += (((arr_10 [i_0] [4] [i_0] [i_0]) ? (arr_0 [i_1]) : ((-(((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_1] = (arr_9 [i_3] [i_2] [2]);
                    var_20 = (min(var_20, (arr_4 [i_0] [i_1 + 2])));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        var_21 = arr_14 [3] [12] [3] [0] [i_4] [11];
                        var_22 = ((19791 != (((arr_4 [i_2] [i_2]) * (arr_13 [i_1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1 - 2] [i_1] [i_3] [i_5 + 1] [2] = ((((((arr_19 [i_3]) ? (arr_6 [i_1] [1]) : (arr_10 [i_0] [i_0] [12] [i_0])))) && ((((arr_13 [i_3] [i_1]) - (arr_4 [i_1] [i_3]))))));
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((((arr_0 [6]) && (arr_13 [i_1 - 1] [i_1 - 1]))) ? ((((arr_10 [6] [i_1] [i_2] [i_5 + 1]) && (arr_13 [i_2] [1])))) : (arr_19 [i_5])));
                        var_23 = (min(var_23, ((((((arr_5 [i_3]) % (arr_4 [i_1] [i_1 + 1]))) & (arr_14 [4] [i_5] [i_3] [4] [i_1] [8]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        var_24 = ((((arr_6 [i_1] [0]) | (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_27 [1] [i_0] [i_0] [i_3] [1] [i_0] [i_0] |= (arr_3 [i_0] [i_0] [i_0]);
                    }
                    var_25 = (min(var_25, (((((~(((arr_9 [i_0] [i_0] [i_0]) - (arr_17 [i_3] [i_1 - 1] [i_3] [i_2] [i_2] [i_3] [i_3]))))) * (((arr_24 [11] [i_1] [i_1] [0] [i_1] [i_1] [i_1]) ? (((arr_15 [i_3] [i_1] [i_1] [i_0]) ^ (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((arr_14 [9] [i_1 + 1] [i_1 - 2] [i_2] [i_2] [i_3]) ^ (arr_18 [i_0] [10] [i_1 - 1] [i_2] [i_2] [i_3]))))))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_31 [i_0] [i_1] [i_2] [i_7] = (~23118);
                    arr_32 [i_1] [6] [6] [i_2] [i_2] [i_1] = ((4 ^ (arr_17 [i_1] [i_0] [1] [i_1] [i_1] [i_1] [i_7])));
                }
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_26 = (min(var_26, (arr_18 [7] [i_1 - 2] [i_1] [i_1 - 2] [i_0] [i_0])));
                var_27 = (!(21113 | -31102));
            }
        }
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        var_28 = (max(var_28, ((((!(arr_35 [i_9] [8])))))));
        arr_37 [i_9] = (((arr_36 [i_9]) * (((((arr_35 [i_9] [i_9 + 2]) / (arr_36 [i_9])))))));
    }
    #pragma endscop
}
