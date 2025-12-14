/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 = arr_0 [i_0];
        arr_3 [i_0] = ((!((((max(127, (arr_0 [i_0])))) || 127))));
        arr_4 [i_0] = 1000247755;
        var_20 = -127;
    }
    var_21 = ((!(((((min(29, 1))) ? (108 / var_12) : ((var_11 ? var_16 : 5276558870707559009)))))));
    var_22 = (max(((!(((var_9 ? var_14 : 6))))), ((((min(var_15, var_13))) || -458446474678610525))));
    var_23 = var_4;
    #pragma endscop
}
