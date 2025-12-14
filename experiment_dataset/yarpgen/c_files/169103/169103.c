/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (!18446744073709551600);
        arr_4 [i_0] &= ((7799708885331356076 ? 0 : 18446744073709551615));
    }
    var_11 = var_7;
    var_12 = var_6;
    #pragma endscop
}
