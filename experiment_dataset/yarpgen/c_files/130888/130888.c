/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((173 ? ((min(28211, (max(var_2, var_2))))) : var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (-((51579 ? 187 : (arr_1 [i_0] [i_0]))));
        var_21 = (max(var_21, (arr_1 [10] [14])));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_22 = var_7;
        var_23 &= 157;
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] = (((arr_6 [i_2 - 1]) ? -297294077441136193 : -var_5));
        var_24 = 0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_25 *= var_11;
        var_26 = (((arr_0 [4]) ? var_5 : ((((arr_3 [i_3]) / var_9)))));
        var_27 = (max(var_27, ((((arr_0 [2]) > (arr_0 [18]))))));
        arr_10 [1] = ((var_8 ? -9223372036854775807 : (var_16 <= var_12)));
    }
    #pragma endscop
}
