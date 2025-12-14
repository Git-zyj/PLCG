/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 ? 3420 : var_7));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = var_13;
                            var_19 += ((-var_13 ? (arr_6 [i_1] [i_2 + 1] [i_3 + 1]) : 0));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_20 ^= (((arr_6 [i_1] [i_2 + 1] [5]) ? ((5108965940015733288 ? var_4 : var_3)) : -123));
                            var_21 += (((98 ? (arr_3 [i_0] [i_0] [i_0]) : var_0)));
                            arr_13 [3] [i_1] [i_1] [i_1] [3] = (((((var_12 ? 1269692964 : (arr_10 [i_0] [i_1] [1] [i_3 + 1] [i_5] [9] [i_1])))) | ((var_7 & (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [1] [i_1] [i_1] [2] [1] [i_6] = ((var_16 <= ((var_0 ? var_7 : 78))));
                            var_22 = (arr_14 [i_0] [i_1] [1] [6] [1]);
                            var_23 = ((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_6]) ^ 30)));
                            var_24 = (max(var_24, (((((-9223372036854775807 - 1) ? (arr_12 [8]) : (arr_4 [7] [i_1] [i_1])))))));
                            var_25 = (((arr_10 [i_0] [i_0] [8] [i_0] [i_0] [i_0] [i_0]) | (arr_10 [i_0] [i_1] [4] [i_2 - 1] [i_3 + 1] [i_6] [i_6])));
                        }

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_20 [i_2] [5] [i_2] [9] [i_2] [i_2 - 1] = 9223372036854775807;
                            var_26 = var_12;
                            arr_21 [i_0] [i_1] [i_3] [7] |= 14447774904298073033;
                            var_27 ^= (arr_17 [i_0] [i_1] [i_2 + 2] [i_3] [i_7]);
                            var_28 = (max(var_28, var_11));
                        }
                        arr_22 [2] [6] [2] = (arr_0 [i_0] [8]);
                        arr_23 [i_0] [i_1] [2] [2] = var_16;
                    }
                }
            }
        }
        arr_24 [i_0] |= (3114 != -81);
        arr_25 [i_0] = var_9;
        var_29 *= ((((((((arr_1 [i_0]) ? (arr_7 [7]) : (arr_12 [i_0]))) + (((max((arr_2 [i_0] [i_0] [i_0]), var_16))))))) ? 8184539534380577433 : 8935141660703064064));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_30 [i_8] [13] &= (((arr_26 [i_8]) ? (arr_26 [i_8]) : (arr_26 [i_8])));
        arr_31 [18] [i_8] = ((var_16 - (-9223372036854775807 - 1)));
        var_30 = (max(var_30, (~var_1)));
    }
    #pragma endscop
}
