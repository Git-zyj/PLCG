/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((~var_6), (var_4 | var_7)))) & (((var_8 ^ var_2) ^ (var_5 & var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_11 = (((((var_7 | (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? var_7 : (arr_0 [9]))) : (((((arr_0 [i_0]) / 18947)) | 2103773544))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = var_1;
        var_12 = (arr_4 [i_1]);
        arr_6 [i_1] = (arr_4 [i_1]);
    }
    #pragma endscop
}
