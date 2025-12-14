/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((30120 ? 24567 : 0)), ((max((max(32, 25051)), -112)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((1919073563 ? 28 : 9836043389016307944)));
        var_15 = 40966;
    }
    var_16 = 7;
    var_17 = ((((max(-32, 18446744073709551615))) ? ((((0 <= 1366577025) % ((max(118, 768)))))) : (max(18446744073709551608, (min(-6, 0))))));
    #pragma endscop
}
