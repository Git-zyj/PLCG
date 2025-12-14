/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((-7864451829500157758 == ((var_17 ? var_16 : var_0)))))) >= var_9));
    var_19 = (((((var_2 ? var_4 : ((var_1 ? var_11 : var_15))))) ? ((((min(var_7, var_12))))) : var_1));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = ((!(((var_7 ? var_11 : (arr_0 [i_0 + 2]))))));
        arr_2 [i_0] = var_13;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_21 = ((var_5 ? var_17 : var_15));
        arr_6 [i_1] [i_1 - 1] = (503316480 < 2496292453);
        var_22 = var_9;
        var_23 = (arr_0 [i_1]);
    }
    var_24 = var_7;
    var_25 = ((var_0 ? var_15 : var_12));
    #pragma endscop
}
