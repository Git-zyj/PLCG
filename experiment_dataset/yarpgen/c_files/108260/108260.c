/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (((((~(((arr_6 [i_0]) ? var_7 : (arr_6 [1])))))) ? ((9120105430037679419 ? -121 : 9120105430037679419)) : ((((!(arr_5 [i_0] [i_0] [i_0 + 2])))))));
                var_20 = -9223372036854775802;

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] |= ((((1583738600 < (arr_2 [i_0 - 2] [i_0 - 2]))) ? ((var_17 ? var_13 : var_1)) : ((((arr_2 [i_0 - 2] [i_0 - 2]) ? (arr_2 [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0 - 2] [i_0 - 2]))))));
                    var_21 = ((+((~((var_6 ? (arr_8 [i_1] [i_2]) : -9120105430037679420))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_1] = ((arr_1 [i_3 - 1]) ? (((0 != (arr_1 [i_1])))) : (!var_6));
                                arr_16 [i_4 + 2] [i_2 - 2] [4] [i_2 - 2] [i_0 - 2] [i_0 - 2] = (min(((((arr_11 [19] [i_3 + 1] [i_1]) > (arr_11 [9] [i_3 + 2] [i_0])))), -9120105430037679419));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [1] [i_5] [3] [i_5] [i_0] = ((~(arr_1 [i_2])));
                                arr_24 [i_0] [i_0] [3] [i_5] [i_1] = ((!(arr_3 [i_0 - 1])));
                                var_22 = (min(var_22, 11));
                                var_23 = (min(var_23, (((((min(var_16, var_7))) ? (~var_12) : (((((arr_9 [i_2 + 2]) < 2097151)))))))));
                            }
                        }
                    }
                    arr_25 [i_0] [18] [i_2 - 2] = ((-(((0 != (arr_4 [i_0 + 1]))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_24 = 13230;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_32 [i_7] [7] [i_7] [i_9] [i_7] [i_7] = (min(((var_9 & (arr_1 [i_0 - 2]))), (((~(arr_12 [i_9 + 1]))))));
                                var_25 *= ((!(((var_18 ? 55689150982912643 : (9223372036854775801 != var_17))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_26 = (!var_18);
                                var_27 = ((~((((arr_30 [i_0 - 4] [i_1] [i_11 + 3]) >= var_14)))));
                            }
                        }
                    }
                    arr_40 [i_0 + 2] [i_1] [i_7] = (arr_2 [i_1] [i_1]);
                }
                var_28 = 127;
                var_29 = (((((-(arr_22 [i_0] [i_0] [1] [1] [i_0] [1] [i_1])))) ? ((((arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]) ? var_17 : var_3))) : (((-9223372036854775807 - 1) | 18446744073709551610))));
            }
        }
    }
    var_30 = (min(var_30, ((max(-183416860, var_5)))));
    var_31 = var_3;
    #pragma endscop
}
