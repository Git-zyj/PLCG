/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 5511297238959261735;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = ((18446744073709551615 ? 30598 : -30594));
        arr_2 [i_0] = (max((var_8 != -18), (min(7733913459629319218, (((arr_1 [i_0 - 1] [i_0]) & 0))))));
    }
    #pragma endscop
}
