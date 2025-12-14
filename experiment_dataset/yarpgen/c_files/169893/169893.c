/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_0 ? ((var_0 ? var_8 : var_3)) : var_9));
    var_12 = (!var_10);
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (arr_1 [2]);
        var_15 = (((arr_1 [i_0]) ? var_4 : (min(46, (arr_1 [10])))));
    }
    #pragma endscop
}
