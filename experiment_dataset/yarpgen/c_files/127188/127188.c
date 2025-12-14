/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (arr_1 [i_0]);
        var_19 = -19602;
    }
    #pragma endscop
}
