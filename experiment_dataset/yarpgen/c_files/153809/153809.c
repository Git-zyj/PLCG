/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 -= ((((((0 ? var_3 : var_3)) - (arr_2 [i_0 + 2] [10])))) ? ((~((-18 ? 0 : (arr_0 [11]))))) : (9223372036854775807 * 0));
        var_15 = (min(var_15, 2971288972822415703));
    }
    var_16 = ((((((252 >> (-18 + 35))) ? var_2 : (max(17, 18446744073709551599))))));
    #pragma endscop
}
