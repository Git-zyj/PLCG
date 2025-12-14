/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? ((((9223372036854775807 ? 4042 : var_10)) & (((~(arr_0 [i_0])))))) : ((((((arr_0 [i_0]) ? var_14 : (arr_1 [i_0] [i_0]))))))));
        var_17 = (((arr_0 [i_0]) + 4824420093648479371));
        var_18 *= ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 24)) > (min((arr_0 [i_0]), var_4))))) : ((var_0 ? (arr_0 [i_0]) : 4048))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (-(arr_4 [i_1]));
        var_19 = (arr_3 [i_1 + 1]);
        var_20 *= ((+(min(((min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))), (min(4294967295, var_13))))));
        arr_7 [i_1] = (min(((-99 ? (((arr_5 [i_1] [i_1]) ? (arr_4 [18]) : (arr_3 [i_1]))) : (((!(arr_4 [i_1])))))), (arr_5 [i_1] [i_1 + 1])));
    }
    var_21 = (((var_15 == var_3) ? var_6 : var_14));
    #pragma endscop
}
