/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-((17152 + (arr_0 [i_0] [i_0])))));
        var_16 &= ((var_12 ? (((arr_0 [i_0 - 1] [i_0 - 1]) ? ((((arr_0 [i_0] [23]) || var_8))) : var_6)) : ((((var_9 && var_6) || 48383)))));
    }
    var_17 = var_5;
    var_18 = (((((((var_3 ? var_10 : var_13))) ? var_4 : var_0)) > -var_6));
    var_19 -= (!var_8);
    #pragma endscop
}
