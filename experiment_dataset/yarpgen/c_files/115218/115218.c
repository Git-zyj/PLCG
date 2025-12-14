/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 6355;
        var_13 = (((!var_6) + 2250840492));
        arr_3 [i_0] = ((((((((arr_0 [i_0]) & 1))) ? (arr_0 [i_0]) : ((155303503 ? 4294967295 : var_8)))) - 1575279791));
    }
    var_14 = (max(((var_2 + ((var_11 << (1 - 1))))), var_12));
    var_15 = var_2;
    #pragma endscop
}
