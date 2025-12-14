/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = ((!(((-(arr_1 [i_0]))))));
        var_21 = (min((((-78 < (((arr_1 [i_0]) ? var_3 : var_10))))), ((~((~(arr_1 [i_0])))))));
    }
    var_22 = (min(var_22, ((((((-78 ? (var_1 == var_9) : (var_15 || var_14)))) ? ((-((min(61356, 116))))) : -78)))));
    var_23 = var_3;
    #pragma endscop
}
