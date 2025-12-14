/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(((((arr_7 [i_2] [i_2] [i_2]) / (arr_7 [i_0] [i_0] [i_0])))), (((((var_8 / (arr_5 [i_1] [i_2])))) ? var_7 : (arr_5 [i_1] [i_1])))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 = ((~(((arr_1 [i_0]) + (arr_1 [i_2])))));
                        var_16 = ((((max((arr_5 [i_1] [i_0]), 9317118043232581468))) ? (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [17]))) : (((((2699706595 ? (arr_5 [i_1] [i_2]) : var_11))) ? -31168 : var_3))));
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_17 = var_8;
                        arr_15 [i_0] [i_1] [i_2] [i_4] = -var_5;
                    }
                }
            }
        }
    }
    var_18 += -var_11;
    #pragma endscop
}
