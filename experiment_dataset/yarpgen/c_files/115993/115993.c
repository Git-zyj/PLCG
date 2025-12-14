/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 -= (!((((max((arr_0 [10]), (arr_1 [i_0]))) | (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = -7075703076655415682;
        var_20 *= ((arr_0 [i_0 - 1]) ? (-583820238 / 8195312570356636400) : ((((min((arr_0 [i_0]), var_2))) ? (((arr_0 [i_0]) ? -3898059793679871489 : -15)) : (arr_1 [i_0]))));
    }
    var_21 = var_12;
    var_22 = var_17;
    var_23 = (min(var_17, 1));
    #pragma endscop
}
