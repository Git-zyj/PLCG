/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_5));
    var_12 += (((var_10 / var_8) < (var_10 <= var_3)));
    var_13 = ((((var_8 << (var_0 - 194)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, (((((((4644007704121261915 << (4644007704121261906 - 4644007704121261906))) ? (-594882158 < -6516056248875651709) : -15)))))));
        var_15 = (min(var_15, (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
