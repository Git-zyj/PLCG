/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((min(1799907984, 34715))) ? (((1 ? var_9 : (arr_1 [i_0])))) : (min(54099, var_7)))) < 34717));
        var_12 = (min((min(30835, (min(24477, 4294967289)))), ((((min(56933, 26))) ? (arr_0 [i_0]) : 695861727))));
        arr_3 [i_0] = (((11438 ? 1 : 25)) > -11449);
    }
    var_13 = (var_0 + var_9);
    #pragma endscop
}
