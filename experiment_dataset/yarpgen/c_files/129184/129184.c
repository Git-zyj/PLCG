/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((min(var_10, var_3))), var_11));
    var_21 = 4283979556;
    var_22 &= ((((-7938 ? var_1 : (58365 >= 1))) >= ((min(var_4, 2900986849129617306)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_23 += (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [9] = ((((2900986849129617306 >= (arr_2 [i_0] [i_0]))) || ((((arr_0 [i_0] [10]) ? 65535 : var_13)))));
        arr_5 [i_0] [i_0] = ((-(arr_3 [i_0] [i_0])));
    }
    #pragma endscop
}
