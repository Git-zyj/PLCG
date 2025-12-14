/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((min(((((arr_0 [i_0]) ? var_7 : (arr_0 [i_0])))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
        var_16 = (arr_0 [i_0]);
        var_17 = arr_1 [1];
    }
    var_18 ^= (max(var_1, var_14));
    #pragma endscop
}
