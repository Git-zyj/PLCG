/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = 4;
        var_18 = (((arr_0 [i_0] [i_0]) || 0));
    }
    var_19 -= ((((var_2 ? (var_6 || var_0) : var_13)) > (!5408346614182455774)));
    var_20 = -2353;
    #pragma endscop
}
