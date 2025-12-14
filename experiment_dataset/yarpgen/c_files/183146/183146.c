/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(var_1, (84 | var_0))), (min((((-127 - 1) & 22)), (~25)))));
    var_15 += ((((min(-var_8, (~0)))) ? var_6 : (min(4, ((118 >> (var_1 + 24)))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((((-76 ? (arr_1 [i_0]) : 24)))) + 115));
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) - -var_4));
        arr_4 [i_0] [i_0] = ((((((-89 * (arr_1 [20]))))) * (((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1])))));
        var_16 *= arr_0 [i_0];
        var_17 = (max(var_17, ((((arr_1 [i_0]) == ((((arr_1 [i_0]) && 74))))))));
    }
    #pragma endscop
}
