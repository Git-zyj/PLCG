/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((~(((254 <= (arr_1 [i_0]))))));
        var_18 = (max(var_18, ((max(((((max(var_15, (arr_1 [i_0])))) ? var_6 : ((2147483647 ? (arr_0 [i_0]) : 549755813760)))), var_10)))));
    }
    var_19 = (min(var_19, ((min((((((15175 ? 70 : var_11)) != (33 == -12912)))), -175)))));
    #pragma endscop
}
