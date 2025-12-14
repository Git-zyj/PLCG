/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-1167883271 != (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_19))));
        var_20 -= (arr_1 [i_0] [i_0]);
        var_21 |= 166;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (max(var_22, 422323098));
        arr_5 [i_1] = var_14;
        var_23 = (((((arr_4 [7]) & (arr_4 [i_1]))) + (arr_3 [i_1] [i_1])));
        var_24 = ((((!(2632117345 + 132)))));
        var_25 = (arr_4 [i_1]);
    }
    var_26 -= (255 ? 15 : -1917584838);
    #pragma endscop
}
