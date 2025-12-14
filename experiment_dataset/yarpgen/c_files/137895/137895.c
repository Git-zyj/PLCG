/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_14 += (max((((((~(arr_0 [i_0 - 2])))) ? (arr_0 [i_0 - 2]) : 15360)), (((((-15365 & -15365) + 2147483647)) << (8796093022207 - 8796093022207)))));
        var_15 = (max(var_15, 15363));
    }
    var_16 -= ((((16738922198648757689 & (((15360 ? var_12 : 15338))))) - ((((var_4 > (!37)))))));
    #pragma endscop
}
