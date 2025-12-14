/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_14;
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = max((((arr_1 [i_0] [12]) * 47405740)), (~-66));
        arr_2 [i_0] = (((((~(arr_0 [i_0])))) < (arr_1 [i_0] [i_0])));
        var_22 = (((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_23 = (max(var_2, ((((((var_17 ? var_0 : var_2))) ? (var_7 | var_8) : var_1)))));
    #pragma endscop
}
