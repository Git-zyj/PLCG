/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 + 3]) <= 0));
        var_16 -= arr_0 [i_0 + 2];
        arr_4 [i_0 + 4] [i_0] = ((0 ? 9223372036854775800 : 12));
        var_17 = var_8;
        var_18 *= (arr_0 [i_0 - 1]);
    }
    var_19 = (((((max(-14, var_6) >= (min(var_7, var_5)))))));
    #pragma endscop
}
