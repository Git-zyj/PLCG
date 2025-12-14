/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(-19111, ((((177 ? 2448387156 : 1738445182)) - (!0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += (((max(6, (var_1 || -19575)))) ? (923198118 - 51) : (arr_1 [i_0] [2]));
        arr_2 [i_0] [i_0] = ((((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) * ((-20535 ? (arr_1 [i_0] [i_0]) : ((max((arr_0 [i_0] [i_0]), -19575)))))));
    }
    var_21 = (~(min(((var_8 ? var_11 : -66)), var_16)));
    #pragma endscop
}
