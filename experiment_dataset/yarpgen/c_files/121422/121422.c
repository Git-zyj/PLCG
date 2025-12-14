/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = 2301554250;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((((~var_3) == (((var_11 ? 46835 : var_7))))) ? (((((~(arr_0 [i_0])))) ? 0 : (((arr_0 [i_0]) | (arr_0 [i_0]))))) : (((-(((arr_2 [i_0]) % var_13)))))));
        var_21 = ((((((max(var_15, (arr_2 [1])))) ? (((var_17 ? (arr_2 [i_0]) : var_3))) : ((18446744073709551613 >> (3320905879 - 3320905860))))) >> ((((((max(213, var_14))) & (18446744073709551614 | var_10))) - 2591148305))));
        arr_3 [i_0] = (((max((((arr_1 [10] [10]) >> (18446744073709551613 - 18446744073709551603))), var_11))) ? ((((min(2643958866, 1))) ? ((~(arr_0 [i_0]))) : var_4)) : (((var_13 ? (0 != 1) : -1975256562))));
        arr_4 [i_0] [i_0] = ((~(min(((-(arr_0 [i_0]))), ((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : 224)))))));
    }
    #pragma endscop
}
