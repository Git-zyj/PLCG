/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_17);
    var_21 = ((10397 >= (((((var_1 - 1411098930) < (!var_19)))))));
    var_22 = (min(220, (min((((5 ? 3878398370 : -100))), var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (min(var_23, (((34835 ? (!var_9) : var_8)))));
        var_24 = arr_0 [i_0] [i_0];
    }
    #pragma endscop
}
