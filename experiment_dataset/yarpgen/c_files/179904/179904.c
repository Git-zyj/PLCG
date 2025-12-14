/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = max(var_0, ((var_7 ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : var_7)));
                var_11 = (min(((((~-244013567) ? ((244013574 ? var_4 : -23597)) : 1))), (max((arr_3 [i_0] [i_0] [i_1]), var_4))));
                var_12 = (max(var_12, ((max((((!var_7) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))), -360890030)))));
                var_13 = var_2;
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_14 = (max(var_14, (arr_6 [i_2])));
        arr_7 [i_2] [3] = (var_6 < ((min(((!(arr_6 [i_2]))), ((!(arr_5 [i_2])))))));
        var_15 = var_7;
        var_16 = (min((((-(arr_6 [i_2])))), var_7));
        var_17 = (((!64) ? ((max((arr_6 [i_2]), var_5))) : (((arr_6 [i_2]) / var_7))));
    }
    #pragma endscop
}
