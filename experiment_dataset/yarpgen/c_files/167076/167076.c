/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((3462536875067634782 ? ((var_13 ? var_5 : (!var_6))) : (!var_5)));
    var_20 = (min(var_4, (min((((-1782639760 ? 7881 : var_10))), 1453876466))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((min((((arr_1 [i_0]) ? 20238 : var_13)), var_12)) >= var_17));
        var_21 = (arr_0 [i_0 + 1]);
        var_22 = ((((((arr_0 [i_0 + 1]) - (arr_0 [i_0 + 1])))) ? -1302053087 : (var_5 | var_5)));
    }
    #pragma endscop
}
