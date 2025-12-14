/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max((max((min(var_9, var_19)), 112)), ((max((max(var_2, var_6)), var_11)))));
        arr_4 [i_0] = ((((((((var_14 ? var_10 : 1))) ? ((min(1, 3))) : var_4))) ? ((((((var_7 ? var_7 : var_13))) ? var_2 : 1))) : ((((max(var_8, var_9))) ? (~var_18) : (((min(var_15, 1))))))));
        var_20 = (max(var_20, ((min((~var_8), var_7)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = var_16;
        var_21 = (min(var_21, ((min(3, var_7)))));
        var_22 = (min((max(var_16, var_16)), (min(var_19, var_8))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = min((max(var_6, (max(1, var_9)))), (((((var_18 ? 2147483647 : var_0))) ? (min(var_9, var_11)) : (~var_12))));
        var_23 = (max(var_23, ((max(var_19, var_8)))));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_24 &= (~-32762);
        arr_16 [i_3 + 3] = (min((max(var_12, var_17)), var_2));
        arr_17 [i_3] [15] = var_2;
        var_25 = (max(var_25, (~var_11)));
        arr_18 [i_3] = (min((min(((max(1, var_11))), -var_17)), var_2));
    }
    var_26 = (min(var_2, ((var_1 ? var_0 : (min(var_16, var_17))))));
    var_27 = ((((min(var_17, var_6))) ? var_2 : ((var_2 ? (((min(-4618, 16378)))) : (max(var_16, var_15))))));
    var_28 += ((var_7 ? var_8 : 1));
    #pragma endscop
}
