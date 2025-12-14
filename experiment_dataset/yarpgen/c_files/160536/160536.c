/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (!var_7);
    var_11 = var_9;
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [15] = (((arr_1 [i_0]) ? (((var_2 / 1) & 6488797739012102242)) : (((((arr_0 [i_0]) != (arr_1 [i_0])))))));
        var_13 = (((((!(((var_2 ? 1 : var_5)))))) != (max((!var_8), var_2))));
    }
    #pragma endscop
}
