/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -28379;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((-(!111))));
        arr_4 [i_0] [i_0 + 1] = (!11939);
    }
    #pragma endscop
}
