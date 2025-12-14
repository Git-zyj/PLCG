/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (max(var_10, -88));
    var_17 = var_12;
    var_18 = (min(var_18, ((min((((var_6 >= (var_8 >= var_11)))), var_8)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = 0;
        arr_3 [i_0] = var_13;
        arr_4 [i_0] = (var_0 & var_10);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, (var_9 | var_6)));
        var_21 = (min(var_21, var_9));
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        var_22 = 9869834104190887971;
        var_23 += (min((max(var_6, var_9)), 8576909969518663649));
        var_24 = (min(var_24, (var_5 % var_13)));
    }
    #pragma endscop
}
