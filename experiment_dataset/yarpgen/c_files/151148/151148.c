/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_11 = (max(var_11, (((((min((!15), ((14 < (arr_1 [i_0 - 1] [i_0 - 2])))))) < var_3)))));
        var_12 = (~(max(((-6254589156318203249 ? var_1 : -37)), var_2)));
        var_13 = ((~(((arr_1 [8] [i_0]) | (arr_1 [i_0] [i_0 + 2])))));
    }
    var_14 = (((min(((var_7 ? -6254589156318203249 : 1172909985)), -var_9)) < (((var_10 ? (((min(12, 4)))) : var_0)))));
    var_15 = -26;
    var_16 = var_3;
    #pragma endscop
}
