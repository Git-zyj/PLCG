/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(18723, 46813));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 0;
        var_17 += (!46813);
    }
    var_18 += (((((((min(-104, var_14))) ? ((min(var_1, var_8))) : (var_8 != 18726)))) ? ((max((min(var_11, 154)), var_4))) : (((!(var_11 && var_8))))));
    var_19 = (min(var_19, (((((((4 * var_10) ? ((min(1, 101))) : ((var_11 ? -116 : 25))))) ? var_11 : var_5)))));
    #pragma endscop
}
