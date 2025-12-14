/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -3725076237003176698;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = ((~(min(3725076237003176688, var_7))));
        var_15 = -3725076237003176697;
    }
    var_16 = ((-((var_9 * (var_12 / -3725076237003176698)))));
    var_17 = (((~3737177790613564358) > var_0));
    var_18 += 234646730;
    #pragma endscop
}
