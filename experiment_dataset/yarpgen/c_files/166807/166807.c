/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 &= arr_2 [i_0] [i_0 + 1];
        var_17 -= ((141 ? (((max(6526949019431726080, (arr_0 [i_0]))) / ((((arr_2 [19] [i_0]) ? var_12 : var_12))))) : (((max((arr_2 [8] [7]), (arr_0 [i_0 + 3])))))));
        var_18 = ((((-(arr_2 [i_0 + 2] [i_0 + 1]))) % (((arr_2 [i_0 + 1] [i_0 + 3]) ? 101 : (arr_0 [i_0 - 1])))));
    }
    var_19 -= var_4;
    var_20 &= var_4;
    #pragma endscop
}
