/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((var_12 * -23898) ? (2147483648 && var_11) : (max(var_5, var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? (((arr_2 [i_0]) ? var_12 : (arr_2 [i_0]))) : (((~(arr_0 [i_0] [i_0]))))));
        var_19 = 116;
    }
    var_20 = var_12;
    var_21 += var_4;
    var_22 = (((((var_10 ? 2 : ((var_5 ? var_6 : var_16))))) ? 3819195252554994830 : var_1));
    #pragma endscop
}
