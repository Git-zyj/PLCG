/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 & ((((arr_0 [i_0]) == (min(0, 3702875375564465177)))))));
        var_13 = (min(var_13, (~var_5)));
        var_14 = (min(var_14, (arr_0 [i_0])));
    }
    var_15 = (max(-3702875375564465173, -2147483639));
    var_16 = (-3702875375564465171 / var_1);
    var_17 = var_7;
    var_18 = (~2251751257);
    #pragma endscop
}
