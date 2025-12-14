/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 ^= (arr_0 [i_1] [0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 += (arr_4 [i_0] [i_3]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] = ((-(min((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (arr_0 [i_0] [i_0])))));
                            var_15 = (arr_1 [i_0]);
                            arr_16 [i_3] [i_3] &= (arr_2 [i_1]);
                            var_16 = (((arr_11 [i_0] [i_0] [i_2] [i_3]) ? (arr_7 [i_0] [i_2]) : (arr_7 [i_0] [i_0])));
                            var_17 = (max((arr_14 [i_0] [i_1] [i_0] [i_3] [i_4]), (min((arr_0 [i_0] [i_3]), (arr_14 [i_0] [i_1] [i_0] [i_0] [i_4])))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = (((0 ? 233 : 8936830510563328)) != ((((arr_3 [i_0]) ? (arr_11 [i_0] [i_0] [i_2] [i_3]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_18 ^= (((arr_20 [16] [i_1] [i_3] [i_3] [i_3]) - (((!(arr_20 [i_0] [i_3] [i_0] [i_0] [i_0]))))));
                        }
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((~(arr_1 [i_0])));
                        var_19 = (min(var_19, (arr_4 [i_0] [i_1])));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_20 = (min((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_6] [i_2] [i_0] [i_1] [i_0]))), (arr_14 [7] [i_2] [i_0] [i_1] [i_0])));
                        var_21 = (min(((~(arr_18 [14] [i_1] [i_6] [i_1] [i_1] [i_0] [i_1]))), ((max((min((arr_23 [i_6] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_2]))), (arr_6 [i_0] [i_1] [i_2] [i_0]))))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_22 = (min(var_22, (~36028797018963968)));
                            var_23 += (arr_13 [i_7] [i_1] [i_0] [i_2] [i_1] [i_1] [i_0]);
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_0] = ((((!(arr_5 [i_0])))));
                            var_24 = (!(((~(arr_12 [i_7] [i_6] [i_0] [i_2] [i_0] [i_0] [i_0])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_8] [i_0] [i_2] [i_8] = (((((!(arr_28 [i_0] [i_0] [i_0])))) | (arr_7 [i_0] [i_0])));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~((~(arr_20 [i_0] [i_0] [i_2] [i_8] [i_8]))));
                    }
                }
            }
        }
    }
    var_25 = var_11;
    var_26 = (~var_3);
    var_27 = min((((((var_4 ? var_11 : var_6))) ? var_10 : (min(1, -877566527759713769)))), ((min(1, 1))));
    #pragma endscop
}
