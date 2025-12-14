/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((3492755088 ^ var_9) > (((var_1 + (12883 - 863871049))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0 - 2]) ? (((min((arr_0 [i_0 - 3]), (arr_0 [i_0 - 2]))))) : (max(var_0, var_11)));
        arr_3 [i_0] [i_0] = (max(((min(736246060, 119))), (min(228, (arr_1 [i_0])))));
        var_16 -= (((((-(var_12 + var_11)))) != (arr_0 [i_0 - 3])));
        var_17 = (min(var_17, ((min((((var_4 && (~0)))), (min(57875, var_0)))))));
    }
    #pragma endscop
}
