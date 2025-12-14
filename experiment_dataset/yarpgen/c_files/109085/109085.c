/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 -= ((0 ? 31376 : ((1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_17 ^= (arr_0 [i_0]);
        var_18 = ((((min(var_14, (((-1370755129 + 2147483647) << (var_2 - 341553465)))))) ? var_10 : var_10));
    }
    var_19 = ((1809016843 ? var_3 : 199));
    var_20 = 20991;
    var_21 = (((((0 | var_5) ? var_11 : ((max(1162817783, var_13))))) >= ((((~var_11) ? (var_3 / var_13) : var_4)))));
    #pragma endscop
}
