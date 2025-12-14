/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((((-(2 <= var_6)))), (((((var_7 ? var_2 : var_0))) ? 2 : (var_12 <= var_13))))))));
    var_15 -= ((4294967289 <= 1) <= (min(0, (max(var_6, var_13)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 ^= (min((~-911577067), ((((max((arr_0 [4]), (arr_1 [12])))) ? (max((arr_0 [0]), 4294967277)) : (46587287 && var_4)))));
        var_17 -= 1075696243;
    }
    #pragma endscop
}
