/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((min(var_12, var_13)), (!var_0)));
    var_21 = (var_2 == -2);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 = (min((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), (((23138 >> (((arr_1 [i_0]) - 139)))))));
        var_23 *= ((((min(var_5, 1))) ? (min((-2147483647 - 1), (min(var_8, (arr_0 [i_0] [i_0]))))) : ((((((min((arr_1 [6]), var_0))) >= (((!(arr_0 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_24 = (((!(!64665))));
        arr_4 [i_1] = (~-1);
    }
    var_25 = ((var_15 >> ((((min(var_6, -968367701))) ? var_6 : var_14))));
    #pragma endscop
}
