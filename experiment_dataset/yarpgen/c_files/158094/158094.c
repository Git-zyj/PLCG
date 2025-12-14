/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 -= (((127 ? var_9 : var_15)) == ((~(arr_0 [i_0 - 1]))));
        var_21 = (((max((arr_1 [i_0] [i_0]), var_10))) ? (arr_1 [i_0] [i_0 - 3]) : (arr_0 [i_0]));
    }
    var_22 ^= (var_17 < var_17);
    #pragma endscop
}
