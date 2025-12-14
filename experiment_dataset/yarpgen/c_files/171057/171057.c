/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = -4367652461029651232;
        var_19 = (~4367652461029651231);
        var_20 = (~1755059759);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = -1286079896671385176;
        var_22 = (!4367652461029651232);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_23 = -1;
        var_24 = -4294967295;
    }
    var_25 |= var_10;
    #pragma endscop
}
