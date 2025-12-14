/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(var_0, ((max(0, 1))))))));
    var_20 = var_5;
    var_21 = (1 | 1048575);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((((max(((max(2039992175, 191))), ((var_15 ? (arr_0 [i_0] [i_0]) : -826))))) ? ((var_5 ? (1080362960 / var_0) : 1030861314)) : ((1 ? (arr_1 [i_0] [i_0]) : 3883))));
        var_23 -= (!255);
        var_24 = (65535 - var_4);
        arr_2 [i_0] [0] |= ((((min(var_14, var_7)) > (var_4 % 18442))));
    }
    #pragma endscop
}
