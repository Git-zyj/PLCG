/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_2) >= (((0 == var_3) ? var_2 : ((0 ? var_13 : var_5))))));
    var_15 = (~1);
    var_16 = var_1;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((max((min((arr_0 [i_0] [i_0 - 3]), var_8)), (arr_0 [i_0 + 1] [i_0])))) ? (((-(arr_1 [i_0])))) : (~0)));
        arr_2 [i_0] [i_0] = (max((min((arr_1 [i_0 - 4]), (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 2]), var_9))));
        arr_3 [i_0 - 2] [i_0] = (((((var_8 ? 18446744073709551615 : (arr_1 [i_0 + 1])))) ? (((((arr_1 [i_0 - 3]) == (arr_1 [i_0 + 1]))))) : var_7));
    }
    #pragma endscop
}
