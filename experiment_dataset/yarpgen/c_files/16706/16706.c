/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 -= ((-2 - (var_0 != var_6)));
        arr_4 [i_0] [i_0] = (max(-23, (44248 == 1)));
    }
    #pragma endscop
}
