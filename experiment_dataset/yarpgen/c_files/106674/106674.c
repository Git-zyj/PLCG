/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_0] [11]);
        var_20 -= ((-(min(var_10, (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = ((1 & ((max((arr_0 [i_1] [12]), (arr_2 [i_1]))))));
        var_22 = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_23 = ((((max(1, (arr_4 [i_3] [i_2]))) ? var_0 : (((min(1, 63)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_3] [i_2] [11] [i_5] = ((1 ? ((((arr_9 [i_4 + 1] [i_3] [i_1]) < (((arr_2 [i_5]) ? var_1 : 116340223))))) : (!var_9)));
                                var_24 *= (((((var_15 ? (arr_5 [i_1] [i_1]) : (var_6 || 127)))) || (!-2009659192)));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_1] [i_1] = (((((127 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 0)) + 2147483647)) >> ((((arr_4 [i_1] [i_1]) || (arr_0 [i_1] [i_1])))));
    }
    #pragma endscop
}
