/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_18 ? var_0 : var_13))) ? var_3 : (!var_4)));
    var_20 = (!var_9);
    var_21 *= var_18;
    var_22 = var_13;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_23 += (arr_0 [i_0] [i_0]);
        var_24 = (max(var_24, (((!(((-var_11 ? (arr_1 [i_0] [i_0]) : ((var_2 ? var_9 : var_10))))))))));
        arr_3 [i_0] = var_11;
    }
    #pragma endscop
}
