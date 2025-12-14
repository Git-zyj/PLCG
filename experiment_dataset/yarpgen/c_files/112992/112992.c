/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((~var_8) * (!var_8))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 -= 2022696309;
        var_14 = (((arr_2 [i_0]) + (min(((var_8 ? var_1 : 2022696309)), (((~(arr_1 [i_0 - 1]))))))));
    }
    #pragma endscop
}
