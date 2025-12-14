/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2424914811;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 += 1745508039;
        arr_2 [i_0] = ((((-1 ? (((6 << (134217720 - 134217719)))) : ((194084774 ? -134217720 : 1148417904979476480)))) / (32763 ^ 944804226)));
    }
    #pragma endscop
}
