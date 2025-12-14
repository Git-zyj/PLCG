/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((((arr_0 [i_0]) == (arr_0 [i_0]))) ? ((((min((arr_1 [i_0]), (arr_1 [10])))) ? -107 : ((var_8 ^ (arr_0 [i_0]))))) : ((((~1) <= 107)))));
        arr_2 [i_0] [i_0] = var_9;
        var_12 = (max(var_12, (((!((min((var_5 % var_7), ((var_10 ? var_8 : 600781337))))))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_13 = ((!(((~(arr_4 [i_1 - 2]))))));
        arr_5 [i_1] &= -107;
        var_14 = (~var_4);
        var_15 = ((((var_1 >= ((((arr_0 [i_1 + 1]) * 0))))) || ((min(((~(arr_0 [0]))), (var_10 / var_6))))));
        var_16 = (arr_1 [i_1 - 2]);
    }
    var_17 = (max(var_17, ((((((((var_6 ? var_4 : 19875)) + (var_6 <= var_4)))) ? (((((~var_10) && (var_6 / var_6))))) : var_1)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] = (arr_4 [0]);
                arr_12 [i_3] = (arr_7 [i_3 - 3] [i_2 - 1]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = (max((min((arr_10 [i_3 + 4] [i_3] [i_3 + 2]), (min((arr_4 [i_2]), var_6)))), 1));
                                var_19 = (((+(((arr_17 [i_3] [i_4]) ^ (arr_8 [i_6]))))));
                                arr_19 [i_3] [i_3 + 2] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? ((~(((((arr_17 [i_3] [i_3 + 4]) + 9223372036854775807)) << (var_6 - 804578897))))) : ((~(((((((arr_17 [i_3] [i_3 + 4]) - 9223372036854775807)) + 9223372036854775807)) << (var_6 - 804578897)))));
                                arr_20 [i_4] [i_3] [i_3] = ((!((((arr_1 [i_5]) >> (var_9 + 1459662797870910312))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_10));
    #pragma endscop
}
