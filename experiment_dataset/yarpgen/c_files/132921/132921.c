/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(6120642673687136265, var_12))) ? ((((var_16 ? var_14 : var_16)) ^ (max(var_11, 3488635976691184317)))) : (((((var_14 > var_9) < -6120642673687136265)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (min(103, (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((var_8 ? (arr_1 [i_0] [i_0]) : (((((arr_0 [i_0]) / var_3)) * ((((arr_1 [i_0] [i_0]) ? 32759 : 103)))))));
        arr_4 [i_0] = -1411520371;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((((arr_0 [i_1]) ? (arr_7 [i_1]) : 128))) ? (((((arr_5 [i_1]) || (arr_5 [i_1]))))) : (arr_5 [i_1])));
        arr_9 [i_1] = (((arr_0 [i_1]) ? ((min(var_14, var_14))) : (((arr_0 [i_1]) ? var_0 : (arr_0 [i_1])))));
        arr_10 [i_1] [i_1] = (min(var_1, var_8));
    }
    var_19 = var_17;
    #pragma endscop
}
