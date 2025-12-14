/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 += var_2;
    var_21 = 0;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 = (((((((18446744073709551612 && 209) < (256385630816076736 * 12))))) + (((((9223372036854775807 ? 9223372036854775799 : -22016))) ? (((-5344960465454280321 + 9223372036854775807) >> (38342 - 38331))) : (-98 >= 7)))));
        arr_2 [1] [i_0] &= (((((28 ^ 127) ? (min(27197, 868232893)) : (~0))) << (561844584 - 561844573)));
        var_23 = (((((!1) ? (95 || 9223372036854775791) : (18446744073709551611 && 1))) + (1046806433 % 47415)));
    }
    #pragma endscop
}
