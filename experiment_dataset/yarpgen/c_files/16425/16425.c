/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(15117067262902287954, (((var_11 >> (15405 - 15389))))));
        var_15 = var_7;
        arr_4 [i_0] [i_0] = (((((((max(var_1, var_10))) && (((var_0 << (var_10 - 1936076463))))))) ^ (min(var_10, (var_9 | var_9)))));
        var_16 ^= var_6;
    }
    #pragma endscop
}
