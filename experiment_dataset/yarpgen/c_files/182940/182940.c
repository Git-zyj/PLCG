/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((!((min(860759780, 1))))) ? ((((52910 == (arr_0 [i_0]))) ? ((((arr_0 [i_0]) == (arr_1 [i_0])))) : (((var_8 == (arr_0 [i_0])))))) : (((((((arr_0 [4]) ? var_1 : var_6))) == (((arr_0 [i_0]) ? var_0 : (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((((((min((arr_0 [i_0]), var_8))) == (((52910 == (arr_1 [i_0])))))) ? ((~((var_9 ? -121 : (arr_1 [12]))))) : ((((max(1, var_19)) == ((((arr_1 [19]) ? var_7 : (arr_0 [14])))))))));
    }
    var_21 = ((((((~var_7) ? (92 == 1) : ((-32748 ? 12625 : var_0))))) == (max(4352618175309874875, (-38 == 1)))));
    var_22 = (min(var_22, (((((((min(var_1, var_16))) ? (120 == var_16) : (~38))) == ((0 ? (7425 == 167) : (~191))))))));
    var_23 |= ((~(((var_15 == var_5) ? (52910 == var_0) : (var_14 == var_15)))));
    var_24 = ((((var_15 ? (var_1 == 255) : ((var_2 ? var_3 : 0)))) == (((((var_10 == 95) == ((2471 ? 1 : var_1))))))));
    #pragma endscop
}
