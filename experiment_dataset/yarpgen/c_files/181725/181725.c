/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(!44378866766842574)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = var_6;
        var_17 = -var_3;
        var_18 -= (((((arr_0 [i_0 + 2]) <= 48324)) ? ((1796245505 ? var_3 : (arr_0 [i_0]))) : (17211 + 48324)));
    }
    var_19 = (var_7 - var_1);
    var_20 = ((((max(var_8, (~var_7)))) ? var_2 : (max((var_5 + var_1), var_6))));
    #pragma endscop
}
