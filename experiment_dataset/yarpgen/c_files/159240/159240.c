/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 *= (((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : 237)) : var_3))) ? -1 : (((((arr_2 [i_0 + 1]) || (((var_6 ? (arr_0 [i_0]) : (arr_2 [i_0])))))))));
        var_18 += ((((((arr_1 [1]) ^ (((~(arr_2 [i_0]))))))) ? -1 : (((((arr_1 [i_0 + 1]) >= (arr_0 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [9] = (arr_6 [i_0] [i_1] [i_0] [0]);

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_4] [i_4] [i_4] [i_4 - 1] &= ((~(min(1, (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4 - 1])))));
                            arr_15 [i_0 + 1] [3] [i_0] = (((-(arr_9 [i_1] [i_1 - 1] [1] [i_1] [i_1] [i_1 - 2]))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_19 *= ((~(((arr_6 [i_1 - 1] [11] [i_0 + 1] [12]) ^ (arr_3 [i_1 + 1] [i_0 + 1])))));
                            var_20 = (min(var_20, (((-1 ? ((+(((arr_5 [i_0]) ? var_7 : 0)))) : (arr_12 [i_1 - 1] [i_0 + 1]))))));
                            var_21 |= ((((((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])))) ? (min((-9223372036854775807 - 1), 1)) : (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            arr_18 [i_0 + 1] [0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (arr_5 [0]);
                            var_22 &= (arr_12 [i_2] [i_1 - 2]);
                        }
                        arr_19 [12] [i_2] [i_1] [i_0] = ((-(min((arr_6 [2] [i_2] [11] [11]), (arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_2])))));
                        var_23 &= ((min((max(var_2, var_5)), var_6)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_24 = var_1;
            var_25 *= (--127);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = (min(var_26, (arr_13 [i_0] [i_7] [i_0] [i_0] [i_0])));
            var_27 = (min(var_27, (arr_7 [12] [i_7] [i_7])));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_28 [i_0] [i_0 + 1] [2] = (~-127);
            var_28 = ((!(arr_26 [i_0])));
            var_29 = (arr_5 [i_8]);
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            {
                var_30 = (max(var_30, (arr_31 [i_9 + 4] [i_10])));
                arr_34 [i_10] [i_10 - 1] = (arr_30 [i_10]);
            }
        }
    }
    #pragma endscop
}
