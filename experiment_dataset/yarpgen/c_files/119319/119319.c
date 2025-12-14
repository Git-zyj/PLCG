/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [0]) ? (arr_2 [i_0]) : -2021570285));
        var_17 = (-127 - 1);
        var_18 ^= ((!(((((max(96, 18251507122196085475))) ? ((((arr_2 [i_0]) == (arr_2 [i_0])))) : -123)))));
    }
    var_19 |= max(var_14, (17747468869909779919 == -2021570285));
    #pragma endscop
}
