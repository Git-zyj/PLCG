/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 |= (~-1);
    var_19 = (8765021674058936453 ? ((var_10 ? var_14 : var_11)) : var_0);

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (((((~(arr_2 [i_0] [0])))) && -5));
        arr_4 [1] = (max((max((arr_2 [i_0] [i_0 + 1]), (arr_2 [8] [i_0 + 3]))), (19 <= 8)));
    }
    var_20 = (!((((!var_12) + var_5))));
    #pragma endscop
}
