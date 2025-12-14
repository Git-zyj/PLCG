/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min(var_16, ((max((((var_4 ? var_9 : -2346223869341138155)), -var_7))))));
    var_17 = (min(var_17, ((((((((var_8 ? var_4 : var_2)) | (~var_4)))) ? (~var_6) : ((~((max(208, var_14))))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0 + 1]) ? ((min(((max(3756, 48))), (min(1, 2147483634))))) : (max(552099826, 13))));
        arr_2 [i_0] = (max(((max((arr_0 [8]), ((var_0 & (arr_0 [i_0])))))), (((((~(arr_0 [i_0 + 1])))) ? (~var_9) : (~var_0)))));
        var_19 = (min(0, 5205286989812151817));
    }
    #pragma endscop
}
