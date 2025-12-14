/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((+-1) ? var_3 : (((((31 ? 1 : var_12))) ? -3391 : var_0))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((((!-22) >= (min((arr_1 [i_0]), var_6)))) ? (arr_0 [i_0]) : (min(52128, 2265060331))));
        var_17 = (max(var_17, 2));
        arr_3 [2] [i_0] = ((-(arr_1 [i_0])));
    }
    var_18 = (min(var_18, ((((((var_6 ? var_8 : var_9))) ? -25627 : (((max(var_3, var_0)) >> (var_8 - 152))))))));
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] = (((arr_7 [i_1] [i_1 - 1]) | (~52134)));
                    arr_13 [i_1] [i_1] [i_3] = ((((var_2 ? 13396 : (arr_10 [i_1 - 1] [i_1] [i_1 + 1])))) ? ((~(arr_10 [i_1 - 3] [i_1] [i_1 - 3]))) : (~6301));
                }
            }
        }
    }
    #pragma endscop
}
