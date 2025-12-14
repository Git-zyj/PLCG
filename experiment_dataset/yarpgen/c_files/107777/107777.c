/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((((var_7 ? 0 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!(((~(var_0 == 0))))));
                arr_5 [7] = ((+((((!var_10) && (!-76))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((-749 - (var_7 == 67)));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] = (min(var_7, (max((max(15613, var_10)), ((max(var_0, 1)))))));
                                var_14 = (max((((((202 ? var_2 : var_3))) ? (max(1, 12054019653387031002)) : var_6)), (((-(min(-751, var_9)))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1 + 4] [i_1] = (min((~var_8), ((127 ? 73 : 3717520034))));
            }
        }
    }
    #pragma endscop
}
