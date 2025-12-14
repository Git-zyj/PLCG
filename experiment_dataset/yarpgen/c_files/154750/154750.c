/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((!var_2) ^ (((2081 >= 95) ? (33 + var_11) : -3646)))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 -= (max((max((~var_4), (var_3 && var_4))), (((((max(var_6, 2))) == ((-617050493 ? 29980 : 26505)))))));
        var_14 = var_8;
        var_15 = (max(((6659715281903687629 ? -27690 : (arr_3 [i_0 - 1]))), ((-6659715281903687642 / (1 != var_8)))));
    }
    var_16 &= -var_8;
    var_17 &= var_3;
    #pragma endscop
}
