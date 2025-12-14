/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (+((796473217 ? (!-1941706949) : var_9)));
    var_13 = -2091;
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0]) ? 1023 : 1030))) ? ((((arr_1 [4]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) : (-13 & -24959)));
        var_16 += (arr_1 [4]);
        var_17 -= (((-0 >= ((max((arr_0 [14]), (arr_0 [12])))))));
    }
    var_18 -= 64513;
    #pragma endscop
}
