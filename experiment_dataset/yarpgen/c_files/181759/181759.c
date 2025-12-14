/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(!var_7)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (max(var_17, (~var_13)));
        var_18 = ((((~(var_2 + var_10)))) ? -var_12 : (!var_13));
        arr_3 [i_0] = var_9;
    }
    #pragma endscop
}
