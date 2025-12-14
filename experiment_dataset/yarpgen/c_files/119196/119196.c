/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = (+-67);
        arr_2 [i_0 + 2] = ((var_19 ? var_4 : (~var_6)));
        var_21 = var_5;
        var_22 += (~var_9);
        arr_3 [i_0] = var_10;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_23 = var_4;
        arr_6 [i_1] [i_1 + 1] = 67;
        var_24 = var_17;
        var_25 &= ((~(min((~var_18), (~var_4)))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_26 = ((!(((var_6 ? var_4 : var_4)))));
        var_27 = (((var_12 + -var_9) ? (((((max(var_7, var_12)) + 9223372036854775807)) >> (((max(var_1, var_3)) - 3249298487157411186)))) : (~var_2)));
    }
    var_28 = var_4;
    var_29 = ((var_19 ? (((((var_11 ? var_4 : var_8))) ? ((var_11 ? var_19 : var_18)) : var_8)) : var_19));
    #pragma endscop
}
