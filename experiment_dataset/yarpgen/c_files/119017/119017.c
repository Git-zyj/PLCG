/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (min(var_20, (((-(1964731274898376836 ^ 1))))));
        var_21 = (((max(var_11, var_5))));
    }
    var_22 = ((((((max(var_1, var_15))) == 20))) >> (((max(((var_1 << (var_6 - 39))), var_4)) - 6887)));
    var_23 = (!var_3);
    #pragma endscop
}
