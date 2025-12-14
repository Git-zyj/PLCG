/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 242;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((arr_0 [0]) + 2147483647)) >> (arr_1 [2]))))));
        arr_2 [i_0] = (1 == 1);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_21 = var_13;
        var_22 = (min(var_11, ((var_8 ? -13 : (var_7 | var_4)))));
        arr_5 [i_1] [i_1] = (max(var_17, (((min(var_3, (arr_4 [4]))) ^ (((var_10 - (arr_4 [i_1]))))))));
        var_23 = 3;
        arr_6 [i_1] [i_1] = var_11;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_10 [i_2] [11] = ((~(arr_8 [i_2])));
        var_24 = (max((((1959650210624046804 ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 + 1])))), (max(1166536213, (arr_3 [i_2] [i_2])))));
        var_25 = ((((((arr_7 [i_2 + 1] [i_2 + 1]) ? (arr_7 [i_2 + 1] [i_2 + 1]) : (arr_7 [i_2] [i_2 + 1])))) ? (((var_9 >> (((arr_7 [i_2 + 1] [i_2 + 1]) - 2775))))) : (arr_7 [i_2 + 1] [i_2 + 1])));
    }
    #pragma endscop
}
