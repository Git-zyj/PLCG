/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_2 ? ((9223372036854775807 ? 9223372036854775792 : 9223372036854775807)) : 33))) ? var_14 : ((35 ? var_15 : var_3)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -36;
        var_18 = (min(var_18, (((+((max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_19 = (max(var_19, ((((var_7 - var_16) >> ((((-((max(118, (-127 - 1)))))) + 129)))))));
    }
    var_20 = ((var_15 ? (max(-var_10, (var_0 || 2042218250893434444))) : (!var_2)));
    #pragma endscop
}
