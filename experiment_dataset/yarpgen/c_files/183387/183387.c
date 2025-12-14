/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = min((~var_11), (arr_1 [i_0]));
        var_19 = (max(var_19, -117));
        arr_3 [i_0] = (((((min(var_17, var_12)))) != (min((var_14 > var_5), ((var_5 << (var_10 - 223)))))));
        var_20 -= (min((((arr_1 [i_0]) >> (var_7 - 34))), var_10));
        var_21 = (min((1176676391517626221 - var_16), (!var_11)));
    }
    var_22 = var_17;
    var_23 = (((min((min(var_13, var_17)), (min(var_1, var_13)))) != ((min((-712397505 != -24), -859989142)))));
    #pragma endscop
}
