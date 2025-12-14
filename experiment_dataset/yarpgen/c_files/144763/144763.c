/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = ((-1569143438266844312 ? ((max(1, 1))) : (-1895738903 % var_14)));
        var_19 = ((var_13 ? (-1569143438266844312 < 0) : (!var_4)));
        var_20 = ((1 ? var_10 : ((1107378202 ? 1 : -121148080))));
        var_21 = ((~((0 ? var_5 : -671993158))));
        var_22 = (min(var_22, (arr_0 [i_0 - 1] [i_0 + 2])));
    }
    var_23 = ((~((-var_11 % (var_12 && var_0)))));
    #pragma endscop
}
