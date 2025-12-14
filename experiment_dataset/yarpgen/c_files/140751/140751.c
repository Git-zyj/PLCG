/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_9;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_15 = ((!(arr_0 [i_0 - 1])));
        arr_2 [i_0] = (15 / 1609008306);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 = (max(((max(((1 ? var_6 : 1)), (var_7 - 1)))), (max((max(4095, var_10)), (max(var_10, 1))))));
        var_17 -= (max((max(var_10, 10484)), (~-10484)));
    }
    #pragma endscop
}
