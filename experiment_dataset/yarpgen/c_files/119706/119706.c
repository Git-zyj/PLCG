/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = -32649;
        arr_2 [i_0] = (arr_0 [i_0]);
        var_23 += ((~(3 != 32766)));
        var_24 |= (~var_3);
    }
    #pragma endscop
}
