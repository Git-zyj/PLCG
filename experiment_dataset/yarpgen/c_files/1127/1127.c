/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((!(((var_4 << (var_0 - 200))))))));
    var_17 = 1988077220;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? var_13 : (~1879048192)))) ? 12277 : var_5));
        var_18 = (max(var_18, ((max((((var_7 ? var_9 : 1879048192))), -3975581757995017143)))));
    }
    #pragma endscop
}
