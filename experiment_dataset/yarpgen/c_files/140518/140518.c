/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= min((((16425 ? (!var_7) : 10252607014724728169))), ((1 ? (min(0, 4035225266123964416)) : (((arr_1 [i_0]) ? (arr_2 [i_0] [3]) : 1)))));
        arr_3 [i_0] = (((((!(arr_1 [i_0])))) + (((-127 - 1) ? ((min(var_1, (arr_0 [i_0])))) : (!var_1)))));
    }
    var_19 = var_6;
    var_20 = (((((var_2 ? -6676 : (87 < 15973706358550303525)))) ? var_12 : var_6));
    var_21 *= (~17998);
    var_22 = var_15;
    #pragma endscop
}
