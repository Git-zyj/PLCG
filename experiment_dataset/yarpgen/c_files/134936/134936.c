/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (((-0 / (((arr_2 [i_0]) ? var_0 : var_10)))));
                    var_13 = (min((((arr_2 [i_1 - 1]) ? (~0) : (~var_10))), (arr_1 [i_0] [i_1 + 4])));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] = (arr_9 [i_3 + 2] [i_1]);
                        var_14 -= (max((((~(var_6 / var_9)))), (arr_8 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] = ((~((((((var_10 == (arr_2 [i_5]))))) & var_10))));
                                var_15 = (min(var_15, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-((-(~-1414011343764972481)))));
    var_17 = -32181;
    var_18 = (max((((min(-32181, var_11)))), -var_10));
    var_19 = (((((((var_1 ? var_7 : 1898573080)) & (~601962118)))) ? var_8 : ((min((min(var_1, var_9)), 4194304)))));
    #pragma endscop
}
