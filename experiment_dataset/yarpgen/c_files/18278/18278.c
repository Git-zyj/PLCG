/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_1;
    var_13 |= var_3;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (((((min(0, (arr_0 [i_0 - 4])))) ? (((-164798805 / (arr_1 [13] [9])))) : 31851)))));
        var_15 *= ((1878514127 ? (((min((-9223372036854775807 - 1), (arr_0 [i_0 + 2]))) / (arr_0 [i_0]))) : (((-1990917088 / (max(-164798805, 1269794492)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 |= 249;
        var_17 = ((((!(arr_3 [i_1]))) ? (0 >> 0) : (((-(arr_3 [i_1]))))));
    }
    #pragma endscop
}
