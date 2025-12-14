/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, (((-4724641116287466546 == ((-1 ? 88 : (-127 - 1))))))));
        arr_3 [1] = (((((arr_0 [i_0]) > (arr_0 [i_0]))) ? 0 : (min((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    var_14 = ((((min(((var_9 ? var_10 : var_4)), 21652))) ? 21636 : ((0 ? ((var_6 ? 12 : 1)) : ((min(-21656, 8192)))))));
    #pragma endscop
}
