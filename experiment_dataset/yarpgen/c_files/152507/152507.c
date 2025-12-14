/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (i_0 % 2 == zero) ? ((max((((max(var_15, var_2)) >> (((max((arr_3 [i_0]), var_6)) - 18446744073709551563)))), (((arr_0 [i_0]) & (((var_4 || (arr_1 [i_0]))))))))) : ((max((((max(var_15, var_2)) >> (((((max((arr_3 [i_0]), var_6)) - 18446744073709551563)) - 18446744073709551601)))), (((arr_0 [i_0]) & (((var_4 || (arr_1 [i_0])))))))));
        var_18 = (max(var_18, (((-(((((67 / (arr_0 [i_0])))) ? 0 : (((arr_1 [i_0]) ? (arr_2 [12]) : (arr_3 [8]))))))))));
        arr_5 [i_0] = min(var_4, (arr_0 [i_0]));
        var_19 = (((((arr_1 [i_0]) >> ((((15 ? -1348783876 : (arr_0 [i_0]))) + 1348783936)))) * (((+((max((arr_2 [i_0]), var_11))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (max(var_20, var_14));
        var_21 = ((var_2 && ((((arr_1 [i_1]) ? (arr_3 [18]) : (arr_3 [10]))))));
    }
    var_22 = (min(var_22, 2147483642));
    var_23 = (max(var_23, ((max(var_9, var_14)))));
    var_24 = (min(var_24, var_2));
    #pragma endscop
}
