/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (min((min(((8923390442353041446 ? var_15 : -72)), -39)), -71));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] &= max(((var_5 ? var_9 : var_7)), (var_7 + var_18));
        arr_4 [i_0 - 1] [i_0] = (min((((~(-122 % var_7)))), -8923390442353041446));
    }
    #pragma endscop
}
