/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_17 = var_1;
        var_18 = (max(var_18, var_5));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = var_4;
        var_20 = (min(((((((arr_4 [i_1]) + var_10))) ? ((15 ? var_10 : 0)) : var_7)), (((arr_3 [i_1] [i_1]) + ((var_8 ? (arr_3 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))))));
    }
    var_21 = (max(var_21, (min(var_12, ((var_3 << (((min(var_15, var_4)) - 9992058580330650347))))))));
    #pragma endscop
}
