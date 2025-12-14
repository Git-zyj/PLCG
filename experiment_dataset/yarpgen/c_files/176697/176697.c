/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [0] = (((((arr_1 [i_0] [i_0]) ? 9223372036854775807 : (~9223372036854775807)))) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (((arr_2 [i_0]) ? var_1 : (arr_2 [i_0]))));
        var_16 = (((arr_2 [i_0]) ? ((((arr_1 [i_0] [i_0]) / var_6))) : ((((max(1, 17898533429623275973))) ? 0 : (var_3 <= var_10)))));
        arr_4 [i_0] [i_0] = ((((((((arr_2 [i_0]) ? -1 : (arr_0 [i_0] [i_0])))) || 12646967412288758178)) ? (-134217728 > 10798) : ((((arr_2 [i_0]) > (arr_2 [i_0]))))));
        var_17 = (min(1, 2857178490113561223));
        var_18 = -39498;
    }
    var_19 ^= max((((((var_3 ? var_6 : var_4))) ? (((var_2 ? var_3 : 1))) : var_15)), -2);
    #pragma endscop
}
