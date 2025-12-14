/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_14 = (((((-4190678440312050264 ? 37108 : var_1))) & -5312245761357566624));
                                var_15 = (max(var_15, (((-1 ? var_3 : 1139217391)))));
                            }
                            arr_14 [i_1] [i_2] [i_2] = (((((var_0 >> (var_12 - 104)))) ? (arr_0 [i_3 + 1]) : (((arr_8 [i_3 + 1] [i_3 - 1]) ? (arr_0 [i_3 + 1]) : var_9))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 = (((~(arr_9 [i_0]))));
                            arr_21 [5] [4] [i_5] [i_5] [i_5] [i_6] = (((arr_6 [i_0] [i_1] [i_5] [i_6]) ? (arr_1 [i_6]) : (((1139217392 || 3155749904) ? (max(4294967283, var_3)) : (((1139217391 ? 3155749904 : 4294967267)))))));
                            arr_22 [i_1] [i_1] [1] [i_6] [i_1] = (arr_20 [i_0] [i_1] [i_0] [i_6] [i_5]);
                            var_17 = (arr_15 [1] [1] [i_6] [i_6]);
                        }
                    }
                }
                var_18 = (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_30 [i_8] = (~6);
                    var_19 = (max((max(var_11, 11)), var_6));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_20 += (arr_23 [i_7]);
                                var_21 = (((-17574 ? 3 : (arr_32 [i_7] [i_7] [i_8 + 3] [i_10]))));
                                var_22 = var_10;
                                arr_36 [i_7] [i_8] [i_9] = (min((((+((75 ? (arr_33 [i_7] [i_8] [i_8] [i_11]) : -76))))), (0 | 33755)));
                                var_23 = ((((((arr_24 [i_7] [i_9]) ? (((75 << (3886610142428010889 - 3886610142428010869)))) : (((arr_23 [i_10]) & (arr_33 [i_7] [i_9] [i_8] [i_11])))))) ? var_6 : (((((((arr_25 [i_11]) || 244))) > (arr_26 [i_8 + 1] [i_8 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 += 11;
    #pragma endscop
}
