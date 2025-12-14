/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_8, (((((var_1 >> (var_8 - 78)))) ? var_8 : ((max(0, 67)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = 0;
        var_15 += (arr_2 [i_0 - 1] [i_0 + 2]);
        var_16 = var_5;
        var_17 = (arr_2 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_18 = (!188);
        var_19 &= (min(((max((arr_2 [i_1 + 1] [i_1 - 1]), (arr_5 [i_1 - 1])))), var_4));
    }
    #pragma endscop
}
