/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_1, 1468187287);
    var_17 -= (max(((((min(var_8, var_6)) ^ var_1))), (min(var_0, var_15))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, (((max(var_1, ((var_6 ? (arr_0 [i_0] [i_0]) : var_12))))))));
        var_19 = (max(var_19, ((((!var_14) - (((var_11 != (var_10 & var_3)))))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((!(!var_10)));
        arr_5 [i_0] = (((((var_6 & var_1) ? (~var_15) : (max(var_5, var_11)))) << (((((max((arr_0 [i_0] [i_0]), var_15)) | (((773802173213832752 ? 2882557824 : 2882557814))))) - 15211427263570663369))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_2 [i_1]) / ((((max(var_12, var_13))) ? var_3 : -var_5))));
        var_20 = (max(var_20, ((min(var_12, (((!(!var_1)))))))));
    }
    #pragma endscop
}
