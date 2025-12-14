/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [1]) | 13))) ? var_2 : (arr_1 [i_0] [i_0])));
        var_13 = 10;
        arr_3 [i_0] = ((-14 ? 0 : (((arr_1 [i_0] [i_0]) + (arr_1 [13] [1])))));
        var_14 -= -var_4;
        arr_4 [i_0] = ((var_2 ? (((arr_1 [i_0] [i_0]) ? 17774482 : (arr_1 [i_0] [i_0]))) : ((var_6 ? var_10 : (arr_1 [i_0] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (arr_1 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = 238;
    }
    var_15 = ((((min((var_2 + 1), var_6))) ? (var_6 + -var_5) : var_0));
    #pragma endscop
}
