/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (max(-1, 585647191540421778));
                            var_18 = (!(((var_11 ? (max(var_4, (arr_4 [i_0] [i_0]))) : (arr_4 [i_0] [i_0])))));
                            arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [15] [i_0] = (arr_7 [13] [i_2] [i_0 - 1] [i_3 - 2] [i_0 - 1]);
                        }
                    }
                }
                arr_9 [i_0] [i_1] = ((~(((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_0] [9] [i_5] [21] [i_4] = (min((((arr_10 [i_0 - 1] [i_1]) | var_2)), 1023));
                                arr_19 [i_6] [i_4] [i_1] [i_0] = (max((((~(var_4 ^ var_8)))), (((var_15 & var_7) | (((min(4001, var_14))))))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_6] = ((~(~var_8)));
                                var_19 = arr_0 [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_1 != var_8) > 1));
    #pragma endscop
}
