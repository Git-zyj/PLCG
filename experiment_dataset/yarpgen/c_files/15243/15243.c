/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!var_11) ? ((var_2 ? var_10 : var_5)) : (max(var_5, var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= ((!(((var_3 ? (-9223372036854775807 - 1) : (((arr_5 [i_0] [i_0]) ? 1713679568029223285 : (arr_1 [i_0]))))))));
                var_16 = ((0 ? -11120 : 12288));
            }
        }
    }
    var_17 ^= (min(5085329313846672628, var_11));
    #pragma endscop
}
