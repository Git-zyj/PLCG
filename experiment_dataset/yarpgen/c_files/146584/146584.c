/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = ((var_3 || ((((!var_18) + ((127 ? 22072372 : var_13)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 -= ((!(arr_0 [i_0 - 1])));
        var_23 -= ((((max((((!(arr_1 [i_0])))), (((arr_0 [12]) ? (arr_1 [i_0]) : -120))))) ? var_8 : (min(((((arr_2 [i_0 - 1]) ? (arr_1 [i_0]) : 177))), (((arr_1 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : 0))))));
        var_24 = (((((max(var_15, (arr_0 [i_0]))))) ? var_7 : var_11));
    }
    var_25 = (min(var_25, var_10));
    #pragma endscop
}
