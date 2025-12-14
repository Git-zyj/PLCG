/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 -= (((max((var_11 / 30471), (arr_5 [17]))) >> (var_12 - 16567)));
                    arr_9 [i_1] [7] [i_1] = var_0;
                }
            }
        }
        var_15 = (var_0 & (((!var_8) ? (((-4963254986244298388 ? var_10 : var_9))) : (arr_0 [i_0]))));
        var_16 = var_5;
        arr_10 [i_0] [i_0] |= (((min((arr_8 [i_0]), var_12)) & 30471));
        var_17 = (var_4 >> (((max((arr_0 [i_0]), var_7)) + 23)));
    }
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
