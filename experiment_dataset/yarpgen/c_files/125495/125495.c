/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-var_18 ? var_15 : ((((((218 ? 1 : 218))) ? var_4 : var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) ? ((((1 ? var_16 : (arr_2 [i_0]))) / (max((arr_0 [i_0]), (arr_1 [i_0]))))) : var_10));
        var_21 = (((-60 ? 255 : -27002)));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (((-19790 + var_4) & -51)) : ((((((-17839 + 2147483647) << (2269814212194729984 - 2269814212194729984)))) ? (((!(arr_0 [i_0])))) : ((var_10 << (4000983033 - 4000983029)))))));
    }
    #pragma endscop
}
