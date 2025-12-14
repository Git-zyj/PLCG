/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((var_11 ? ((var_5 ? var_13 : var_10)) : var_3)) - 1));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] &= ((!((max(var_6, 1)))));
        arr_4 [i_0] [i_0] = ((-(((((var_14 ? 1048575 : -9223372036854775800))) ? var_5 : (arr_2 [i_0 - 3])))));
    }
    var_18 = ((var_2 ? ((((max(var_12, 1434369581)) != (((max(var_1, var_2))))))) : (max(((1 ? 1 : 2742)), ((max(var_1, var_2)))))));
    var_19 &= 2860597715;
    #pragma endscop
}
