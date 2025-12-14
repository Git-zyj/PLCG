/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0 - 4]) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 4])))) ? (arr_0 [i_0 - 2]) : (max((arr_0 [i_0 - 1]), (((arr_0 [18]) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 4])))))));
        var_20 = (min(-739283508, 14003));
    }
    var_21 = (min(((((((var_9 ? var_0 : 3639548961))) ? (var_0 + -947343380) : -1624961783))), var_15));
    var_22 = var_8;
    var_23 *= var_18;
    var_24 = var_5;
    #pragma endscop
}
