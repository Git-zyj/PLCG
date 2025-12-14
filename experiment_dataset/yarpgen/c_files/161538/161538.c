/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((var_3 ? var_5 : var_3))) ? var_4 : var_0)) - var_3));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 |= (((max(0, (max(-1863372241, 10979219935242088878)))) - (((((max(-68, (arr_2 [1])))) + ((-(arr_0 [8]))))))));
        var_16 -= ((-0 ? (arr_1 [10]) : (min((max(10207413153335604121, 8239330920373947491)), (var_13 < 0)))));
    }
    var_17 = ((var_9 ? ((((5582 ? 584534028 : -11143)))) : (~48)));
    var_18 ^= (var_8 ? var_10 : var_11);
    #pragma endscop
}
