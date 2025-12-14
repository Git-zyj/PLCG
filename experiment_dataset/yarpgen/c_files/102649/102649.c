/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_15 ^ var_4) & (var_0 + var_19))) + 2147483647)) << (var_15 - 67)));
    var_21 = (!var_19);
    var_22 = var_0;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_23 = ((~(arr_0 [i_0 + 3] [i_0])));
        var_24 = (min(var_24, ((((arr_1 [i_0 - 1]) | (((((((arr_0 [i_0] [i_0]) % (arr_0 [i_0] [i_0 - 2]))) <= (((arr_0 [i_0 - 1] [i_0]) + var_17)))))))))));
        var_25 = ((-(max((arr_0 [i_0] [i_0 + 1]), (arr_1 [i_0])))));
        var_26 = (arr_0 [i_0] [3]);
    }
    #pragma endscop
}
