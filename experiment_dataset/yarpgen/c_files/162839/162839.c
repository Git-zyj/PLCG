/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [6] [1] = (((!(arr_0 [1]))));
        var_14 = (max(var_14, -132272910));
    }
    var_15 = (~((38 ? 18 : -1)));
    var_16 = var_2;
    var_17 = min((-35 / var_2), var_8);
    var_18 = (min(var_18, ((((var_0 | 7476300910408500110) * (!var_3))))));
    #pragma endscop
}
