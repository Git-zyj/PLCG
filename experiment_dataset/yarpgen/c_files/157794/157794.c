/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((~(~56374))) >= 41));
    var_13 *= var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((max((arr_1 [13]), -28784)) >> (((max(-18099, var_11)) + 18162))));
        var_15 -= 102;
        var_16 = ((max(1, (arr_0 [i_0] [i_0]))));
    }
    #pragma endscop
}
