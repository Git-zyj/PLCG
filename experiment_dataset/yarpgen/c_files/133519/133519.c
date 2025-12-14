/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((var_10 ? (max((var_12 / var_6), var_10)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((min((var_9 - var_12), ((min(var_3, var_3))))));
                var_15 = var_9;
                var_16 = (((max((arr_2 [i_0 - 1]), (arr_2 [i_1]))) ? ((((arr_0 [15] [i_1 + 3]) ? (arr_1 [i_0 - 1] [i_1 + 1]) : (arr_1 [i_0 - 1] [i_0 - 1])))) : ((min(var_0, (arr_3 [i_0 - 1]))))));
            }
        }
    }
    var_17 = var_1;
    var_18 *= ((var_6 < (max(((var_1 << (var_7 - 1208108901))), (~var_12)))));
    #pragma endscop
}
