/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 2147483647;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 -= (((~-26006) ? ((((arr_0 [i_0]) || var_8))) : (arr_0 [i_0])));
        var_14 = (min(var_14, 1063320842990928718));
        arr_2 [i_0] = ((~((~(arr_1 [i_0])))));
    }
    #pragma endscop
}
