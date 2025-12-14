/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_11 = (min((arr_1 [3]), (max(3, 246))));
        var_12 = (max((~var_6), (((((~(arr_1 [i_0])))) & (min(18446744073709551615, 1))))));
    }
    var_13 = var_2;
    #pragma endscop
}
