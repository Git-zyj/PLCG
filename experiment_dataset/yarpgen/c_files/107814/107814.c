/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (-115 * var_14);
    var_21 = (((((-(max(55, 3726872857475787137))))) ? (max(((min(var_3, var_6))), var_16)) : (((((0 ? 3 : -115)))))));
    var_22 = (max(var_22, (((var_10 ? (((min(var_0, var_14)))) : (((var_12 ? var_17 : var_14))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_23 = (arr_0 [i_0] [i_0]);
        var_24 = -var_17;
        var_25 = 43470;
    }
    #pragma endscop
}
