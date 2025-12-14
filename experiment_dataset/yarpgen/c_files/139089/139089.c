/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((var_1 ? var_7 : (-127 - 1))) / var_11)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (!var_10);
        var_13 = (max(var_13, 12654));
        arr_3 [6] [i_0 - 1] = (1 * -25754);
        arr_4 [i_0] = 2017265981;
    }
    var_14 = (6 * -25171);
    var_15 = ((((-(1023 >= var_8)))) | ((var_7 ? var_9 : 4629661568279696862)));
    #pragma endscop
}
