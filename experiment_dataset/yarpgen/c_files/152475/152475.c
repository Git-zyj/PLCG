/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_17 & (~6)))) ? var_8 : (-var_2 - var_16));
    var_19 = 181;
    var_20 = 6208233985285286132;
    var_21 ^= var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -6208233985285286131;
        arr_4 [i_0] [i_0] = var_17;
        var_22 = (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (max((arr_0 [i_0]), -424731270781536971))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (min(-6208233985285286145, (min((arr_6 [i_1] [i_1]), (min((arr_5 [i_1]), -5531542828668415108))))));
        arr_8 [i_1] &= 22;
        var_23 &= min(var_2, (((((var_3 ? 68 : 36))) ? 4982749693471470534 : (((arr_2 [i_1]) << (var_7 - 38518))))));
    }
    #pragma endscop
}
