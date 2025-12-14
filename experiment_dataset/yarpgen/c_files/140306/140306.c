/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += -1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 ^= 18446744073709551615;
        arr_3 [i_0] = (~18446744073709551615);
        arr_4 [i_0] [i_0] = (((-127 - 1) * (!127)));
    }
    #pragma endscop
}
