/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((!16), ((var_4 > (!var_7))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 |= ((var_1 ? 2838 : ((-9202 ? ((min(-9171, 1))) : ((var_1 << (3344 - 3344)))))));
        arr_2 [i_0] [i_0] = ((!((max((arr_1 [i_0] [i_0]), 2)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 ^= (((((!(arr_1 [i_1] [i_1])) ? var_7 : ((var_4 ? var_6 : 18446744073709551614))))));
        arr_6 [8] |= (arr_1 [i_1] [i_1]);
        var_13 = (max(((8581 ? 255 : (arr_0 [i_1]))), (((arr_1 [i_1] [1]) * ((-78899217 ? (arr_0 [i_1]) : 65530))))));
    }
    var_14 = ((75 ? var_0 : 1));
    #pragma endscop
}
