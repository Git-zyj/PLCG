/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = ((!(arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] = ((var_16 ? 1 : var_16));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [8] [i_3] [13] [i_1] [i_1 + 1] [7] = var_12;
                        arr_11 [i_0] [i_1] = -93;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_20 |= ((((687959678 <= (arr_1 [i_0] [i_0]))) ? ((var_16 ? 1098249007 : (arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]))) : var_11));
                            arr_14 [i_0] [i_2] [i_3] [i_3] = (((arr_8 [i_1 - 1] [i_1] [i_1] [i_3] [12] [i_4]) % 257086254557249564));
                            var_21 = (max(var_21, (arr_2 [i_1 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] &= var_8;
                            arr_19 [1] [i_3] [i_3] [1] [i_5] = (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [4] [4] [i_5]) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_1 + 2] [17] [i_2] [i_1 + 2] [10] = (((arr_16 [i_1 + 1] [i_1 + 2]) > (arr_20 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])));
                            var_22 += (arr_1 [i_1 - 1] [i_1 + 2]);
                        }
                        var_23 = (min(var_23, (((var_9 >> (((arr_1 [i_1 + 1] [i_1 + 1]) - 2029351716)))))));
                        var_24 = -930089103;
                    }
                }
            }
            arr_25 [4] [9] [9] &= var_0;
            arr_26 [i_0] |= ((~(var_11 | 18189657819152302051)));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_29 [i_7] = (arr_6 [i_7] [9] [1] [7]);
            var_25 += ((!(arr_13 [i_0] [8] [i_7] [i_7] [i_0])));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_26 = ((((((arr_1 [i_8] [i_0]) ? 1 : var_0))) + ((8962 ? (arr_15 [1] [i_8] [i_0] [i_0] [3]) : -118))));
            var_27 = -930089095;
            arr_32 [i_8] = ((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_28 = ((~(arr_35 [i_0] [i_9])));
            var_29 = (((arr_13 [i_0] [i_0] [i_0] [i_9] [i_9]) + (arr_7 [i_0] [i_9])));
        }
    }
    var_30 = (min(((((var_5 ^ var_8) <= 2))), var_3));
    var_31 = var_5;
    #pragma endscop
}
