/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 28486;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 -= ((((((((~(arr_0 [i_0])))) ? (((~(arr_2 [i_0])))) : ((var_4 << (50024 - 49972)))))) ? ((((var_6 ? (arr_2 [i_0]) : (arr_2 [i_0]))) ^ var_1)) : (arr_2 [i_0 + 1])));
        var_12 &= ((((!(!-12))) && (((1 ? 0 : 6144)))));
        var_13 ^= 60105;
        var_14 = (!var_0);
        var_15 = ((+(((((max((arr_2 [i_0]), 26610))) == 1)))));
    }
    var_16 = ((((((0 ? var_4 : var_2)))) ? (var_3 >= var_0) : (((!((max(var_1, var_5))))))));
    var_17 = 6;
    #pragma endscop
}
