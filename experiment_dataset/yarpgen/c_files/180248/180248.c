/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_2 + 7518404154924262545) / var_3));
    var_12 = (min(((((((max(81, var_0)))) > (65527 + var_4)))), var_0));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((-9223372036854775807 - 1) > ((((98728998174742256 >> (94 - 56)))))));
        var_14 = var_2;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_15 = ((var_6 ? var_3 : (252 % var_7)));
        var_16 = (min(var_16, ((((var_6 > 1103564622928373514) ? var_2 : (((arr_0 [i_1 - 2]) / 192)))))));
        arr_5 [i_1] = (max((arr_3 [i_1 + 1]), (((arr_3 [i_1 - 1]) / var_5))));
    }
    #pragma endscop
}
