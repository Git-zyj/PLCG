/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] = ((-1 ? 9223372036854775807 : ((max(3106828134, (arr_4 [i_0 - 1] [i_3]))))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] = (!((((((arr_3 [i_3]) ? -1 : 1188139172)) / (((var_13 ? 1188139175 : (arr_0 [i_1]))))))));
                        }
                    }
                }
                var_19 = (max((~3106828134), 32767));
                var_20 = (max(1, var_14));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_5] [i_4 + 3] [i_6] = var_4;
                    arr_22 [i_4] [i_4] [i_5] = ((((!(arr_17 [i_4] [i_6 + 1] [i_6])))));

                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_5] = min((min((arr_20 [i_5] [i_5 - 2]), (arr_20 [i_5] [i_5 + 4]))), ((var_15 ? (arr_20 [i_5] [i_5 + 2]) : (arr_20 [i_5] [i_5 + 1]))));
                        var_21 -= max((max(var_13, var_2)), (arr_20 [i_4] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_28 [i_4] [i_5 + 1] [i_4] [i_8 - 1] [i_5] = (((var_1 % 231) ? (((arr_17 [i_4] [i_4] [i_6]) ? (arr_24 [i_4 - 1] [i_5 + 4] [i_6] [6] [i_5 + 4]) : var_17)) : var_1));
                        arr_29 [0] [1] [i_4] [i_4] [i_5] [i_4] &= var_17;
                        var_22 = ((((((arr_24 [i_8] [i_4] [i_6] [18] [i_4]) ? (arr_26 [i_4] [i_5] [i_5] [i_8] [23] [i_8 - 1]) : var_1))) ? ((((arr_17 [i_4] [i_6] [i_8]) > var_3))) : ((-(arr_24 [22] [i_4] [i_5] [i_6] [5])))));
                        var_23 = (!1188139199);
                    }
                }
            }
        }
    }
    var_24 = (max(-1, (var_11 & var_14)));
    #pragma endscop
}
