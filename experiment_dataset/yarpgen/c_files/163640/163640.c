/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((!var_6) ? var_10 : var_7)), 14965829848438668515));
    var_21 = ((var_10 <= ((var_18 ? ((var_13 ? 1 : var_8)) : (var_1 <= var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (var_6 & var_9);
        var_23 -= ((var_4 ? ((245 ? 223 : (arr_2 [i_0] [i_0]))) : var_15));
        var_24 = (((((var_1 ? var_6 : (arr_2 [i_0] [i_0])))) ? var_12 : ((((arr_2 [i_0] [i_0]) <= -1)))));
        arr_4 [i_0] = ((((arr_2 [i_0] [i_0]) ? var_3 : (arr_2 [i_0] [i_0]))));
    }
    #pragma endscop
}
