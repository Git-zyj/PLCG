/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 += ((((((9221207794776701091 ? var_18 : (arr_1 [i_0]))) ? (arr_0 [i_0]) : var_3))));
    }
    var_21 = (max(17031749832382596313, var_15));
    #pragma endscop
}
