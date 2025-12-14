/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((-1 & (min((14940440982884937398 - -16), ((((arr_2 [i_0] [i_1] [4]) ^ -7179094291833801972))))))))));
                var_14 = -128;
                var_15 ^= (min(((128 ? (12546299320649079187 & var_1) : (min(var_7, 56)))), var_10));
            }
        }
    }
    var_16 = -76;
    var_17 = var_3;
    #pragma endscop
}
