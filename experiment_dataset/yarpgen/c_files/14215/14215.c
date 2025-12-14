/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 ^= (207248290 || var_5);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((((arr_0 [i_0]) ? (max((arr_1 [i_0] [i_0]), -7840748889578586169)) : 1337574706)) <= 9223372036854775807);
        var_13 = ((max(1337574706, (((arr_1 [i_0] [i_0]) | (arr_0 [i_0]))))) % (arr_0 [i_0]));
        var_14 = (min(var_14, (arr_1 [10] [i_0])));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (1 && 2957392590) : (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
