/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = (arr_0 [i_0]);
        var_17 = (arr_0 [i_0]);
    }
    var_18 -= (((max((max(12838966601499997295, var_3)), var_1)) <= ((((max(var_6, 99))) ? (min(107, var_13)) : var_1))));
    var_19 = var_2;
    var_20 = var_12;
    #pragma endscop
}
