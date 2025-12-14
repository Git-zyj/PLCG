/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, ((max((max(46, (max(8390388515160438039, var_7)))), (arr_0 [i_0]))))));
        var_17 += 31;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_18 = (min(var_18, (((-19795 == ((22 ? (arr_2 [12]) : 1)))))));
        var_19 -= 18446744073709551615;
    }
    var_20 = var_7;
    #pragma endscop
}
