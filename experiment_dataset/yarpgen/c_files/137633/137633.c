/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 -= ((max(1736565199100382649, 13836)));
        var_18 -= ((((max(var_16, -1736565199100382650))) * ((min(((var_16 ? (arr_0 [18]) : 14691)), (arr_0 [2]))))));
    }
    var_19 -= (min((max((min(993996344, -14692)), var_8)), 2368));
    #pragma endscop
}
