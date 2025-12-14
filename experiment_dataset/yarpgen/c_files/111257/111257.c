/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? var_14 : var_2));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 -= var_15;
        var_18 -= (max((min((arr_1 [8] [i_0]), (((!(arr_0 [i_0] [i_0])))))), (((~((min((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 1] [8])))))))));
        var_19 = (max(var_19, (((!(((arr_1 [10] [i_0 + 1]) >= (((var_3 ? var_7 : (arr_0 [i_0] [i_0])))))))))));
    }
    #pragma endscop
}
