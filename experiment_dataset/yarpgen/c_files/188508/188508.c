/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(1, (24 && 0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [10] = (((max(1, 4161615560)) == 4161615545));
        var_18 -= (~2568780429);
    }
    #pragma endscop
}
