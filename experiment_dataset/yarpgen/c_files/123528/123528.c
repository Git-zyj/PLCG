/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 *= 0;
        arr_4 [i_0] = ((0 && (arr_3 [i_0])));
        arr_5 [i_0] [i_0] = ((~(-32767 - 1)));
    }
    var_11 ^= (var_2 & (((!(~var_3)))));
    var_12 = ((var_2 == ((var_4 ? (min(4454104831389344514, 0)) : var_7))));
    #pragma endscop
}
