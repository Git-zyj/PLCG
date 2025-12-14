/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(((var_11 ? ((var_1 ? var_11 : var_5)) : ((var_3 ? var_0 : var_9)))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 += var_0;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_20 = (arr_0 [i_0 + 2]);
                    arr_8 [i_1] [i_1] [i_0] = (var_17 & var_13);
                    var_21 = (max(var_21, ((((arr_6 [i_1 + 3] [21]) * var_7)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_22 -= (6248785481989482709 ? 4611686018427387903 : (-5580781421164810468 == -74));
                    arr_11 [i_1] [i_3] = ((var_5 ? var_10 : var_10));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_4] [i_1] [i_4] [i_4] [i_4] = var_15;
                                var_23 = (min(var_23, ((((((var_2 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))) ? var_9 : (min((arr_1 [i_0 + 2]), var_8)))))));
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = (arr_15 [i_0] [i_0]);
                            }
                        }
                    }
                    var_24 = var_16;
                    arr_21 [i_0 + 2] [i_4] &= ((((((var_17 ? var_17 : var_11)) ? 22053 : var_3))));
                }
                var_25 -= (+(((arr_16 [0] [i_1 + 1] [i_1 + 1] [i_0]) ? var_12 : (((var_17 ? 4842 : var_9))))));
            }
        }
    }
    #pragma endscop
}
