/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? ((((!var_15) && (!var_13)))) : (((var_2 ? var_15 : 213)))));
    var_18 = ((!(((-1 ? 10 : 126)))));
    var_19 = var_15;
    var_20 = 1341872564;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_21 = (arr_1 [i_0 - 3]);
        var_22 ^= ((((max(13727408808356502634, var_1))) ? (min(-6307070023447610565, 6307070023447610571)) : var_16));
    }
    #pragma endscop
}
