/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-9223372036854775807 - 1);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 -= (((-((-(arr_0 [10]))))));
        arr_2 [i_0] [i_0] = (min((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))), ((~((~(arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (arr_4 [i_1]);
        arr_6 [i_1] = ((~((((arr_4 [i_1]) ? (arr_5 [i_1]) : (arr_5 [5]))))));
        var_21 = (~9223372036854775801);
        var_22 = ((-(arr_4 [i_1])));
    }
    #pragma endscop
}
