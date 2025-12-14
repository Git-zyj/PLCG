/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(var_15, var_16));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, var_13));
        var_19 += ((((min((18446744073709551615 > 104), (min(var_5, 18446744073709551613))))) ? ((max((var_1 || -1269464306070939335), var_13))) : ((max(var_3, -105)))));
        var_20 = (min(var_20, var_4));
        arr_2 [i_0] = ((((-105 ? (((var_13 ? var_13 : 0))) : ((1116892707587883008 ? 2500898314055896793 : 1)))) <= ((min(-1, ((min(25620, var_2))))))));
    }
    var_21 = (max((max((var_14 ^ 52978), ((max(234, 1885064128))))), ((var_1 ? (-27341 + -10) : (6845867849064416381 - var_15)))));
    #pragma endscop
}
