/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 *= ((((-62 + 2147483647) >> (61 - 46))));
        var_16 |= ((!((((((0 << (65535 - 65530)))) ? -11 : 0)))));
        arr_2 [i_0] &= (((1758088262 / 4324005343084719534) ? (((((-55 ? (arr_1 [1]) : 31)) > (!21329)))) : (arr_1 [i_0])));
    }
    var_17 = ((((21 - ((1 ? var_0 : 65522)))) / -var_13));
    var_18 = 15101;
    #pragma endscop
}
