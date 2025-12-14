/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((var_1 / var_2) | var_4));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_11 = ((((14214799965372624789 >> (var_2 - 69))) * (((((arr_1 [i_0 - 1]) < 4231944108336926822))))));
        var_12 |= (!var_3);
    }
    var_13 |= var_7;
    #pragma endscop
}
