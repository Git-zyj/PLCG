/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 -= var_2;
        var_19 = ((((((((arr_1 [i_0] [i_0]) ? -82 : var_2))) || ((max(var_0, var_13))))) ? ((var_11 ? var_9 : (arr_1 [i_0] [i_0]))) : (arr_0 [i_0])));
    }
    var_20 = (var_8 && var_1);
    #pragma endscop
}
