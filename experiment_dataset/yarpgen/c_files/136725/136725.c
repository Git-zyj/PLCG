/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_5) - 28672));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0]) ? 35947 : (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0))))) ? (min(((var_1 | (-9223372036854775807 - 1))), 1)) : ((max(-1, ((var_9 ? 1 : 3)))))));
        arr_3 [i_0] = (((((~(arr_0 [i_0] [i_0])))) ? 15 : (max((((var_10 - (arr_1 [i_0])))), 0))));
        var_13 = (((((60 > -1274206134) >= (arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_0]) : ((9223372036854775801 ? 15 : (((arr_2 [i_0]) ? 1274206132 : (arr_2 [i_0])))))));
        arr_4 [i_0] = ((((((((25 ? 16383 : 36837))) ? (arr_1 [i_0]) : ((4095 ? (arr_0 [i_0] [i_0]) : 17974508))))) ? ((((((arr_2 [i_0]) ? var_0 : var_1))) ? ((var_4 + (arr_1 [i_0]))) : ((var_7 ? var_10 : 9566)))) : (arr_1 [i_0])));
    }
    #pragma endscop
}
