/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (arr_2 [i_0]);
        var_13 = (max(var_13, 255));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_14 *= 17452;
        arr_5 [12] [12] = ((24699 ? (max((arr_3 [i_1 - 2]), (arr_4 [i_1 + 1] [i_1 - 2]))) : (((arr_4 [i_1 + 1] [i_1 - 2]) ? (arr_3 [i_1 - 2]) : (arr_3 [i_1 - 2])))));
    }
    var_15 = ((var_1 ? (((max(var_0, var_7)))) : var_6));
    var_16 = (var_7 ? ((-((var_7 ? var_11 : var_7)))) : (((!var_3) ? 18331436805272155374 : 115307268437396241)));
    var_17 = var_0;
    var_18 = -var_9;
    #pragma endscop
}
