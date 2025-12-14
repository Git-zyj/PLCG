/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((-var_1 != (((((var_8 ? var_3 : var_6))) ? -var_6 : (var_3 | var_7))))))));
    var_11 = var_3;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = ((((-(!var_0))) != -var_4));
        arr_2 [i_0 + 1] = ((!((((~(arr_1 [14])))))));
        arr_3 [i_0] = (((-9223372036854775807 - 1) + 8731703296595541623));
        var_13 = (arr_1 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_14 = ((((((((var_1 & (arr_4 [i_1])))) ? (arr_1 [i_1 + 2]) : (((arr_1 [i_1]) ^ var_2))))) && (((((((arr_0 [i_1]) / var_0))) ? var_8 : var_2)))));
        var_15 = ((((((arr_4 [i_1 - 1]) * (arr_4 [i_1 - 1])))) ? (((arr_4 [i_1]) / var_6)) : (arr_4 [i_1 - 1])));
        var_16 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 *= var_1;
        arr_8 [i_2] = (!0);
        arr_9 [i_2] [i_2] = var_1;
    }
    var_18 = (max(var_18, (((var_6 ? 123 : (-9223372036854775807 - 1))))));
    var_19 = (~var_5);
    #pragma endscop
}
