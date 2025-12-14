/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((var_4 ? (~-20587) : (min(11831972618879168299, (-2147483647 - 1)))));
        var_20 = 0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = ((((!(arr_5 [i_1] [i_1]))) ? var_0 : var_18));
        arr_6 [i_1] = (max(1477262685, (((arr_4 [i_1]) / (max(17, -1477262706))))));
    }
    var_22 = 20561;
    var_23 -= (((((max(1, var_3)))) != (max(var_17, var_17))));
    var_24 = var_4;
    #pragma endscop
}
