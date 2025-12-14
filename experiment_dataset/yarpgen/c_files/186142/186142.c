/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = (var_9 ^ -1961176052);
        var_16 = (((8666223771274590056 | 6123723967694251523) <= ((((-1961176052 ? 1961176052 : 6287837952633825946))))));
    }
    var_17 += (((var_1 ? (max(-9223372036854775793, 2007268326226293438)) : var_4)) >> (((~1961176062) + 1961176067)));
    var_18 = ((!((!(-1922821284 == -1)))));
    #pragma endscop
}
