/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (max((((arr_2 [i_0] [i_0]) ? 246 : 246)), (0 % 246)));
                var_12 = (min(var_12, ((((min(187, 64))) ? (((arr_3 [i_0 - 1] [i_1]) ? (arr_3 [i_0 - 1] [i_1]) : (arr_3 [i_0 + 1] [i_0]))) : ((min(var_7, (arr_3 [i_0 - 3] [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_13 = (max(var_13, (arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_1] [i_3] [i_0] [i_0] [i_4] = (((var_0 && 88) ? (arr_0 [i_0] [i_0]) : (((arr_6 [i_0] [i_1] [i_2]) ? (arr_7 [i_1] [i_2]) : 4294967295))));
                                arr_13 [i_0] [i_1] [i_0] [i_4] [i_4] = (arr_11 [i_3] [i_1 - 3] [i_2 - 2] [i_0] [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (arr_3 [i_1 + 2] [i_2]);
                }
                var_14 = (min(var_14, (((((((arr_8 [i_0] [i_1]) ? ((((arr_6 [i_0] [i_1] [i_1]) ? 7 : (arr_5 [i_0] [i_1] [i_1])))) : (((arr_7 [i_0] [i_0]) ? 7134664627964226777 : (arr_5 [i_0] [i_0] [i_1])))))) ? (((6 | 167) ? 3750896830084085862 : (7 | 17517324213751611936))) : (((-(arr_8 [i_0] [i_1])))))))));
                arr_15 [i_0] [i_0] [i_0] = ((((min((arr_6 [i_0] [i_0 - 1] [i_1]), 1))) ? (((arr_6 [i_0] [i_0 + 1] [i_0]) ? (arr_10 [i_0] [i_0 - 2] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_0 - 2] [i_0] [i_1] [i_1]))) : ((-(arr_10 [i_0] [i_0 + 1] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_15 = max(((((min(var_2, var_7))) ? var_5 : (var_4 - var_6))), ((min(18, 1))));
    var_16 = (((1978177731 && var_10) ? ((var_4 ? 1912362723041740502 : var_10)) : (((var_2 ? 156 : var_0)))));
    #pragma endscop
}
