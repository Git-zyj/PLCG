/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(578296873, 0));
    var_14 = ((~(min(var_5, 5304155709959203352))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (88 != 1);
        var_16 = (max(var_16, ((min(7765, 88)))));
    }
    #pragma endscop
}
