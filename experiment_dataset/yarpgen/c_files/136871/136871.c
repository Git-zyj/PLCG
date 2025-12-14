/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4294967295;
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 4294967273;
        arr_3 [i_0] = ((!(((var_11 ? (var_13 - 8862) : (!56680))))));
        var_21 = (max(var_21, 3));
        var_22 = var_2;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_23 = var_3;
        var_24 = ((!56667) <= (!8864));
        var_25 = 27816;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = -670948105;
        arr_9 [i_2] = ((!(((((var_17 ? 37719 : 110)) / ((max(60666, var_5))))))));
        var_26 |= var_13;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_27 = var_13;
        arr_12 [i_3] [i_3] = (((!var_8) ? (var_5 >= 27821) : var_2));
    }
    var_28 = 248;
    #pragma endscop
}
