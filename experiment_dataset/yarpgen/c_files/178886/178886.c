/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0 - 1] [i_0 - 1]) ? (((max((arr_1 [i_0 - 1] [i_0 - 1]), var_5)))) : ((((min(2, (arr_1 [i_0] [i_0 - 1])))) ? (((arr_1 [i_0] [5]) ^ -8208200394217005051)) : (arr_0 [i_0])))));
        arr_2 [i_0] [i_0 - 1] = (min(var_19, (((!(arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_3 [i_0] [i_0] = (((((max(var_4, -8208200394217005051)) >= -8208200394217005064)) ? (arr_1 [22] [i_0]) : ((-(arr_0 [i_0])))));
        var_21 = ((~(min((((arr_1 [i_0] [i_0]) ? var_6 : 1508934712)), (~1508934712)))));
    }
    var_22 = (((((((min(var_16, var_14))) ? var_10 : (var_8 & -1)))) ? ((243 ^ (var_19 | var_12))) : (((~var_8) ? (((8208200394217005047 ? 0 : -1))) : var_19))));
    #pragma endscop
}
