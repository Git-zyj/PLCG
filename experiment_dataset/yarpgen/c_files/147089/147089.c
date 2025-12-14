/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(19300, 2946411824942296190);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (((max(162, 7))))));
        arr_2 [9] [i_0 - 1] = min(((var_5 + (arr_0 [i_0 - 1]))), (~var_8));
    }
    var_19 |= var_11;
    var_20 &= -255;
    #pragma endscop
}
