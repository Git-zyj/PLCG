/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (min(var_8, (arr_1 [i_0])));
        var_21 ^= (((((max((arr_1 [i_0]), var_2))) ^ (arr_2 [i_0] [i_0]))) - (((((max(65535, var_14))) - (min((arr_0 [i_0]), var_14))))));
        var_22 = (min(var_22, ((max(((~(arr_2 [i_0] [i_0]))), ((18446744073709551615 ? 1 : 1)))))));
    }
    var_23 = -65535;
    var_24 = -65535;
    #pragma endscop
}
