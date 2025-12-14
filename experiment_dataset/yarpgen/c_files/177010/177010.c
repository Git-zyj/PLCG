/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((~(~-8703663474248534656)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((((((arr_1 [i_0] [i_0]) ? -8703663474248534656 : 8703663474248534673)) > ((var_9 ? 8703663474248534656 : var_6)))), (((arr_0 [i_0] [i_0]) > ((1 ? 1 : 1)))))))));
        var_14 = (min(var_14, 65535));
        var_15 = (~3584);
    }
    #pragma endscop
}
