/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? var_1 : 1));
    var_17 = 1325118205;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 |= (max(var_14, ((1 ? var_12 : ((min(1073741822, var_15)))))));
        var_19 = (~-1);
        arr_4 [i_0] = (max(2969849091, (((arr_3 [i_0] [i_0]) & (arr_3 [i_0] [i_0])))));
        var_20 = (min((~-17233), ((-1 ? 5 : var_10))));
    }
    var_21 = (max(var_13, (((((max(var_10, var_8))) ? var_3 : var_0)))));
    #pragma endscop
}
