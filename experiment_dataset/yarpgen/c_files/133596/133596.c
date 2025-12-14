/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 ? 11302045546287880770 : (((var_15 ? var_10 : 172))))));
    var_19 = (var_10 ? (((var_10 ^ 1074451717008243258) ? (var_9 ^ 42) : ((var_8 ? -1 : 13200033151561896342)))) : var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0]) * (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? var_3 : (arr_0 [11]))) : (((17837159784218556522 ? (arr_0 [17]) : var_0)))));
        arr_2 [8] [10] = -811289925;
    }
    #pragma endscop
}
