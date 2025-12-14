/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_11 ? (((min(var_16, var_9)))) : var_6))) ? var_9 : var_0));
    var_18 = 0;
    var_19 = 4294967295;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((-(~var_14)));
        var_20 = (((((var_8 ? (arr_0 [2]) : (arr_0 [i_0])))) / ((+(((arr_0 [i_0]) + 4294967295))))));
    }
    #pragma endscop
}
