/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((-1 ? ((((20861 | 20861) || 147131963))) : (((!var_3) ? 20861 : 20861))));
    var_16 = var_13;
    var_17 &= ((~(min(-20861, (31529 ^ var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(196, ((((arr_0 [i_0]) >> (20865 - 20859))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = (!-0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((-(((arr_0 [i_4]) ? var_3 : (arr_6 [i_0] [i_1] [i_3] [i_3])))));
                                var_21 &= (((var_11 >> 1) || ((((arr_9 [8] [8]) ? 196 : 1919390023)))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    arr_17 [9] [9] [i_5] = (((-9223372036854775807 - 1) & 0));
                    var_22 += (((((((!(arr_8 [i_0] [i_0] [i_0] [i_1] [0])))))) * (((!(arr_11 [i_0] [i_0] [i_1] [i_5 + 3] [i_5 + 3]))))));
                    arr_18 [1] [i_5] [i_5 - 3] = (((arr_4 [i_1] [i_1]) * (min((((arr_4 [i_0] [i_0]) * -1)), (arr_12 [i_0] [i_0] [i_0] [i_5 + 1] [i_5])))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_23 *= ((((min(var_2, 34007)) + (((var_5 ? 20832 : var_8))))) * ((((arr_13 [4] [i_0] [i_1] [i_1] [i_6] [i_6]) ? (arr_1 [9] [i_6]) : -20850))));
                    arr_22 [i_6] = ((((max((arr_14 [i_0] [i_0] [i_6] [i_0]), ((-92 ? (arr_14 [10] [i_0] [10] [i_6]) : (arr_2 [i_0] [i_0] [i_6])))))) ? 65535 : (((((9162139995910063927 ? (arr_11 [i_0] [i_1] [10] [i_6] [i_6]) : var_2))) ? 0 : 65527))));
                    arr_23 [0] = (arr_14 [i_0] [i_1] [i_6] [i_6]);
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_30 [i_1] [i_7] [i_8] = ((((((arr_13 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2]) != (arr_5 [1] [11] [i_7 - 1] [1])))) + ((min((((!(arr_7 [i_1])))), (arr_28 [i_0] [i_1] [i_7] [3]))))));
                            var_24 &= (((arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1]) < ((((arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1]) && (arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 1]))))));
                        }
                    }
                }
                var_25 = ((((-(arr_8 [i_0] [i_0] [i_0] [i_0] [8]))) << (((max(199, (((arr_2 [i_0] [i_0] [i_0]) | -20861)))) - 156))));
            }
        }
    }
    var_26 = var_4;
    #pragma endscop
}
