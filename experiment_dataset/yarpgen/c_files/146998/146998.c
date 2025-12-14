/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 *= (var_5 > (arr_0 [i_0]));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0]) ? 65 : 255)) % 96));
        var_21 = (arr_2 [i_0]);
    }
    var_22 -= (min(0, 0));
    #pragma endscop
}
