/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((min(var_5, 4294967280)))) ? var_3 : 21059));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (min(var_13, (min(((min((arr_0 [i_0 + 1]), 21072))), ((34435 | (arr_0 [i_0 + 1])))))));
        arr_2 [i_0 + 1] = ((((((arr_1 [i_0]) & (arr_1 [i_0 + 1])))) ? (arr_0 [16]) : (((arr_0 [i_0 + 1]) ? var_8 : var_5))));
        arr_3 [13] = (max((arr_0 [i_0 + 1]), -237));
        var_14 = ((((0 ? (arr_0 [i_0]) : (arr_1 [i_0]))) << (13309979827985977975 && 137)));
    }
    var_15 = -22;
    #pragma endscop
}
