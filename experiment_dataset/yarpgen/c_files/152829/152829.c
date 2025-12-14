/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (min(var_15, (~18446744073709551615)));
        arr_3 [i_0] [i_0] = ((((min((arr_0 [i_0 + 2]), var_18))) && (((arr_1 [i_0 + 2] [i_0 + 2]) > (!3)))));
    }
    var_22 = var_14;
    #pragma endscop
}
