/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 -= (((arr_1 [i_0 - 1] [i_0 + 1]) ? ((((!0) == 2147483647))) : (((((((arr_0 [i_0] [i_0]) ? var_9 : (-2147483647 - 1)))) || ((min((arr_1 [9] [i_0]), var_4))))))));
        arr_2 [i_0] |= -2147483647;
        var_15 = ((((-(arr_1 [i_0 - 1] [i_0 + 2])))) ? (arr_0 [i_0] [i_0 + 2]) : (arr_1 [1] [i_0 + 2]));
    }
    var_16 = ((var_13 ? (((((var_12 ? var_10 : var_12))) ? ((var_6 ? var_6 : var_4)) : -var_10)) : (min((2147483647 == 23), var_6))));
    var_17 += var_9;
    #pragma endscop
}
