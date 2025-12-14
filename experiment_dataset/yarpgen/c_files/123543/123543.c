/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = -6;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_8 [i_1] [i_1]);
                                var_18 = (min(var_8, (min((((arr_10 [4] [i_1] [1]) ? var_6 : var_16)), var_6))));
                                arr_14 [i_0] [i_0] [i_1] [i_4] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_19 = (!var_4);
        var_20 = ((-(arr_17 [i_5] [i_5])));
        var_21 += (arr_17 [i_5] [i_5]);
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_22 = (min((arr_20 [i_6 - 2] [i_6 - 2]), (min(((~(arr_22 [i_6]))), 542904269))));
                    arr_28 [i_6] = var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 2] [i_6] [i_6] = (max(((11 | (arr_26 [i_6] [i_7] [i_7] [i_7]))), (((!(arr_24 [i_6] [i_10 - 1]))))));
                                arr_34 [i_6] [i_9] [i_8] [i_7] [i_6] = (106 ? (min(8502032055514138176, (!var_2))) : var_12);
                                var_23 &= var_5;
                                arr_35 [i_10] [i_6] [i_6] [i_7] [i_6 - 1] = (((arr_22 [11]) * (arr_19 [i_6])));
                                var_24 *= ((!(arr_22 [i_6])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_25 = ((+(min((arr_24 [i_6] [i_6]), -11767))));
                                var_26 = (arr_27 [i_12] [i_11]);
                                arr_41 [i_6] [i_6] = (min((max((-11 && var_1), ((-(arr_25 [i_8] [i_11] [i_12]))))), (((~(((arr_25 [i_8] [i_8] [i_12]) ? 3 : (arr_38 [8] [8] [i_7] [8] [i_11] [i_12]))))))));
                                arr_42 [i_6] [i_7] [i_8] [i_8] [i_6] [i_12] = ((~(~162203849)));
                                var_27 = (max(var_27, (((var_5 ? (arr_27 [i_11 + 1] [i_11 - 1]) : ((-var_7 - (((min(var_8, 15799)))))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_43 [i_6] = (max(var_0, ((max((arr_26 [i_6] [i_6 + 2] [i_6] [i_6 - 2]), (arr_26 [i_6] [i_6] [i_6] [i_6]))))));
    }
    #pragma endscop
}
