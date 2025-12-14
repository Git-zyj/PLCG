/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_3;
    var_12 &= (((2 && var_8) ? ((min(1, -622008215))) : ((var_9 ? var_1 : (var_3 && 1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((((1 ? var_5 : 0))));
        arr_4 [i_0] = (((((var_0 ? (-13375 * var_6) : 17539))) ? (-127 - 1) : -48));
        var_13 = ((((min((((arr_0 [i_0]) ? 17539 : (arr_1 [3]))), -68))) ? 65522 : ((1 ? 0 : 4751148810587315295))));
    }
    #pragma endscop
}
