/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= max((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_20 -= ((((min((((arr_1 [5]) & var_6)), (arr_0 [i_0] [i_0])))) || ((min((((-120 + 2147483647) << (((var_1 + 30) - 4)))), (arr_0 [i_0] [i_0]))))));
        var_21 = (min(var_21, ((((arr_0 [i_0] [10]) < ((((((var_4 ^ (arr_0 [i_0] [i_0])))) && (arr_0 [i_0] [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_22 ^= (((var_1 * 85) && ((((((arr_3 [14]) ? -120 : (arr_4 [i_1 - 1]))) + ((var_1 ? var_5 : (arr_6 [i_1] [i_1]))))))));
        arr_7 [i_1] &= arr_5 [i_1 + 2];
        var_23 -= var_15;
    }
    var_24 = min(var_15, (((((var_19 ? var_9 : -120)) >= ((var_5 ? var_1 : var_16))))));
    #pragma endscop
}
