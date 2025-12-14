/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 127;
        arr_5 [i_0] = (((((var_4 ? 22771 : (arr_3 [i_0])))) ? (((!var_4) ? (arr_3 [i_0]) : ((var_5 << (((-127 + 157) - 30)))))) : var_1));
        arr_6 [1] = (((((var_6 ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? var_2 : ((((arr_0 [i_0]) ? (arr_3 [i_0]) : var_7)))));
        arr_7 [i_0] [1] = ((((((var_7 ? (arr_1 [i_0] [i_0]) : var_8)))) ? (arr_0 [i_0]) : (arr_3 [i_0])));
        arr_8 [i_0] = 20;
    }
    var_10 = ((((min(16777215, 127))) ? var_7 : var_1));
    var_11 = var_2;
    var_12 = (((((var_5 ? -83 : 2147483629))) ? (((((var_2 ? var_2 : var_3))) ? var_8 : var_0)) : var_7));
    var_13 = var_3;
    #pragma endscop
}
