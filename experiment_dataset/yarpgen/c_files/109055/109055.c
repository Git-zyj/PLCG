/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((!((min(var_7, (arr_2 [i_0] [i_0]))))));
        var_20 |= (min((((arr_2 [i_0] [14]) | (arr_2 [8] [i_0]))), 579624259877983338));
        var_21 ^= ((~((10259058421561704344 ? var_2 : var_15))));
    }
    var_22 = var_0;
    #pragma endscop
}
