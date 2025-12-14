/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((3708524315897073285 < (((-(arr_1 [i_0]))))));
        var_17 |= ((-(arr_1 [i_0])));
        var_18 = ((((arr_1 [i_0]) % var_7)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_1])));
        var_20 = (min(((min((!3708524315897073285), (arr_1 [i_1])))), 3708524315897073291));
        arr_5 [i_1] [i_1] = -var_2;
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_21 = (min(var_21, 0));
        var_22 = (99 && 79);
        var_23 -= 73;
    }
    var_24 *= ((((((var_6 > var_8) ? var_11 : -98))) | ((95 ? ((-74 ? var_14 : 59397025709883098)) : var_13))));
    #pragma endscop
}
