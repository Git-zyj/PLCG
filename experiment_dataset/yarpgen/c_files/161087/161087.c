/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 ^= (!-7640);
                var_16 = (61 ? (arr_3 [i_1]) : ((2727052076 ? (arr_3 [i_1]) : (arr_3 [i_1]))));
                var_17 += (((1916526109 && 63) ? (min(65535, var_6)) : var_9));
            }
        }
    }
    var_18 = var_0;
    var_19 = var_8;
    #pragma endscop
}
