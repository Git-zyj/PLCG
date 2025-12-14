/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_9, (max(var_7, var_0))));
    var_17 = ((1 ? 305216358 : 0));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = var_6;
        var_19 = (min(var_19, (((((((arr_0 [i_0 + 2]) ? ((((arr_0 [i_0]) ? -32764 : 87))) : (min((arr_0 [i_0]), 2391695532))))) ? var_3 : ((-(((!(arr_1 [10] [1])))))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 += (!(-9223372036854775807 - 1));
        var_21 = (!1);
        var_22 = (max((arr_3 [i_1]), ((max(var_11, var_1)))));
        arr_4 [i_1] [i_1] = (1 < -4202881823608646184);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_23 = (arr_6 [i_2 + 2]);
        arr_7 [i_2] = (arr_5 [i_2] [i_2]);
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        var_24 = (!218);
        arr_11 [i_3] [i_3] = 4156985953053106794;
        var_25 = (max((arr_10 [i_3 + 3]), (((arr_10 [i_3 + 1]) ? (arr_10 [i_3 - 1]) : var_9))));
    }
    var_26 = var_10;
    #pragma endscop
}
