/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (--615520215);
        arr_3 [i_0] = (min(((~(((arr_0 [i_0]) ? var_6 : (arr_0 [i_0]))))), ((~(max((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    var_11 = (((((11 ? (var_1 || 0) : var_1))) || ((0 >= (min(var_6, var_4))))));
    #pragma endscop
}
