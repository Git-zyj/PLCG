/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 *= ((min(var_14, var_7)));
                    var_17 = (min(var_17, ((((((-(((var_5 != (arr_2 [i_1]))))))) ? ((((!(((var_12 ? var_5 : var_1))))))) : ((((((arr_5 [i_1] [i_1] [i_2] [i_0]) - var_1))) ? var_7 : (arr_5 [i_0] [i_1] [i_2] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (min(((1 ? 18446744073709551614 : 18446744073709551614)), ((((arr_9 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_2]) ? var_2 : var_9)))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] = ((+(((arr_1 [i_1 + 2]) * (arr_3 [i_1 + 1] [21] [i_1 + 1])))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (+-var_13);
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((((arr_8 [i_0] [i_1] [i_2] [i_0] [i_0]) ? -var_8 : (arr_0 [i_2])))) ? (max(var_1, var_0)) : ((((((var_9 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_4])))) ? (arr_0 [i_3]) : ((min((arr_6 [i_0] [i_1] [i_2] [0]), (arr_0 [i_3])))))))));
                            }
                        }
                    }
                    var_19 = (var_12 ? var_5 : ((min(var_9, var_10))));
                }
            }
        }
    }
    #pragma endscop
}
