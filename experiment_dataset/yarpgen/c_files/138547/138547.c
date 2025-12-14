/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = max(((288230376143323136 | (arr_0 [i_0]))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_5 [i_0] = (max((min(18446744073709551615, 288230376143323144)), 21));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 *= (((arr_8 [i_1] [i_1]) << (-12 - 18446744073709551594)));
        arr_9 [i_1] [i_1] = (122 + 128);
        arr_10 [i_1] [i_1] = (--12288);
    }
    var_20 = (min(var_20, (((~(((max(17382382424909582175, 0)))))))));
    #pragma endscop
}
