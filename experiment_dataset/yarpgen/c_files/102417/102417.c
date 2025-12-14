/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_18 += 11;
        arr_3 [i_0] [i_0] = ((arr_2 [i_0]) << (((-2147483647 - -2147483646) + 19)));
    }
    var_19 = ((255 << (1778289690 - 1778289670)));
    var_20 = var_16;
    var_21 = 3491253123;
    #pragma endscop
}
