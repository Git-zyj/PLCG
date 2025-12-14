/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_8 ? 127 : 66)))));
    var_11 = (0 ? 213 : (-127 - 1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((4290772992 ^ ((min((arr_1 [i_0]), ((3829079603 ? -111 : var_0)))))));
        var_12 = (min(var_12, 0));
    }
    #pragma endscop
}
