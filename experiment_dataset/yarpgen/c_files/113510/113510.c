/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 ^= ((-((~(((((arr_0 [i_0]) + 2147483647)) >> var_14))))));
    }
    var_18 |= (((25 / 1) ? var_11 : var_11));
    var_19 = -var_15;
    #pragma endscop
}
