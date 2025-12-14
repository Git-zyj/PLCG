/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((((var_9 ? ((var_5 ? var_9 : var_4)) : var_9))), ((((max(17777661445993281171, var_0))) ? var_14 : -1879048192)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 &= (arr_1 [1]);

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_19 = (max(var_19, ((min((~1879048192), (((!1) ? var_4 : (max((arr_4 [i_0] [i_0]), (arr_2 [i_3]))))))))));
                                arr_13 [i_4 - 2] [i_4] [i_3] [i_3] [i_1 - 2] [i_0] [i_0] |= (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] = (arr_12 [i_1]);
                                var_20 *= ((-((1 ? (min((arr_9 [10] [i_3]), (arr_3 [i_0] [i_3]))) : (((max(var_4, 511))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 9;i_6 += 1)
                            {
                                arr_19 [i_1] = ((1 ? ((9 ? (arr_11 [i_0] [4] [4] [4] [i_1] [i_6]) : (arr_18 [i_0] [i_1 + 3]))) : (arr_18 [i_1 + 3] [4])));
                                var_21 = (arr_1 [i_1 - 1]);
                                arr_20 [i_0] [i_1] [i_0] [i_0 + 1] [i_0 - 1] = (((arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 1]) ? (arr_18 [i_0 + 2] [i_1 + 2]) : (((arr_12 [i_1]) / 2878))));
                            }
                            arr_21 [i_1] [i_1] [i_2 + 1] [i_2] = (arr_5 [i_1] [i_1]);
                            arr_22 [i_0] [i_1] [i_1] [i_1] = (((max((max(16863, 18446744073709551615)), 0))) ? ((~(max(var_1, (arr_2 [i_1]))))) : ((((!(arr_1 [i_1 - 2]))))));
                        }
                    }
                }
                var_22 = (min((max((((arr_1 [i_0]) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_0]) : 0)), (min(var_3, 0)))), (((!(((63 - (arr_12 [i_1])))))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (min((arr_15 [i_0] [i_0] [i_0] [i_1] [i_0 + 2]), (~1879048212)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] = (arr_26 [i_1] [i_1] [i_7] [10]);
                                arr_31 [i_1] = (max(((-(arr_6 [i_8 + 2] [i_1 + 2] [i_8 + 2]))), (((arr_6 [i_8 - 1] [i_1 + 3] [i_7]) ? (arr_6 [i_8 + 2] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_8 - 1] [i_1 - 2] [i_1 - 2])))));
                                var_24 = ((~((max((arr_9 [i_0] [i_1]), (arr_4 [i_0] [i_1 + 2]))))));
                                arr_32 [i_0 + 2] [i_1] = (136146466 != 511);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}
