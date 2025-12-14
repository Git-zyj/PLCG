/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 81;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (127 - 253);
        var_17 = (max(var_17, 109));
        arr_3 [i_0] [i_0 + 1] = ((((min(-20205, 7092692481212597410)) / -var_7)) >= var_0);
    }
    #pragma endscop
}
