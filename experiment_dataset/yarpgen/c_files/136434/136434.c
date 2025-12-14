/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_15, (((~(!5247787093356110961))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 += (min(((min(1, 1))), (arr_0 [i_0 - 3])));
        var_18 += ((((((arr_0 [i_0]) | -32763))) ? ((((-var_14 == (arr_1 [15] [i_0]))))) : (max((((arr_1 [i_0] [i_0]) - var_12)), ((var_14 + (arr_0 [i_0 + 2])))))));
    }
    #pragma endscop
}
