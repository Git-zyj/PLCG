/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((~(~173)));
    var_20 = ((2305843009213677568 < ((((((var_5 ? 1 : 1))) ? var_12 : var_12)))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_21 ^= ((!((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]))))));
        arr_2 [i_0] [i_0] = 5810147697924114653;
    }
    #pragma endscop
}
