/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (var_8 != 2047);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = ((var_16 > ((((arr_8 [i_0 - 1] [i_1] [i_0]) || (arr_8 [i_0] [i_1] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_3] = ((-2047 ? -333926023 : 0));
                        var_20 = (arr_2 [i_0]);
                        var_21 |= ((~(arr_7 [i_1] [i_1] [i_2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_18 [i_0 - 1] [i_5] [i_4] [i_5] |= (((((var_9 < (arr_4 [i_0 - 1])))) & (~0)));
                        arr_19 [i_5] [i_1] [12] [i_5] |= ((~(((0 || (((var_13 ? (arr_5 [i_4]) : (arr_7 [i_0 - 1] [i_4] [i_5])))))))));
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_5] = (max(((max((var_3 ^ var_0), 66))), (arr_17 [i_0])));
                    }
                }
            }
            arr_21 [i_0] = ((-(arr_10 [i_0] [i_0])));
        }
        arr_22 [i_0] = ((((((arr_6 [i_0] [i_0] [i_0 + 1]) > 65535)) ? ((0 ^ (arr_8 [i_0] [i_0] [i_0]))) : (max((arr_0 [i_0]), var_10)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_22 = ((((arr_2 [i_0]) ? var_0 : -1)));
                        var_23 = ((var_4 ? (((arr_5 [i_8]) - 0)) : (min((arr_5 [i_8]), 2034))));
                        var_24 = (max((arr_1 [i_0 - 1]), (~var_0)));
                    }
                }
            }
        }
        arr_31 [i_0] = (min((((((arr_24 [i_0 - 1] [i_0]) <= var_7)) ? (((arr_2 [i_0]) ^ (arr_11 [i_0] [i_0] [i_0] [i_0 - 1]))) : var_5)), (((((max((arr_29 [i_0]), (arr_17 [i_0])))) || (arr_14 [i_0] [i_0] [i_0]))))));
    }
    var_25 |= (var_8 ? (~var_1) : ((-((65535 << (170 - 162))))));
    #pragma endscop
}
