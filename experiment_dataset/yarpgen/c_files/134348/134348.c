/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 2078098265698126989;
        arr_3 [i_0] [i_0] = var_1;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_4] [i_2] = ((min(var_3, 24)));
                                var_15 = ((((~((max((arr_6 [i_1] [i_1]), 127)))))) ? (((var_11 ? var_7 : ((9223372036854775784 ? (arr_9 [i_3]) : (arr_12 [i_1] [i_2 - 1])))))) : (((~var_10) ? var_5 : (var_7 ^ var_10))));
                            }
                        }
                    }
                }
                var_16 = (((~var_4) ^ (arr_7 [2] [i_1] [i_1])));
            }
        }
    }
    var_17 = (min(var_17, (((((max(var_8, ((1 ? var_12 : var_5))))) ? ((((((var_10 ? var_13 : -125))) ? var_9 : var_8))) : var_10)))));
    #pragma endscop
}
