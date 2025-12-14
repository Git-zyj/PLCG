/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = (min((max(var_3, ((var_10 ? (arr_1 [i_0]) : 7)))), (4294967289 == -6180700755439974005)));
        arr_2 [12] = (min(((1902361473 + (arr_0 [i_0 - 1]))), (-127 - 1)));
        var_16 = (max(var_16, ((min((arr_1 [i_0 + 1]), ((~(arr_0 [i_0 + 1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [10] [i_2] &= (max(-7559078644811091254, (((((((!(arr_0 [i_0]))))) > (max(1131896638, (-9223372036854775807 - 1))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [7] [i_3] [i_2] [7] = ((!(((45 ? 4294967295 : -1902361475)))));
                        var_17 = (((arr_4 [i_0] [i_1] [i_1]) / (arr_10 [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (min(var_18, (arr_16 [i_0] [i_0] [i_4])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_19 = ((arr_11 [i_0] [i_1] [i_2]) | var_7);
                            var_20 = (arr_18 [18] [18] [i_4] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [6] = (max(127, (-6180700755439974001 * 1)));
                            arr_23 [i_6] = (((!(arr_14 [i_0] [i_2]))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_0 + 2] [i_7] [1] [10] [i_7] = ((!(((~((1 ? 1 : -119)))))));
                            var_21 += (1 | (min(9032, 18446744073709551615)));
                            var_22 = (arr_10 [i_2] [i_7]);
                        }
                        var_23 = arr_15 [i_0] [i_4];
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_31 [i_0] [i_8] [i_1] [i_2] [14] = 1;
                        arr_32 [i_8] [i_8] = 1;
                        var_24 = ((9223372036854775807 ? var_9 : (arr_27 [i_0 + 1] [i_8 - 1])));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 8;i_9 += 1)
    {
        arr_35 [i_9] [i_9] |= (arr_11 [i_9] [4] [i_9]);
        var_25 &= ((-((max((arr_33 [i_9 - 1]), (9223372036854775807 == var_12))))));
    }
    var_26 = var_14;
    var_27 = (max(1814725444, 245));
    #pragma endscop
}
