/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((~((min(var_6, 1))))) ^ 5943));
        arr_5 [i_0] [i_0] = 255;
        arr_6 [i_0] = 17179869183;
    }
    var_16 = 0;
    #pragma endscop
}
