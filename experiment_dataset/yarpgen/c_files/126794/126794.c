/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 = (i_0 % 2 == zero) ? (((((min(var_8, 218))) << (((min((arr_0 [i_0]), var_15)) - 2704770674435491810))))) : (((((min(var_8, 218))) << (((((min((arr_0 [i_0]), var_15)) - 2704770674435491810)) - 15741973399274088665)))));
        var_20 = (max(var_20, (arr_2 [i_0])));
        var_21 -= ((((min((arr_0 [1]), (arr_0 [0])))) ? ((min(-1439179809, var_11))) : (arr_0 [2])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = ((((-(arr_1 [i_1]))) <= (arr_4 [i_1] [i_1])));
        var_23 -= ((((((var_18 ? var_10 : var_3))) ? ((-8297292937086248260 ? (arr_4 [i_1] [i_1]) : 255)) : ((var_8 ? 1 : var_0)))));
        var_24 = (min(var_24, ((((((((arr_4 [i_1] [i_1]) ? (arr_2 [i_1]) : var_9))) ? (var_4 | var_15) : (((var_17 ? 1 : 255)))))))));
        var_25 = var_16;
    }
    var_26 = (min(var_26, (((~((15801178472713500154 << (2390004839 - 2390004824))))))));
    var_27 = var_8;
    #pragma endscop
}
