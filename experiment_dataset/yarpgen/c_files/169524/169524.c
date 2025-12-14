/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(((max(((var_15 ? var_12 : var_6)), var_12))), ((var_5 ? (max(var_9, var_2)) : ((min(var_3, var_15)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((max(var_15, var_11)));
        var_19 = (max(((var_1 ? var_16 : var_0)), ((max(var_12, var_12)))));
    }
    var_20 = (min(((min((!var_10), var_13))), (max((min(var_2, var_12)), var_11))));
    var_21 = ((((min((min(var_2, var_5)), var_5))) ? (min(var_1, (!var_3))) : ((min(var_0, (min(var_3, var_9)))))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [8] [i_1] = var_15;
        var_22 = var_1;
        arr_7 [i_1] = var_10;
    }
    #pragma endscop
}
