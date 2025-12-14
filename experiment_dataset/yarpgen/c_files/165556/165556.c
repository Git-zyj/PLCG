/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(arr_1 [i_0])));
        var_13 = (max(var_13, (((!(((~(arr_1 [1])))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = ((var_3 ? (arr_2 [i_1] [i_1]) : (((((((arr_5 [i_1]) ? var_5 : (arr_2 [i_1] [i_1])))) ? 58726 : (((-127 - 1) & var_0)))))));
        var_15 = var_5;
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_16 = ((((min(((var_4 ? -2386386334750796407 : (arr_8 [i_2]))), (~30556)))) ? 64295 : ((~(arr_10 [i_2 + 2] [i_2 - 2])))));
        var_17 -= var_0;
    }
    var_18 = var_7;
    #pragma endscop
}
