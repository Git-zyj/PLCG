/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-22158 ? var_9 : (~var_9)))) ? var_0 : ((var_5 ? var_10 : var_2))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = (max((-22158 & -1363760602), ((-7255234567022918561 ? var_1 : 1))));
        var_13 = -112558480;
        arr_3 [1] [i_0] = (((((arr_2 [i_0 + 2]) != -7255234567022918544)) ? (((arr_2 [i_0 + 4]) >> (arr_2 [i_0 + 2]))) : ((3762105810 ? (arr_2 [i_0 + 1]) : var_3))));
        var_14 = 25;
    }
    var_15 = ((var_5 ? ((var_10 ? 17055398321003195441 : ((max(var_9, -7255234567022918561))))) : ((((((var_7 ? var_5 : var_7))) ? var_3 : -var_7)))));
    #pragma endscop
}
