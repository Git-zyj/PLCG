/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] = (+(((arr_3 [i_0] [i_0] [i_1]) ? (max((arr_0 [i_0]), (arr_3 [i_0] [i_0] [i_0]))) : ((((arr_0 [i_0]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = ((~var_5) ^ (max((~var_6), ((min((arr_9 [i_0] [i_1] [i_2] [i_0]), var_3))))));
                            var_13 ^= ((((max((arr_10 [i_0] [0] [6] [i_3]), (arr_6 [i_0]))) > var_7)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_14 = (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) - ((((max(var_11, (arr_22 [i_6] [i_7])))) | 118))));
                                arr_27 [i_4] [i_6] [i_5] [i_7] [i_8] = (arr_25 [i_4] [i_4] [i_4] [i_5 - 1] [i_5 + 1]);
                            }
                        }
                    }
                }
                var_15 = (arr_18 [i_5] [i_5] [i_5 - 2]);
            }
        }
    }
    var_16 = var_10;
    var_17 = (((((var_5 ? (var_7 != var_6) : -1))) ? var_2 : var_3));
    var_18 = (min(((max((~var_7), var_2))), var_4));
    #pragma endscop
}
