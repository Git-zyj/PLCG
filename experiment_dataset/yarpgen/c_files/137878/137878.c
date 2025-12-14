/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = (!1435547874);
        var_18 = arr_2 [i_0] [9];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_1 [i_1] [i_1]) << (var_2 - 2419509368)));
        arr_5 [9] [i_1] &= ((arr_2 [i_1] [i_1]) & (arr_1 [11] [11]));
        var_20 = (((((arr_0 [i_1]) ? -438399180 : var_6)) | (((-(arr_4 [i_1]))))));
        var_21 = (arr_4 [i_1]);
    }
    var_22 = -var_5;
    var_23 = (!1);
    #pragma endscop
}
