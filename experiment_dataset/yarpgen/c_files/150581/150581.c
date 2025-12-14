/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((var_6 + 2147483647) >> (var_4 - 682109252)))));
    var_13 |= var_9;
    var_14 = (min(var_6, ((min((min(var_10, var_10)), (var_8 != var_0))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = 17;
        var_15 -= ((!(((arr_2 [i_0] [i_0]) != (arr_2 [i_0] [i_0])))));
    }
    #pragma endscop
}
