/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_12 = (var_0 ? 7 : ((((arr_0 [i_0]) <= (!var_8)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (max(var_13, ((((arr_1 [i_1]) ? (((-(min((arr_0 [i_1]), 34277))))) : ((min(575897802350002176, 1011253739266033821))))))));
        var_14 = var_8;
    }
    var_15 = (min(var_15, var_0));
    #pragma endscop
}
