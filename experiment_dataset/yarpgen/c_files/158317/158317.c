/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (var_12 > var_6);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((max((~var_13), 2541079980)))));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = (min(((((((arr_5 [i_1]) ^ 1532316749))) ? ((~(arr_6 [i_1]))) : (((~(arr_4 [i_1] [i_1])))))), (arr_4 [i_1] [i_1])));
        var_20 = var_11;
    }
    var_21 = var_0;
    #pragma endscop
}
