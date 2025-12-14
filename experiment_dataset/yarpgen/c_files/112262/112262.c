/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 & 1073676288);
    var_13 &= var_4;
    var_14 = ((var_5 && (var_3 / var_5)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, 8));
        arr_2 [i_0] = (-14686 <= 5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 ^= (~255);
        var_17 = (var_3 >= var_11);
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_7 [16] &= ((4655665376340452937 >= var_3) << (((arr_0 [i_2 - 1] [i_2]) - 14883)));
        arr_8 [i_2] &= 215;
        var_18 += (((((arr_1 [i_2 - 2] [i_2 - 2]) <= var_0)) ? var_4 : (((!(arr_6 [i_2]))))));
    }
    var_19 |= var_7;
    #pragma endscop
}
