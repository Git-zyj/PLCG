/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = ((~(((!-13) ? ((5 ? 0 : -24)) : -12567))));
        var_19 = (arr_1 [i_0 + 2]);
        var_20 = (+((var_4 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        var_21 = ((((((arr_1 [i_0 + 3]) ? 4294967295 : (arr_1 [i_0 + 3])))) ? ((1 ? 8763053750447949978 : 6)) : ((((arr_0 [i_0 + 3]) + (arr_0 [i_0 + 3]))))));
    }
    var_22 = (min(var_22, var_16));
    var_23 = (max(var_23, (((!(((~var_17) != ((var_2 ? var_9 : var_12)))))))));
    #pragma endscop
}
