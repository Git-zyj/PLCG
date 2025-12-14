/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= -var_9;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_21 = (max((arr_1 [i_0 - 3]), (arr_1 [i_0])));
        var_22 = (min(((~(min(5714546587254440791, (arr_1 [i_0]))))), (((+(((-9223372036854775807 - 1) ? 1 : var_11)))))));
        var_23 = 5714546587254440791;
    }
    var_24 = (max(var_24, (((1 ? (((-(1 + 42)))) : (((~255) & 1)))))));
    #pragma endscop
}
