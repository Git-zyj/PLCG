/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_16 = (((((~(arr_1 [i_0 - 2] [i_0 - 2])))) ? ((~(arr_1 [i_0 + 2] [i_0 + 2]))) : (((arr_1 [i_0 + 1] [i_0]) & (arr_1 [i_0 - 1] [i_0 - 1])))));
        var_17 *= ((-(arr_0 [i_0])));
        var_18 &= (-(arr_0 [12]));
    }
    var_19 = (var_1 & var_8);
    #pragma endscop
}
