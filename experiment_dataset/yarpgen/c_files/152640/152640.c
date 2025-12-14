/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 -= (((!-9223372036854775804) ? var_13 : (((((arr_0 [i_0 - 1]) == var_6))))));
        var_20 -= ((-(!1524544633748360526)));
    }
    var_21 -= (var_4 ? (!var_0) : (min(var_3, var_17)));
    #pragma endscop
}
