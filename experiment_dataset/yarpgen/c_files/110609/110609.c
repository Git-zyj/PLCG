/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_20 += (min((((((1 ? 1524415540791712378 : (arr_1 [i_0 - 1])))) ? 18446744073709551615 : 18446744073709551615)), ((min(1, 2125232187)))));
        arr_3 [i_0] [i_0] = ((18446744073709551615 * (((((0 ? var_8 : (arr_2 [i_0 - 1])))) ? ((0 ? 11061002613332762149 : 2147483647)) : var_10))));
        var_21 = ((15532839167351119486 ? 1 : (-9223372036854775807 - 1)));
    }
    var_22 = var_19;
    var_23 = ((var_18 ? ((~(var_19 != var_4))) : var_11));
    #pragma endscop
}
