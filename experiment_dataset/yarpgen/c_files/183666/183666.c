/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((0 ? -1 : -1));
        arr_4 [i_0] = -255;
    }
    var_10 = var_0;
    var_11 = 0;
    #pragma endscop
}
