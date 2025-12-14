/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(1, 11250));
        var_16 ^= (max((arr_1 [i_0]), (min(((max(6, var_2))), (arr_0 [i_0])))));
    }
    var_17 = 84;
    #pragma endscop
}
