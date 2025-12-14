/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = 3419202690;
        arr_3 [i_0] [i_0] = -9203;
        arr_4 [i_0] = ((1 ? ((var_5 ? 157 : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) ? 3717 : 169))));
    }
    var_11 = 1;
    var_12 *= ((((var_7 ? (~-3706) : ((148 ? 117 : var_3)))) * (((((var_2 ? 1479908985 : var_4))) ? ((var_0 ? var_1 : var_6)) : (var_2 == -9)))));
    #pragma endscop
}
