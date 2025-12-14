/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_2 [i_0])));
        var_11 = (((!4294967295) ? (min(841223207, 2147483647)) : ((~(arr_0 [i_0] [i_0])))));
    }
    var_12 = (min(var_12, ((max((min(var_0, var_3)), (max(var_1, var_3)))))));
    var_13 = (var_3 - ((-5 ? (((((-127 - 1) <= var_1)))) : var_1)));
    #pragma endscop
}
