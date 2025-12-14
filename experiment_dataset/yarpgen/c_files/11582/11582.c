/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 -= (504403158265495552 != ((var_8 + (arr_0 [i_0]))));
        var_17 = 504403158265495566;
    }
    var_18 = (min(var_18, var_8));
    #pragma endscop
}
