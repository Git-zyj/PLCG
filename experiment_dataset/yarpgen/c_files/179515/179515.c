/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, (((((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])))))));
        var_16 = (max(var_16, ((((!(arr_0 [i_0] [i_0])))))));
        var_17 *= (((arr_1 [i_0] [i_0]) / (((-1 + 2147483647) << (var_5 - 15418591274530284538)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (max(var_18, (!15127)));
        var_19 |= (205 * 216);
    }
    var_20 -= var_13;
    #pragma endscop
}
