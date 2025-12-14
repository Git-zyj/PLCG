/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((3604941826 << (690025470 - 690025451)));
        var_15 ^= -3604941826;
    }
    var_16 = 492110644;
    #pragma endscop
}
