/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min(var_16, ((max(1, 1)))))));
        var_18 ^= (max((21717 * 3761888354), (((max(2176348629, 1))))));
    }
    #pragma endscop
}
