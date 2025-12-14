/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) / var_1));
        arr_3 [i_0] = (((((+(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_8))))) ? (1 / var_4) : (min((max((arr_1 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0]))), ((var_1 / (arr_1 [i_0] [i_0 - 1])))))));
        arr_4 [i_0] = 11446341144107331556;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_18 = (max(var_18, ((((var_7 ? (arr_0 [7] [i_1 - 1]) : (arr_5 [i_1])))))));
        var_19 = ((~(arr_5 [i_1 + 3])));
    }
    var_20 -= ((((~(var_1 % var_17))) + var_13));
    var_21 = ((11446341144107331535 ? ((~(7000402929602220092 > 7000402929602220081))) : 4096));
    var_22 = 3;
    #pragma endscop
}
