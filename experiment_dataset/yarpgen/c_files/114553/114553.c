/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((247 ? (4294967295 <= 65535) : (((-28450 ? -1 : 8)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (+-5209);
        arr_4 [i_0] = max(11949661059099683883, 11949661059099683883);
    }
    #pragma endscop
}
