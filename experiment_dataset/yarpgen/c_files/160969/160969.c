/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = 1;
        var_19 = ((-8589934591 ? ((65506 ? (~1909990370) : 15)) : 127));
        var_20 = ((+(((arr_0 [i_0]) ? (max(16075547245475386456, 1)) : (149 / 9159402114097553909)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = var_16;
        arr_5 [i_1] &= ((-(((10158 != (-127 - 1))))));
        var_22 = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))) && (arr_4 [i_1])));
        var_23 = ((((((-127 - 1) ? 5319759266674922303 : (arr_4 [i_1])))) && ((min((arr_3 [23]), (arr_3 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] [i_2 + 1] = (!var_1);
        arr_10 [i_2 + 1] = var_2;
        var_24 = arr_4 [i_2];
    }
    var_25 = var_0;
    #pragma endscop
}
