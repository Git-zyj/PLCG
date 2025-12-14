/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((3 * 3220912377), (var_12 + var_6)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) | ((min(1, var_14)))))) ? (arr_0 [0] [0]) : (((1074054918 | 4692877990006988855) & (arr_0 [3] [i_0])))));
        var_16 = 15539790558369746864;
        var_17 = (!var_7);
        arr_3 [i_0] [i_0] = (min(var_7, var_7));
    }
    var_18 = var_2;
    #pragma endscop
}
