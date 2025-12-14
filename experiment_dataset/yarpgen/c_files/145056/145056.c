/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] = (min((((var_10 == var_6) ? (((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_3 [i_0] [i_0] [i_0]))) : (((arr_0 [i_0] [i_1]) ? (arr_2 [i_0] [i_1 + 1] [i_1]) : var_2)))), (((!(((var_7 + (arr_2 [i_0] [i_0] [i_0])))))))));
                var_17 = ((!((!(15084963099292459093 | var_3)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] [i_3] = ((((((((var_5 ? var_8 : (arr_1 [i_0 - 1])))) ? (arr_0 [i_1 + 3] [i_2 + 1]) : (arr_12 [i_0] [i_0] [i_0])))) ? 3361780974417092523 : ((max((arr_8 [i_4] [i_4 - 1] [i_2] [i_2] [i_2]), var_0)))));
                                var_18 = (((((min((arr_14 [i_0] [i_2] [i_4] [i_4]), var_15)) == var_7)) ? ((max((arr_14 [i_1 + 3] [i_2 + 1] [i_4] [i_4 + 4]), (arr_14 [i_1 + 3] [i_2 + 1] [i_4] [i_4 + 4])))) : (((max((arr_13 [i_0] [i_0 - 3] [i_4] [i_0] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))) % (((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_1 [i_1]) : var_14))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] = (max((((arr_6 [i_0 - 1] [i_1 + 4] [i_1 + 2]) ? var_14 : (arr_6 [i_0] [i_1] [i_1]))), (((((var_5 ? var_0 : (arr_10 [i_1] [i_1] [i_1] [i_0])))) ? (((var_0 ? var_3 : (arr_14 [i_0 + 1] [i_0] [i_0] [i_0])))) : (((arr_2 [i_0] [i_0] [i_0]) ? var_1 : (arr_2 [i_0] [i_1 + 2] [i_1])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] [i_6] = (arr_18 [i_0] [i_1] [i_1] [i_6]);
                            arr_24 [i_0] [i_1] [i_5] [i_6] = ((+((-var_2 ? (!2147352576) : (arr_10 [i_0] [i_1] [i_5] [i_6])))));
                            var_19 = ((!(arr_10 [i_0] [i_0] [i_0 - 3] [i_0])));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_28 [i_7] = (((((var_1 ? ((min((arr_27 [i_7]), (arr_3 [i_7] [i_7] [i_7 + 1])))) : (((arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) % var_10))))) ? ((((((arr_27 [i_7]) - (arr_6 [i_7] [i_7] [i_7])))) ? (min((arr_22 [i_7] [i_7] [i_7] [i_7] [i_7]), var_16)) : ((max((arr_13 [i_7] [i_7] [8] [i_7] [i_7]), (arr_17 [i_7] [i_7] [i_7])))))) : ((-1 ^ (max((arr_10 [i_7] [i_7] [i_7] [i_7]), (arr_11 [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1])))))));
        var_20 = var_8;
    }
    var_21 = min(((var_7 ? var_15 : var_2)), (((!(((var_6 ? var_12 : var_14)))))));
    var_22 = var_1;
    #pragma endscop
}
