/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (((-((var_17 ? var_4 : var_18)))))));
        var_21 *= ((-(arr_1 [i_0])));
        var_22 = ((-(arr_0 [i_0])));
    }
    var_23 = (min(var_23, (((((min(var_17, (!-10879)))) ? (-28565 * 10887) : var_0)))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_24 = ((-(max((arr_3 [i_1]), var_16))));
        arr_4 [i_1] [i_1] = (min(((min(((min(var_3, -106))), (arr_2 [i_1])))), var_16));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (min(0, (((!-10879) | 125))));
        var_25 = ((-((-(min((arr_5 [i_2]), 10859))))));
        var_26 |= (min((((arr_3 [6]) ? (arr_3 [16]) : 29496)), (!var_0)));
    }
    var_27 = (min(var_0, var_3));
    var_28 -= ((var_7 % (min(var_13, (63 - var_14)))));
    #pragma endscop
}
