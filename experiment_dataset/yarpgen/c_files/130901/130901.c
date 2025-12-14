/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((max((!var_4), ((4160749568 ? 1 : (arr_0 [i_0]))))) - (max(((var_13 ? var_9 : (arr_1 [i_0]))), (arr_0 [i_0])))));
        var_15 = (min(var_15, ((((-((-(arr_1 [i_0])))))))));
    }
    #pragma endscop
}
