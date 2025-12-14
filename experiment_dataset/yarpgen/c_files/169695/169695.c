/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(((4239645861 ? var_9 : var_4)))))));
    var_18 = ((var_5 ? var_14 : var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((+((((arr_0 [i_0]) == 127)))));
        arr_4 [i_0] = ((+(((!var_1) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8)) : ((1 ? var_2 : 2290675036669215012))))));
    }
    #pragma endscop
}
