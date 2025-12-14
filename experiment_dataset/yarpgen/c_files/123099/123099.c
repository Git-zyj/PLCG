/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_10, ((8209858822223285577 ? (((8209858822223285577 ? var_10 : var_1))) : var_0))));
    var_17 = var_3;
    var_18 = (max((min((((8209858822223285580 ? var_3 : var_7))), ((var_1 ? var_7 : var_6)))), var_10));
    var_19 = ((((max(14, 2198413829))) ? var_10 : var_12));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((((~((var_2 ? -4971 : (arr_1 [i_0])))))) ? (((((arr_0 [i_0]) != (~var_4))))) : (2317104014 & var_11)));
        arr_3 [i_0] = (max((((~8209858822223285577) ? (((arr_1 [i_0]) ? 2479730280 : (arr_0 [i_0]))) : (((-(arr_2 [i_0] [i_0])))))), (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_21 = (arr_2 [i_1] [i_1]);
        var_22 = (((((var_12 ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 + 1])))) ? ((-(((arr_1 [i_1]) ? var_4 : 8209858822223285562)))) : (arr_0 [i_1 + 2])));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = (((min(8209858822223285577, (((var_11 ? 1815237016 : 48))))) << (((max(7270009208691228303, (arr_10 [i_2 - 1]))) - 7270009208691228268))));
        var_23 *= var_2;
    }
    #pragma endscop
}
