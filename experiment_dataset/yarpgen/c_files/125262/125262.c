/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((min(var_5, var_6)))) ? ((-((var_5 ? var_2 : 7)))) : 14898));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((-(arr_2 [i_0 + 1]))));
        arr_5 [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((-(arr_6 [i_1])))) ? (arr_6 [i_1]) : var_9));
        arr_9 [i_1] = -1;
        arr_10 [i_1] [i_1] = (arr_7 [i_1] [i_1]);
        var_13 = (((var_1 ? var_9 : 127)));
        arr_11 [i_1] [i_1] = -123;
    }
    var_14 = (~1);
    #pragma endscop
}
