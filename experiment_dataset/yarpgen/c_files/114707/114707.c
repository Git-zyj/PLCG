/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-222404035 ? (((9223372036854775798 > 8236521679362926994) * var_1)) : 96));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = -259543761;
        var_15 = (!-1497575828);
        var_16 = 2206868904;
    }
    #pragma endscop
}
