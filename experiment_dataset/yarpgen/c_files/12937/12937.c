/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((max(((var_0 ? var_4 : -21972)), ((max(4, -3203370790667742059)))))) ? var_8 : (((~((-4 ? 41864 : var_9))))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(var_12, (((~(arr_0 [i_0]))))));
        arr_3 [i_0] = (max(64, var_10));
        arr_4 [i_0] [i_0] = var_3;
    }
    var_13 = (min(var_13, ((max((((18446744073709551598 ? 12 : 3203370790667742057))), 18)))));
    var_14 = ((var_1 ? ((-19 ? ((var_3 ? var_4 : var_0)) : 1)) : var_6));
    var_15 = var_10;
    #pragma endscop
}
