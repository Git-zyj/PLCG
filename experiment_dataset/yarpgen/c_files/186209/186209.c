/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 31;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_19 = ((((var_0 ? var_4 : var_13)) <= var_16));
        var_20 = -45000;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = ((-32 ? -89 : ((~(28 % -32)))));
        arr_7 [i_1] = 60;
        arr_8 [i_1] [i_1] = -3;
    }
    #pragma endscop
}
