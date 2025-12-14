/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) < (arr_0 [i_0])));
        var_19 = ((((255 ? -233334341 : 240)) % ((((arr_1 [i_0] [i_0]) <= 9165447382142158535)))));
        arr_5 [i_0] &= (((arr_2 [i_0]) ? ((732521416 ? 255 : 255)) : var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (((var_17 > var_4) ? 1 : (arr_7 [i_1])));
        arr_8 [i_1] [i_1] = (((!30) > (arr_3 [i_1])));
        var_21 = ((arr_2 [i_1]) < (arr_1 [i_1] [i_1]));
    }
    var_22 = (var_18 | var_18);
    var_23 = min(var_13, var_2);
    #pragma endscop
}
