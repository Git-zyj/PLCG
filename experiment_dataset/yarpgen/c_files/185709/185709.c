/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (var_8 ? ((((max(-4491938652771364657, -1071818999181394899))) ? (~var_0) : (var_5 / var_1))) : var_10);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_12 += arr_1 [i_0];
    }
    var_13 = (max(var_9, (~var_0)));
    #pragma endscop
}
